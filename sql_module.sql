use practice;

CREATE table klm(
    id int primary key auto_increment,
    name varchar(255)
);

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

UPDATE klm SET score = 100 WHERE id = 1; 

select * from klm;

desc klm;