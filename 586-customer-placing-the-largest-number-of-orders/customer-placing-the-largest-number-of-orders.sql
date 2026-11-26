SELECT customer_numbeR
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(*) DESC
LIMIT 1;