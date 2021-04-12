delete from repairhis;
delete from parts;
delete from customer;
delete from staff;

drop table repairhis;
drop table parts;
drop table customer;
drop table staff;

/* ���� ���̺� */
create table staff (
  staff_id INTEGER primary key,
  staff_name varchar(20) not null,
  jumin varchar(20),
  tel varchar(20),
  join_date varchar(20),
  account varchar(20),
  salary INTEGER,
  customer_rate float
);

/* �� ���̺� */
create table customer (
  customer_id INTEGER primary key,
  customer_name varchar(20) not null,
  customer_birth varchar(20),
  tel varchar(20),
  address varchar(20)
);

/* ��ǰ ���̺� */
create table parts (
  part_id INTEGER primary key,
  part_name varchar(20),
  stock varchar(20),
  model_name varchar(20),
  price varchar(20)
);

/* ���� ���� ���̺� */ 
create table repairhis (
  repair_id INTEGER primary key,
  staff_id INTEGER ,
  customer_id INTEGER,
  part_id INTEGER,
  device_name varchar(20),
  repair_date varchar(20),
  repair_field varchar(20),
  repair_detail varchar(50),
  FOREIGN KEY (staff_id) references staff (staff_id),
  FOREIGN KEY (customer_id) references customer (customer_id),  
  FOREIGN KEY (part_id) references parts (part_id)
);

insert into staff values (5001, '������', '970619-2654321', '010-1111-2222', '2019/06/05', '994621',  '29990000', '10.0');
insert into staff values (5002, '�ǹ̼�', '961104-2123456', '010-3333-4444', '2019/11/01', '981265',  '29000000', '10.0');
insert into staff values (1000, '���¿�', '951006-1123456', '010-5555-6666', '2019/01/10', '842115',  '60000000', '7.0');
insert into staff values (2000, '�豤ȣ', '950125-1654321', '010-7777-8888', '2019/04/20', '561287',  '30000000', '7.0');

insert into customer values (1001, '�赿��', '2001/06/05', '051-123-4567', '�λ� �λ�����');
insert into customer values (1002, '�赿��', '2001/08/22', '051-123-4568', '�λ� ������');
insert into customer values (1003, '���ʱ�', '1985/01/19','051-485-5212', '�λ� ����');
insert into customer values (1004, '�̼�ȣ', '1996/11/11','051-428-2168', '�λ� �ؿ�뱸');

insert into parts values (402, '���÷���', '15', '�뱤��ġ', '50000');
insert into parts values (569, '���κ���', '20', '�뱤�е�', '200000');
insert into parts values (134, 'ī�޶�', '26', '�뱤��', '100000');
insert into parts values (150, '����', '80', '�뱤��', '68000');

insert into RepairHis values (156123, 5001, 1001, 134, '�뱤��', '2019/11/06', '�޴���', 'ī�޶� ������ ���� ī�޶� ��ü');
insert into RepairHis values (156124, 5002, 1002, '', '�뱤��', '2019/12/20', '�޴���', '������ ���� �� ������ ���� �� ��ǰ���� ��ȯ');
insert into RepairHis values (156125, 5001, 1002, '', '�뱤�е�', '2019/06/08', '�е�', '�Ҹ��� ���µ� ȭ���� ������ ���� �� ��ǰ���� ��ȯ');
insert into RepairHis values (156126, 5002, 1003, 134, '�뱤��ġ', '2019/11/28', '����Ʈ ��ġ', 'ȭ���� ���� ��İ� ���� ���÷��� ��ü');

select * from staff;
select * from customer;
select * from parts;
select * from repairhis;

update staff set staff_id = 5003 where staff_name = '���¿�';
update staff set staff_id = 5004 where staff_name = '�豤ȣ';

commit;