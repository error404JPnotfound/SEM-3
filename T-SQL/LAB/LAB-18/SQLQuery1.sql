--From the table STUDENT perform the following queries:  
--Part – A: 
--1. Display the details of students whose SPI is greater than the average SPI. 

SELECT 
*FROM STUDENT
WHERE SPI > (SELECT AVG(SPI) FROM STUDENT);

--2. Display the names of students whose SPI is less than the average SPI. 

SELECT 
*FROM STUDENT
WHERE SPI < (SELECT AVG(SPI) FROM STUDENT);

--3. Display the student details who has the highest SPI. 

SELECT 
*FROM STUDENT
WHERE SPI = (SELECT MAX(SPI) FROM STUDENT);


--4. Display the student details who has the lowest SPI.

SELECT 
*FROM STUDENT
WHERE SPI = (SELECT MIN(SPI) FROM STUDENT);

--5. Display the students whose SPI is greater than SPI of student DHARMIK. 

SELECT 
*FROM STUDENT
WHERE SPI > (SELECT SPI
			FROM STUDENT
			WHERE SNAME='DHARMIK');

--6. Display the students whose SPI is less than SPI of student RIYA. 

SELECT 
*FROM STUDENT
WHERE SPI < (SELECT SPI
			FROM STUDENT
			WHERE SNAME='RIYA');

--7. Display the students who belong to the same branch as KRUNAL.

SELECT 
*FROM STUDENT
WHERE BRANCH = (SELECT BRANCH
			FROM STUDENT
			WHERE SNAME='DHARMIK');

--8. Display the students whose branch is different from HETVI. 

SELECT 
*FROM STUDENT
WHERE BRANCH != (SELECT BRANCH
			FROM STUDENT
			WHERE SNAME='HETVI');

--9. Display the second highest SPI from RESULT table.  

SELECT MAX(SPI) AS SECOND_HIGHEST
FROM STUDENT
WHERE SPI  < (SELECT MAX(SPI) FROM STUDENT);

--10. Display the second lowest SPI from RESULT table.  

SELECT MIN(SPI) AS SECOND_HIGHEST
FROM STUDENT
WHERE SPI  > (SELECT MIN(SPI) FROM STUDENT);

--11. Display the names of students whose SPI is above branch-wise average SPI.  

SELECT
*FROM STUDENT S
WHERE SPI > (SELECT AVG(SPI)
			FROM STUDENT
			WHERE BRANCH = S.BRANCH);

--12. Display the branch having maximum average SPI.

SELECT BRANCH
FROM STUDENT
GROUP BY BRANCH
HAVING AVG(SPI) = (SELECT MAX(SP)
				   FROM (SELECT AVG(SPI) AS SP FROM STUDENT GROUP BY BRANCH)AS P)

--13. Display the branch having minimum average SPI.  

SELECT BRANCH
FROM STUDENT
GROUP BY BRANCH
HAVING AVG(SPI) = (SELECT MIN(SP)
				   FROM (SELECT AVG(SPI) AS SP FROM STUDENT GROUP BY BRANCH)AS P)

--From the table STUDENT_INFO and RESULT perform the following queries:  
--Part – B: 
--14. Display the students whose SPI is greater than all students of ME branch.

SELECT S1.*
FROM STUDENT_INFO S1
JOIN RESULT R1 ON R1.RNO=S1.RNO
WHERE R1.SPI > ALL(SELECT R.SPI
				  FROM RESULT R
				  JOIN STUDENT_INFO S ON R.RNO=S.RNO
				  WHERE S.BRANCH ='ME');

--15. Display the students whose SPI is less than any student of ME branch.  

SELECT S1.*
FROM STUDENT_INFO S1
JOIN RESULT R1 ON R1.RNO=S1.RNO
WHERE R1.SPI < ALL(SELECT R.SPI
				  FROM RESULT R
				  JOIN STUDENT_INFO S ON R.RNO=S.RNO
				  WHERE S.BRANCH ='ME');

--16. Display the student details whose SPI is not equal to any SPI of EC branch students. 

SELECT S1.*
FROM STUDENT_INFO S1
JOIN RESULT R1 ON R1.RNO=S1.RNO
WHERE R1.SPI != ALL(SELECT R.SPI
				  FROM RESULT R
				  JOIN STUDENT_INFO S ON R.RNO=S.RNO
				  WHERE S.BRANCH ='EC');


--17. Display the names of students who scored higher SPI than student of RNO 103. 

SELECT S1.*
FROM STUDENT_INFO S1
JOIN RESULT R1 ON R1.RNO = S1.RNO
WHERE R1.SPI > (SELECT R.SPI
			   FROM RESULT R
			   JOIN STUDENT_INFO S ON R.RNO = S.RNO
			   WHERE R.RNO='103')

--18. Display the students whose SPI is greater than average SPI of their own branch.

SELECT S1.*
FROM STUDENT_INFO S1
JOIN RESULT R1 ON R1.RNO = S1.RNO
WHERE R1.SPI > (SELECT AVG(R.SPI)
               FROM RESULT R
			   JOIN STUDENT_INFO S ON R.RNO=S.RNO
			   WHERE BRANCH=S1.BRANCH)

--19. Display the students whose SPI is greater than the average SPI of CE branch but greater than the 
--maximum SPI of ME branch.

SELECT S1.*
FROM STUDENT_INFO S1
JOIN RESULT R1 ON R1.RNO = S1.RNO
WHERE R1.SPI > (SELECT AVG(R.SPI)
               FROM RESULT R
			   JOIN STUDENT_INFO S ON R.RNO=S.RNO
			   WHERE BRANCH='CE')
			   AND 
			   R1.SPI >(SELECT MAX(R2.SPI)
               FROM RESULT R2
			   JOIN STUDENT_INFO S2 ON R2.RNO=S2.RNO
			   WHERE BRANCH='ME') 

--20. Display the branch names whose average SPI is greater than the overall average SPI.



--21. Display the students who have maximum SPI in their respective branch. 
--22. Display the students whose SPI is greater than their average SPI of their branch and greater than overall 
--average SPI.  
--Part – C: 
--23. Display the students whose SPI is greater than at least one student of every branch.  
--24. Display the students whose SPI is less than all students of CE branch.  
--25. Display the branch that contains the student with highest SPI.  
--26. Display the students whose SPI is less than the SPI of every student in CE branch and greater than every 
--student in ME branch.