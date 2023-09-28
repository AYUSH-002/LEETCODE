# Write your MySQL query statement below
DELETE P2 from Person P1 join Person P2 on P1.email=P2.email where P2.id>P1.id;