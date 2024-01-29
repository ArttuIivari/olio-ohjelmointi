Employees osa 1:

1. SELECT DISTINCT dept_name FROM departments;

2. SELECT DISTINCT title FROM titles;

3. SELECT MIN(salary), MAX(salary) FROM salaries;

4. SELECT AVG(salary) FROM salaries;

5. SELECT * FROM employees WHERE last_name='Facello';

6. SELECT COUNT(*) FROM employees WHERE birth_date>'1949-12-31' AND birth_date<'1960-01-01'; 

9/10 hammaslääkäristä ei suosittele tätä keinoa: SELECT COUNT(*) FROM employees WHERE birth_date LIKE '195%'; 

7. SELECT COUNT(*) FROM employees WHERE gender='F'; 
 SELECT COUNT(*) FROM employees WHERE gender='M';



pet ja owner:

1. 


VIIKKO 2 TEORIA-PDF, sivu 7 alkaen aloita owner tablen teosta
se pitää sitten myöhemmin joinata tuohon pet tauluun :)

Stepeittäin:
1. CREATE TABLE owner(
    -> first_name varchar(255),
    -> last_name varchar(255),
    -> address varchar(255),
    -> ownerID int PRIMARY KEY AUTO_INCREMENT)
    -> ;

2. ALTER TABLE pet DROP COLUMN owner;
3. ALTER TABLE pet ADD COLUMN petID INT PRIMARY KEY AUTO_INCREMENT;
4. ALTER TABLE pet ADD COLUMN ownerID INT;
5. ALTER TABLE pet ADD CONSTRAINT FOREIGN KEY(ownerID) REFERENCES owner(ownerID);
6. Lisätään tietoja tauluun: INSERT INTO owner VALUES ( 'Diane','Keaton','Someaddress 4',NULL);
7. 
