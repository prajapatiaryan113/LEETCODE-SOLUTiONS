class Solution:

    def shortestPalindrome(self, s: str) -> str:

        rev = s[::-1]

        new_s = s + "#" + rev

        n = len(new_s)

        lps = [0] * n

        pref = 0
        suf = 1

        while suf < n:

            if new_s[suf] == new_s[pref]:

                lps[suf] = pref + 1

                suf = suf + 1
                pref = pref + 1

            else:

                if pref == 0:

                    lps[suf] = 0
                    suf = suf + 1

                else:

                    pref = lps[pref - 1]

        palindrome_length = lps[n - 1]

        remaining = s[palindrome_length:]

        return remaining[::-1] + s