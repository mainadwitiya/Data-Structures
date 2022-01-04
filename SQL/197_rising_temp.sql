/*
Table: Weather

+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| id            | int     |
| recordDate    | date    |
| temperature   | int     |
+---------------+---------+
id is the primary key for this table.
This table contains information about the temperature on a certain day.
 

Write an SQL query to find all dates' Id with higher temperatures compared to its previous dates (yesterday).

Return the result table in any order.

*/

select w1.id from Weather w1, Weather w2 where w1.temperature > w2.temperature and TO_DAYS(w1.recordDate) -TO_DAYS(w2.recordDate)=1
