-- Last updated: 6/22/2026, 3:06:44 PM
SELECT 
    p.firstName,
    p.lastName,
    a.city,
    a.state
FROM Person p
LEFT JOIN Address a
ON p.personId = a.personId;