# Write your MySQL query statement below
select COALESCE (
(select distinct salary
from employee 
ORDER BY salary DESC LIMIT 1 OFFSET 1),NULL) As SecondHighestSalary 
