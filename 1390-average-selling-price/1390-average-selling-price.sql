SELECT p.product_id, 
       ROUND(IF(SUM(u.units) > 0, SUM(p.price * u.units) / SUM(u.units), 0), 2) as average_price
FROM Prices as p 
left JOIN UnitsSold as u 
ON p.product_id = u.product_id 
   AND u.purchase_date >= p.start_date 
   AND u.purchase_date <= p.end_date
GROUP BY p.product_id;
