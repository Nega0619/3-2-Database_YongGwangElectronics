delete from repairhis;
delete from parts;
delete from customer;
delete from staff;

drop table repairhis;
drop table parts;
drop table customer;
drop table staff;

/* 직원 테이블 */
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

/* 고객 테이블 */
create table customer (
  customer_id INTEGER primary key,
  customer_name varchar(20) not null,
  customer_birth varchar(20),
  tel varchar(20),
  address varchar(20)
);

/* 부품 테이블 */
create table parts (
  part_id INTEGER primary key,
  part_name varchar(20),
  stock varchar(20),
  model_name varchar(20),
  price varchar(20)
);

/* 수리 내역 테이블 */ 
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

insert into staff values (5001, '신휘정', '970619-2654321', '010-1111-2222', '2019/06/05', '994621',  '29990000', '10.0');
insert into staff values (5002, '권미소', '961104-2123456', '010-3333-4444', '2019/11/01', '981265',  '29000000', '10.0');
insert into staff values (1000, '이태용', '951006-1123456', '010-5555-6666', '2019/01/10', '842115',  '60000000', '7.0');
insert into staff values (2000, '김광호', '950125-1654321', '010-7777-8888', '2019/04/20', '561287',  '30000000', '7.0');

insert into customer values (1001, '김동완', '2001/06/05', '051-123-4567', '부산 부산진구');
insert into customer values (1002, '김동완', '2001/08/22', '051-123-4568', '부산 강서구');
insert into customer values (1003, '정필교', '1985/01/19','051-485-5212', '부산 동구');
insert into customer values (1004, '이선호', '1996/11/11','051-428-2168', '부산 해운대구');

insert into parts values (402, '디스플레이', '15', '용광워치', '50000');
insert into parts values (569, '메인보드', '20', '용광패드', '200000');
insert into parts values (134, '카메라', '26', '용광폰', '100000');
insert into parts values (150, '센서', '80', '용광폰', '68000');

insert into RepairHis values (156123, 5001, 1001, 134, '용광폰', '2019/11/06', '휴대폰', '카메라 액정이 깨짐 카메라 교체');
insert into RepairHis values (156124, 5002, 1002, '', '용광폰', '2019/12/20', '휴대폰', '전원이 꺼진 후 켜지지 않음 새 제품으로 교환');
insert into RepairHis values (156125, 5001, 1002, '', '용광패드', '2019/06/08', '패드', '소리는 나는데 화면이 켜지지 않음 새 제품으로 교환');
insert into RepairHis values (156126, 5002, 1003, 134, '용광워치', '2019/11/28', '스마트 워치', '화면의 반이 까맣게 변함 디스플레이 교체');

select * from staff;
select * from customer;
select * from parts;
select * from repairhis;

update staff set staff_id = 5003 where staff_name = '이태용';
update staff set staff_id = 5004 where staff_name = '김광호';

commit;