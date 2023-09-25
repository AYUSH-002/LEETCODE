# Write your MySQL query statement below
select round(count(distinct b.player_id)/count(distinct a.player_id),2) as fraction 
from (select player_id,min(event_date) as event_date 
from Activity group by player_id) a left join Activity b on a.player_id=b.player_id 
and DATE_ADD(a.event_date, INTERVAL 1 DAY)=b.event_date;

