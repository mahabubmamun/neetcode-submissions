-- Write your query below
WITH wind AS
(
    SELECT student_id, exam_id, score, 
    ROW_NUMBER() OVER(
        PARTITION BY student_id
        ORDER BY score DESC, exam_id ASC
    ) AS rn
    FROM exam_results
)
SELECT student_id, exam_id, score
FROM wind
WHERE rn = 1
ORDER BY student_id