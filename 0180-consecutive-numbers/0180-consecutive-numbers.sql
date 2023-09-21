# Write your MySQL query statement below
select distinct e1.num as ConsecutiveNums 
from logs e1 inner join logs e2
on e1.id = e2.id - 1 and e1.num = e2.num
inner join logs e3 
on e2.id = e3.id - 1 and e3.num = e2.num

