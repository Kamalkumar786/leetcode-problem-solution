#Write your MySQL query statement below
 select w.id 
from weather w,weather w1 
where DATEDIFF(w.recordDate, w1.recordDate) = 1 AND w.temperature>w1.temperature;


