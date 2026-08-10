CREATE TABLE STUDENT_INFO(
    RNO INT PRIMARY KEY,
    NAME VARCHAR(20) NOT NULL,
    BRANCH VARCHAR(20) DEFAULT 'CE'
);
INSERT INTO STUDENT_INFO
VALUES 
(101,'RAJU','CE'),
(102,'AMIT','CE'),
(103,'SANJAY','ME'),
(104,'NEHA','EC'),
(105,'MEERA','EE'),
(106,'MAHESH','ME');

CREATE TABLE RESULT(
    RESULTID INT PRIMARY KEY,
    SPI DECIMAL(4,2) CHECK(SPI >=0 AND SPI <=10),
   RNO INT,FOREIGN KEY(RNO) REFERENCES STUDENT_INFO(RNO)
);

INSERT INTO RESULT
VALUES 
(11,8.8,101),
(12,9.2,102),
(13,7.6,103),
(14,8.2,104),
(15,7.0,105),
(16,8.9,106);

CREATE TABLE DEPARTMENT(
    DEPARTMENTID INT PRIMARY KEY,
    DEPARTMENTNAME VARCHAR(100) NOT NULL UNIQUE,
    DEPARTMENTCODE VARCHAR(50) NOT NULL UNIQUE,
    LOCATION VARCHAR(50) NOT NULL
);


INSERT INTO DEPARTMENT
VALUES 
(1,'ADMIN','ADM','A-BLOCK'),
(2,'COMPUTER','CE','C-BLOCK'),
(3,'CIVIL','CL','G-BLOCK'),
(4,'ELECTRICAL','EE','E-BLOCK'),
(5,'MECHANICAL','ME','B-BLOCK'),
(6,'CHEMICAL','CH','D-BLOCK');


CREATE TABLE PERSON(
    PERSONID INT PRIMARY KEY,
    PERSONNAME VARCHAR(100) NOT NULL,
    DEPARTMENTID INT FOREIGN KEY (DEPARTMENTID) REFERENCES DEPARTMENT(DEPARTMENTID)NULL,
    SALARY DECIMAL(8,2) NOT NULL,
    JOININGDATE DATETIME NOT NULL,
    CITY VARCHAR(100) NOT NULL
);

INSERT INTO PERSON
VALUES 
(101,'RAHUL TRIPATHI',2,56000,'2000-01-01','RAJKOT'),
(102,'HARDIK PANDYA',3,18000,'2001-09-25','AHMEDABAD'),
(103,'BHAVIN KANANI',4,25000,'2000-05-14','BARODA'),
(104,'BHOOMI VAISHNAV',1,39000,'2005-02-08','RAJKOT'),
(105,'ROHIT TOPIYA',2,17000,'2001-07-23','JAMNAGAR'),
(106,'PRIYA MENPARA',NULL,9000,'2000-10-18','AHMEDDABAD'),
(107,'NEHA SHARMA',2,34000,'2002-12-25','RAJKOT'),
(108,'NAYAN GOSWAMI',3,25000,'2001-07-01','RAJKOT'),
(109,'MEHUL BHUNDIYA',4,13500,'2005-01-09','BARODA'),
(110,'MOHIT MARU',5,14000,'2000-05-25','JAMNAGAR');


DROP TABLE PUBLISHER

CREATE TABLE PUBLISHER
(
    PublisherID INT PRIMARY KEY,
    PublisherName VARCHAR(100) NOT NULL UNIQUE,
    City VARCHAR(50) NOT NULL
);

INSERT INTO PUBLISHER VALUES
(1,'Rupa Publications','Delhi'),
(2,'Penguin India','New Delhi'),
(3,'ALEPH BOOK ACEDEMY','NEW DELHI'),
(4,'HarperCollins India','Noida');

CREATE TABLE AUTHOR
(
    AuthorID INT PRIMARY KEY,
    AuthorName VARCHAR(100) NOT NULL,
    Country VARCHAR(50)
);

INSERT INTO AUTHOR VALUES
(1,'Chetan Bhagat','India'),
(2,'Arundhati Roy','India'),
(3,'Amish Tripathi','India'),
(4,'Ruskin Bond','India'),
(5,'Jhumpa Lahiri','India'),
(6,'Paulo Coelho','Brazil'),
(7,'Sudha Murty','India');

DROP TABLE BOOK

CREATE TABLE BOOK
(
    BookID INT PRIMARY KEY,
    Title VARCHAR(200) NOT NULL,
    AuthorID INT NOT NULL,
    PublisherID INT NOT NULL,
    Price DECIMAL(10,2) NOT NULL,
    PublicationYear INT NOT NULL,

    FOREIGN KEY (AuthorID)
    REFERENCES AUTHOR(AuthorID),

    FOREIGN KEY (PublisherID)
    REFERENCES PUBLISHER(PublisherID)
);

