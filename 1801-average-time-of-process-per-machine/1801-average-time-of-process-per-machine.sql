# Write your MySQL query statement below
SELECT s.machine_id, ROUND(avg(e.timestamp-s.timestamp),3) 
as processing_time FROM Activity as e 
join Activity as s
on s.machine_id =e.machine_id 
where s.activity_type='start' and e.activity_type='end'
group by e.machine_id;

