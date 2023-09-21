# Write your MySQL query statement below
SELECT q.employee_id, q.name,
       COUNT(e.reports_to) AS reports_count,
       ROUND(AVG(e.age)) AS average_age
FROM Employees q
JOIN Employees e ON q.employee_id = e.reports_to
GROUP BY q.employee_id, q.name
HAVING reports_count > 0 AND average_age IS NOT NULL
order by employee_id ;