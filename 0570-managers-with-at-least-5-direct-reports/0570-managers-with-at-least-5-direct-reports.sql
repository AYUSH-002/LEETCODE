# Write your MySQL query statement below
SELECT one.name from 
Employee as one join Employee as two
on one.id=two.managerId
group by two.managerId
having count(two.id)>=5;