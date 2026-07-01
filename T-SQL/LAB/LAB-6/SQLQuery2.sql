--1.
--copy top 5 records where AMOUNT < 1000 into LOW DEPOSIT.

SELECT TOP 5 *INTO LOW_DEPOSIT FROM DEPOSIT WHERE AMOUNT<1000
SELECT *FROM  LOW_DEPOSIT

--2.
--copy records where AMOUNT 5000 into HIGH DEPOSIT.

SELECT TOP 5 *INTO HIGH_DEPOSIT FROM DEPOSIT WHERE AMOUNT=5000
SELECT *FROM HIGH_DEPOSIT

--3.
--copy only ACTNO and CNAME from DEPOSIT into CUSTOMER DETAILS.



--4.
--copy records where BNAME = 'BEDI' into BEDI CUSTOMERS.
--5.
--Copy records where BNAME = 'AJI' into AJI DEPOSITS.
--6.
--copy records where AMOUNT is between 1000 and 4000 into NORMAL_DEPOSITS.
--7.
--copy records where ADATE < '2025-01-01' into OLD_DEPOSITS.
--8.
--copy records where BNAME is not equal to 'BE-DI' into OTHER_BRANCH DEPOSITS.
--9.
--Copy top 3 records with only CNAME and BNAME from DEPOSIT into
--10. Create a table DEPOSIT EMPTY with the same structure as DEPOSIT but no records.
--CUSTOMER BRANCH.
--11. copy only ACTNO, AMOUNT, and ADATE into TRANSACTION_INFO.
--12. copy records where AMOUNT = 3000 into EXACT_3000.