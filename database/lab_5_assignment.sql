create table department(
D_id int not null,
D_name varchar(23) not null,
Location_id int not null,
primary key(D_id)
);


insert into department(D_id,D_name,Location_id)
values(11,'accounting',101);

insert into department(D_id,D_name,Location_id)
values(12,'research',102);

insert into department(D_id,D_name,Location_id)
values(13,'sales',103);

insert into department(D_id,D_name,Location_id)
values(14,'operation',104);

select * from department;



create table job(
job_id varchar(23) not null,
function char(15),
primary key(job_id)
);

insert into job(job_id,function)
values('j1','clerk');

insert into job(job_id,function)
values('j2','staff');

insert into job(job_id,function)
values('j3','analyst');

insert into job(job_id,function)
values('j4','salesperson');

insert into job(job_id,function)
values('j5','manager');

insert into job(job_id,function)
values('j6','president');

select * from job;



create table location(
L_id int not null,
regional_group char(18),
primary key(L_id)
);

insert into location(L_id,regional_group)
values(150,'New York');

insert into location(L_id,regional_group)
values(151,'Dallas');

insert into location(L_id,regional_group)
values(152,'chicago');

insert into location(L_id,regional_group)
values(153,'Boston');

select * from location;




create table employee(
E_id varchar(20) not null,
E_name char(15) not null,
manager_id varchar(10) not null,
joindate date,
job_id varchar(10) not null,
D_id int not null,
salary decimal(15,2) not null,
primary key(E_id),
foreign key(job_id) references job(job_id),
foreign key(D_id) references department(D_id)
);


insert into employee(E_id,E_name,manager_id,joindate,job_id,D_id,salary)
values('e1','Steve','m1','17-dec-12','j1',40,1000.0);

insert into employee(E_id,E_name,manager_id,joindate,job_id,D_id,salary)
values('e2','Smith','m2','21-feb-11','j4',30,700.0);

insert into employee(E_id,E_name,manager_id,joindate,job_id,D_id,salary)
values('e3','Jack','m3','25-apr-12','j5',10,3000.0);

insert into employee(E_id,E_name,manager_id,joindate,job_id,D_id,salary)
values('e4','John','m3','28-may-12','j5',10,3000.0);

insert into employee(E_id,E_name,manager_id,joindate,job_id,D_id,salary)
values('e5','Lynn','m3','13-june-12','j5',10,3000.0);

insert into employee(E_id,E_name,manager_id,joindate,job_id,D_id,salary)
values('e6','Allen','m2','25-feb-12','j4',30,500.0);


select * from employee;

solve:

select E_id,E_name,salary
from employee
order by E_name ASC,salary DESC;


select D_id,count(*)
from employee
group by D_id;


select D_id,count(*),max(salary),min(salary)
from employee 
group by D_id;


select job_id,count(*),max(salary),avg(salary)
from employee
group by job_id;


select count(D_id) from employee
where D_id=(select D_id from department
where D_name='sales'
group by D_id);


select E_name from employee
where D_id=(select D_id from department
where location_id=(select location_id from location
where regional_group='New York'
group by location_id)
group by D_id);


