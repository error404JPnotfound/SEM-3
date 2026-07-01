--1. Update the SPI of all students with the name 'AMIT' to 8.20.

SELECT *FROM STUDENT UPDATE STUDENT SET SPI=8.2 WHERE SNAME='AMIT'

-- 2. Change the city of PRIYA from 'MUMBAI' to 'PUNE'.

SELECT *FROM STUDENT UPDATE STUDENT SET CITY='PUNE' WHERE SNAME='PRIYA'

-- 3. Update the SPI of HARSH to 7.80 and change his city to 'SURAT'.

SELECT *FROM STUDENT UPDATE STUDENT SET SPI=7.8,CITY='SURAT' WHERE SNAME='HARSH'

-- 4. Update the branch name from 'MECH' to 'MECHANICAL'.

SELECT *FROM STUDENT UPDATE STUDENT SET BRANCH='MECHANICAL' WHERE BRANCH='MECH'

-- 5. Change the branch of KAVYA to 'CIVIL'.

SELECT *FROM STUDENT UPDATE STUDENT SET BRANCH='CIVIL' WHERE SNAME='KAVYA'

-- 6. Update the SPI to 9.00 for all students whose STDID is between 110 and 115.
-- 7. Update the city of AYUSH to 'BANGALORE'.
-- 8. Update the SPI of ANJALI to 8.40 and her branch to 'CHEMICAL'.
--9. Give a 5% increment in SPI to all students.
-- 10. Increase the SPI by 15% only for students belonging to the 'IT' branch.
-- 11. Decrease the SPI by 0.20 for all students who live in 'VADODARA'.
-- 12. Update the branch to 'MINING', SPI to 6.50, and city to 'JAIPUR' where the student's name is VIKRAM.
-- 13. Update the city to 'RAJKOT' and SPI to 7.50 for all students whose branch is 'COMPUTER' and STDID is greater than 105.
-- 14. Deduct 10% from the SPI of any student whose current SPI is greater than 9.00.
--15. Update the SPI of the student with STDID 112 to NULL.
-- 16. Update the city of ROHAN to NULL.
-- 17. Display all details of students whose branch is NULL.
-- 18. Display the names and cities of students who have an SPI assigned (is not NULL).
-- 19. Update the student with STDID 105 to have the name 'MEET', branch 'EC', and SPI 7.90.
-- 20. Update the city to 'AHMEDABAD' and branch to 'DATA SCIENCE' for the student with STDID 120.
