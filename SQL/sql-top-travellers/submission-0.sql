-- Write your query below
SELECT u.name, COALESCE(r.distance, 0) AS travelled_distance
FROM users u LEFT JOIN
(SELECT user_id, SUM(distance) AS distance
FROM rides
GROUP BY user_id) r
ON u.id = r.user_id
ORDER BY COALESCE(r.distance,0) DESC,u.name ASC