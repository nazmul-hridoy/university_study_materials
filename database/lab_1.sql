create table student_result(
           id int,
           cgpa decimal(5,2),
           primary key(id)
);

create table student_CONTACT(
           id int,
           phone_no int,
           primary key(id)
);



create table student_blood_group(
           id int,
           B_GROUP varchar(20),
           primary key(id)
);


create table department(
           dept_id int,
           dept_name varchar(20),
           primary key(dept_id)
);



create table employee(
           emp_id int,
           emp_name varchar(20),
           emp_dept varchar(20),
           primary key(emp_id)
);



insert into student(id,name,semester,date_of_birth) values(1,'Iqbal','Spring','1993-01-03');

insert into student(id,name,semester,date_of_birth) values(2,'Rafiq','Summer','1992-02-06');



insert into student_result(id,cgpa) values(1,3);
insert into student_result(id,cgpa) values(2,4);



insert into student_contact(id,phone_no) values(1,0171747006);
insert into student_contact(id,phone_no) values(2,0171747005);


insert into student_blood_group(id,B_GROUP) values(1,'AB+');
insert into student_blood_group(id,B_GROUP) values(2,'O+');


insert into department(dept_id,dept_name) values(111,'Physics');
insert into department(dept_id,dept_name) values(222,'Chemistry');


insert into employee(emp_id,emp_name,emp_dept) values(101,'kuddus','Physics');
insert into employee(emp_id,emp_name,emp_dept) values(202,'Abul','Chemistry');





select student.id,student.name,student_contact.phone_no from student,student_contact where student.id = student_contact.id;


select id,name,semester,date_of_birth from student where NOT EXISTS (SELECT semester
                   FROM   student
                   WHERE  semester = 'Fall') ;




select student.id,student_blood_group.b_group from student,student_blood_group where ( student.id = student_blood_group.b_group AND student.semester > 3);

ALTER TABLE employee
  ADD emp_age int;




















