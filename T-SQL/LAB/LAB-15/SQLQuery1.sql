--1. List all books with their authors. 

SELECT B.Title,A.AuthorName
FROM BOOK B 
JOIN Author A ON A.AuthorID = B.AuthorID

--2. List all books with their publishers. 

SELECT B.Title,P.PublisherName
FROM BOOK B 
JOIN Publisher P ON P.PUBLISHERID = B.PUBLISHERID

--3. List all books with their authors and publishers. 

SELECT B.Title,P.PublisherName,A.AuthorName
FROM BOOK B 
JOIN Publisher P ON P.PUBLISHERID = B.PUBLISHERID
JOIN AUTHOR A ON A.AUTHORID = B.PUBLISHERID

--4. List all books published after 2010 with their authors and publisher and price. 

SELECT A.AUTHORNAME,P.PublisherName,B.PRICE
FROM BOOK B 
JOIN Publisher P ON P.PUBLISHERID = B.PUBLISHERID
JOIN AUTHOR A ON A.AUTHORID = B.PUBLISHERID
WHERE B.PUBLICATIONYEAR > 2010

--5. List all authors and the number of books they have written. 

SELECT A.AuthorName, COUNT(B.AUTHORID) AS WRITTEN
FROM BOOK B 
JOIN AUTHOR A ON A.AUTHORID = B.PUBLISHERID
GROUP BY A.AUTHORNAME

--6. List all publishers and the total price of books they have published.

SELECT P.PUBLISHERNAME, SUM(B.PRICE) AS TOTAL
FROM PUBLISHER P
JOIN BOOK B ON P.PUBLISHERID = B.PUBLISHERID
GROUP BY P.PUBLISHERNAME

--7. List authors who have not written any books.

SELECT A.AUTHORNAME,B.TITLE
FROM AUTHOR A
LEFT JOIN BOOK B ON A.AUTHORID = B.AUTHORID
WHERE B.BOOKID IS NULL

--8. Display the total number of books written by each author along with the average price of their books. 

SELECT A.AuthorName, COUNT(B.AUTHORID) AS WRITTEN,AVG(B.PRICE) AS AVERAGE_PRICE
FROM BOOK B 
JOIN AUTHOR A ON A.AUTHORID = B.PUBLISHERID
GROUP BY A.AUTHORNAME

--9. lists each publisher along with the total number of books they have published, sorted from highest to 
--lowest.

SELECT A.AuthorName, COUNT(B.AUTHORID) AS WRITTEN
FROM BOOK B 
JOIN AUTHOR A ON A.AUTHORID = B.PUBLISHERID
GROUP BY A.AUTHORNAME
ORDER BY WRITTEN DESC

--10. Display number of books published each year.

SELECT PUBLICATIONYEAR, COUNT(PUBLICATIONYEAR) AS COUNT
FROM BOOK
GROUP BY PUBLICATIONYEAR

--11. List the publishers whose total book prices exceed 500, ordered by the total price. 

SELECT P.PUBLISHERNAME, SUM(B.PRICE) AS TOTAL
FROM PUBLISHER P
JOIN BOOK B ON P.PUBLISHERID = B.PUBLISHERID
GROUP BY P.PUBLISHERNAME
HAVING SUM(B.PRICE) > 500
ORDER BY SUM(B.PRICE)

--12. List most expensive book for each author, sort it with the highest price.

SELECT A.AUTHORNAME, MAX(B.PRICE) AS TOTAL
FROM AUTHOR A
JOIN BOOK B ON A.AUTHORID = B.AUTHORID
GROUP BY A.AUTHORNAME
ORDER BY MAX(B.PRICE) DESC

--13. Display publisher name and difference between maximum and minimum book price. 

SELECT P.PUBLISHERNAME, MAX(B.PRICE) - MIN(B.PRICE) AS DIFF
FROM PUBLISHER P
JOIN BOOK B ON P.PUBLISHERID = B.PUBLISHERID
GROUP BY P.PUBLISHERNAME

--14. List publisher name and total price of books published each year. 

SELECT P.PUBLISHERNAME,B.PUBLICATIONYEAR, SUM(B.PRICE) AS TOTAL
FROM PUBLISHER P
JOIN BOOK B ON P.PUBLISHERID = B.PUBLISHERID
GROUP BY P.PUBLISHERNAME,B.PUBLICATIONYEAR

--15. Display author name and total price of books sorted by highest total price. 
SELECT P.PUBLISHERNAME, SUM(B.PRICE) AS TOTAL
FROM PUBLISHER P
JOIN BOOK B ON P.PUBLISHERID = B.PUBLISHERID
GROUP BY P.PUBLISHERNAME
ORDER BY SUM(B.PRICE) DESC


