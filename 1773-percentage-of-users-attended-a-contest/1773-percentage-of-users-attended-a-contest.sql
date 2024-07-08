SELECT r.contest_id, 
       ROUND((COUNT(r.user_id) / (SELECT COUNT(user_id) FROM Users) * 100), 2) AS percentage
FROM Users AS u 
LEFT JOIN Register AS r ON u.user_id = r.user_id 
WHERE r.contest_id IS NOT NULL 
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id;
