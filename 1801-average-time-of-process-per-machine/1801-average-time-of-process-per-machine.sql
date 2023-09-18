# Write your MySQL query statement below
select one.machine_id ,  round(avg(two.timestamp - one.timestamp),3) as processing_time  
from Activity one
join Activity two
on one.machine_id = two.machine_id and one.process_id = two.process_id and one.activity_type='start' and two.activity_type = 'end'
group by one.machine_id;
