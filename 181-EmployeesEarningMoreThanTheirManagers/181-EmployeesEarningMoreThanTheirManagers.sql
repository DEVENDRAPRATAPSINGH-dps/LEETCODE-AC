-- Last updated: 7/6/2026, 11:46:36 AM
SELECT e.name AS Employee
FROM Employee e
JOIN Employee m
ON e.managerId = m.id
WHERE e.salary > m.salary;