# Write your MySQL query statement below
SELECT MAX(num) as num FROM mynumbers
WHERE num IN(SELECT num FROM mynumbers
GROUP BY num
HAVING COUNT(num)=1)