INSERT INTO BOOK VALUES
(101,'Five Point Someone',1,1,250.00,2004),
(102,'The God of Small Things',2,2,350.00,1997),
(103,'Immortals of Meluha',3,3,300.00,2010),
(104,'The Blue Umbrella',4,1,180.00,1980),
(105,'The Lowland',5,2,400.00,2013),
(106,'Revolution 2020',1,1,275.00,2011),
(107,'Sita: Warrior of Mithila',3,3,320.00,2017),
(108,'The Room on the Roof',4,4,200.00,1956);

CREATE TABLE STADIUM
(
    Stadium_ID INT PRIMARY KEY,
    Stadium_Name VARCHAR(200) NOT NULL UNIQUE,
    Stadium_Capacity INT NOT NULL,
    Stadium_City VARCHAR(200) NOT NULL
);

INSERT INTO STADIUM VALUES
(101,'Wankhede Stadium',55000,'Mumbai'),
(102,'Chepauk Stadium',50000,'Chennai'),
(103,'Chinnaswamy Stadium',45000,'Bangalore'),
(104,'Eden Gardens',68000,'Kolkata'),
(105,'Sawai Mansingh Stadium',30000,'Jaipur'),
(106,'Arun Jaitley Stadium',42000,'Delhi'),
(107,'Bindra Stadium',38000,'Mohali'),
(108,'Rajiv Gandhi Stadium',55000,'Hyderabad');

CREATE TABLE TEAM
(
    TEAM_ID INT PRIMARY KEY,
    TEAM_NAME VARCHAR(200) NOT NULL UNIQUE,
    TEAM_COACH VARCHAR(200) NOT NULL,
    TEAM_WINS INT NOT NULL,
    TEAM_TOTAL_MATCHES INT NULL,
    HOME_STADIUM_ID INT NULL,

    FOREIGN KEY (HOME_STADIUM_ID)
    REFERENCES STADIUM(Stadium_ID)
);

INSERT INTO TEAM VALUES
(1,'Mumbai Indians','Mark Boucher',12,14,101),
(2,'Chennai Super Kings','Stephen Fleming',10,14,102),
(3,'Royal Challengers Bangalore','Faf du Plessis',9,14,103),
(4,'Kolkata Knight Riders','Gautam Gambhir',11,14,104),
(5,'Rajasthan Royals','Rahul Dravid',8,14,105),
(6,'Delhi Capitals','Ricky Ponting',7,14,106),
(7,'Punjab Kings','Anil Kumble',6,14,107),
(8,'Sunrisers Hyderabad','Brian Lara',9,14,108);

CREATE TABLE PLAYER
(
    PLAYER_ID INT PRIMARY KEY,
    PLAYER_FIRST_NAME VARCHAR(200) NOT NULL,
    PLAYER_LAST_NAME VARCHAR(200) NOT NULL,
    TEAM_ID INT NULL,
    PLAYER_ROLE VARCHAR(200),
    PLAYER_JERSEY_NUMBER INT NOT NULL,
    PLAYER_MATCHES_PLAYED INT,

    FOREIGN KEY (TEAM_ID)
    REFERENCES TEAM(TEAM_ID)
);

INSERT INTO PLAYER VALUES
(201,'Virat','Kohli',3,'Batsman',18,25),
(202,'Rohit','Sharma',1,'Batsman',45,28),
(203,'Jasprit','Bumrah',1,'Bowler',93,26),
(204,'MS','Dhoni',2,'Wicketkeeper',7,30),
(205,'Ravindra','Jadeja',2,'All-rounder',8,27),
(206,'Andre','Russell',4,'All-rounder',12,24),
(207,'Sanju','Samson',5,'Batsman',11,23),
(208,'Yuzvendra','Chahal',5,'Bowler',3,22),
(209,'Glenn','Maxwell',3,'All-rounder',32,21),
(210,'Sunil','Narine',4,'Bowler',74,29),
(211,'David','Warner',6,'Batsman',31,26),
(212,'Rishabh','Pant',6,'Wicketkeeper',17,24),
(213,'Kagiso','Rabada',6,'Bowler',25,23),
(214,'Shikhar','Dhawan',7,'Batsman',42,27),
(215,'Liam','Livingstone',7,'All-rounder',23,22),
(216,'Arshdeep','Singh',7,'Bowler',2,21),
(217,'Aiden','Markram',8,'Batsman',4,23),
(218,'Bhuvneshwar','Kumar',8,'Bowler',15,28),
(219,'Rahul','Tripathi',8,'Batsman',52,24),
(220,'Abdul','Samad',8,'All-rounder',11,29);

