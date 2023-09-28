SELECT Prices.product_id, COALESCE(ROUND(SUM(UnitsSold.units * Prices.price) / NULLIF(SUM(UnitsSold.units), 0), 2), 0) AS average_price
FROM Prices
LEFT JOIN UnitsSold ON Prices.product_id = UnitsSold.product_id
AND UnitsSold.purchase_date >= Prices.start_date
AND UnitsSold.purchase_date <= Prices.end_date
GROUP BY Prices.product_id;
