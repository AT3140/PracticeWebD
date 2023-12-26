use practice;

CREATE table klm(
    id int primary key auto_increment,
    name varchar(255)
);

DROP TABLE klm;

RENAME TABLE
	data_tableau TO tableau_data,
    market_data TO sales;

INSERT INTO klm (valid, zone,  name, score)
	values (true, 'delhi', 'raghav', 99);
DELETE FROM klm where id = 2;

ALTER TABLE klm 
	ADD COLUMN score int;
ALTER TABLE klm 
	ADD COLUMN valid boolean FIRST;
ALTER TABLE klm 
	ADD COLUMN zone VARCHAR(10) AFTER ID;
ALTER TABLE klm 
	DROP COLUMN valid,
    DROP COLUMN zone;
ALTER TABLE klm 
	DROP PRIMARY KEY;
ALTER TABLE klm 
	MODIFY id int primary key auto_increment;
ALTER TABLE klm 
	RENAME COLUMN score to marks;
ALTER TABLE test 
	RENAME klm;

UPDATE klm SET score = 100 WHERE id = 1; 

select * from klm;
select sum(marks) from klm;

desc klm;