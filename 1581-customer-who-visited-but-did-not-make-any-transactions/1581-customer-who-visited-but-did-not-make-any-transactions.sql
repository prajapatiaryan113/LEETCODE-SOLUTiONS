# Write your MySQL query statement below
select Visits.customer_id,count(Visits.visit_id)as count_no_trans 
from Visits 
LEFT JOIN Transactions on 
Transactions.visit_id = Visits.visit_id 
where 
Transactions.visit_id IS NULL
group by 
Visits.customer_id 
order by count_no_trans desc;
