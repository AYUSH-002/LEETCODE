# Write your MySQL query statement below
select name from Employee where id in (select managerId from Employee group by managerId having count(*)>=5)
# SELECT one.name from 
# Employee as one join Employee as two
# on one.id=two.managerId
# group by two.managerId
# having count(two.id)>=5;