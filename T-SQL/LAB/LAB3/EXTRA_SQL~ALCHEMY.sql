--1. Display all students whose city is 'RAJKOT' and branch is 'COMPUTER'

SELECT *FROM STUDENT WHERE CITY='RAJKOT' AND BRANCH='COMPUTER'

--2. Retrieve names and SPI of students whose SPI is less than 7.00.

SELECT SNAME,SPI FROM STUDENT WHERE SPI > 7

--3.Display all details of students whose ID is between 103 and 107.

SELECT *FROM STUDENT WHERE STDID BETWEEN 103 AND 107

--4.Retrieve Student ID, Name, and Branch of students whose branch is 'MEHANICAL'.

SELECT STDID,SNAME,BRANCH FROM STUDENT WHERE BRANCH='MECHANICAL'

--5.Display all records where the city is not 'SURAT'.

SELECT *FROM STUDENT WHERE CITY !='SURAT'

--6.Display names of students whose branch is either 'ELECTRICAL' or 'MECHANICAL'.

SELECT SNAME FROM STUDENT WHERE BRANCH='ELECTRICAL' OR BRANCH='MECHANICAL'

--7.Retrieve all students whose SPI is not between 6.0 and 8.0.

SELECT *FROM STUDENT WHERE (SPI > 6 OR SPI <8)

--8.Display details of students whose city is NULL.

SELECT *FROM STUDENT WHERE CITY IS NULL

--9.Display all students whose SPI is greater than 8.0 and who do not belong to either COMPUTER or
--CIVIL branch.



--IO. Display all students whose branch is NULL and whose city is not NULL.
--I l. Retrieve students whose SPI is greater than 7.5 and less than 9.0 but whose IDs are not between
--104 and 108.
--12. Retrieve all records where the city is RAJKOT and the branch is not COMPUTER.
--13. Display students whose IDs are not between 102 and 107 and whose SPI is greater than 7.5.
--14. Retrieve students whose SPI is between 7.0 and 8.5 and who belong to COMPUTER, CIVIL, or
--MECHANICAL branches.
--15. Display records where the branch is COMPUTER and city is not RAJKOT and SPI is greater than
--7.0.
--16. Retrieve student name and id along with the city whose city is RAJKOT and SPI is less than 8.0, or
--whose city is SURAT and SPI is greater than 8.0.
--17. Display students who belong to COMPUTER branch and have SPI greater than 8.0, or belong to
--CIVIL branch and have SPI greater than 7.0.
--18. Retrieve students whose IDs are in the range 101—110 but not in the range 104—107.