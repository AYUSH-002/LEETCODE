# Write your MySQL query statement below
SELECT DISTINCT e1.num AS ConsecutiveNums
FROM Logs e1
JOIN Logs e2 ON e1.num = e2.num AND e1.id = e2.id - 1
LEFT JOIN Logs e3 ON e1.num = e3.num AND e2.id = e3.id - 1
LEFT JOIN Logs e4 ON e1.num = e4.num AND e3.id = e4.id - 1
WHERE e3.id IS NOT NULL OR e4.id IS NOT NULL;

