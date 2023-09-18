# Write your MySQL query statement below
SELECT Employee.name,Bonus.bonus
FROM Employee left join Bonus 
on Bonus.empId=Employee.empId
where (Bonus.bonus<1000 or Bonus.empId is null);