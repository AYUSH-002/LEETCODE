# Write your MySQL query statement below
# Write your MySQL query statement below
select 'Low Salary' as category, count(*) as accounts_count
from Accounts
where income < 20000

UNION 
select 'Average Salary', count(*)
from Accounts 
where income >= 20000 && income <= 50000

UNION
select 'High Salary', count(*)
from Accounts 
where income > 50000