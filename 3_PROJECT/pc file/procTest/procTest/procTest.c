
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[40];
};
static const struct sqlcxp sqlfpn =
{
    39,
    "C:\\Visual\\procTest\\procTest\\procTest.pc"
};


static unsigned int sqlctx = 226935925;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[10];
   unsigned int   sqhstl[10];
            int   sqhsts[10];
            void  *sqindv[10];
            int   sqinds[10];
   unsigned int   sqharm[10];
   unsigned int   *sqharc[10];
   unsigned short  sqadto[10];
   unsigned short  sqtdso[10];
} sqlstm = {13,10};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

 static const char *sq0016 = 
"select REPAIRHIS.REPAIR_ID ,customer.CUSTOMER_ID ,customer.CUSTOMER_NAME ,s\
taff.STAFF_NAME ,parts.PART_NAME ,REPAIRHIS.DEVICE_NAME ,REPAIRHIS.REPAIR_DAT\
E ,REPAIRHIS.REPAIR_FIELD ,parts.PRICE ,REPAIRHIS.REPAIR_DETAIL  from custome\
r ,REPAIRHIS ,staff ,parts where ((((REPAIRHIS.CUSTOMER_ID=customer.customer_\
id and staff.STAFF_ID=REPAIRHIS.STAFF_ID) and parts.PART_ID=REPAIRHIS.PART_ID\
) and staff.STAFF_ID=REPAIRHIS.STAFF_ID) and repairhis.customer_id=:b0)      \
     ";

 static const char *sq0017 = 
"select *  from staff            ";

 static const char *sq0018 = 
"select part_id ,part_name ,stock  from parts where stock<5           ";

 static const char *sq0019 = 
"select *  from customer            ";

 static const char *sq0025 = 
"select repair_id  from repairhis            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,846,0,0,
5,0,0,0,0,0,27,106,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,31,126,0,0,0,0,0,1,0,
51,0,0,3,83,0,4,219,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
78,0,0,4,51,0,4,262,0,0,1,0,0,1,0,2,3,0,0,
97,0,0,5,57,0,4,268,0,0,1,0,0,1,0,2,9,0,0,
116,0,0,6,124,0,3,269,0,0,6,6,0,1,0,1,3,0,0,1,3,0,0,1,3,0,0,1,9,0,0,1,9,0,0,1,
9,0,0,
155,0,0,7,0,0,29,272,0,0,0,0,0,1,0,
170,0,0,8,58,0,4,289,0,0,2,1,0,1,0,2,3,0,0,1,9,0,0,
193,0,0,9,71,0,5,294,0,0,3,3,0,1,0,1,3,0,0,1,9,0,0,1,3,0,0,
220,0,0,10,71,0,5,297,0,0,3,3,0,1,0,1,3,0,0,1,9,0,0,1,3,0,0,
247,0,0,11,0,0,29,300,0,0,0,0,0,1,0,
262,0,0,12,51,0,4,306,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
285,0,0,13,103,0,4,336,0,0,1,0,0,1,0,2,3,0,0,
304,0,0,14,50,0,3,340,0,0,4,4,0,1,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
335,0,0,15,0,0,29,342,0,0,0,0,0,1,0,
350,0,0,16,465,0,9,407,0,0,1,1,0,1,0,1,3,0,0,
369,0,0,16,0,0,13,413,0,0,10,0,0,1,0,2,3,0,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,2,9,0,0,2,9,0,0,2,3,0,0,2,9,0,0,
424,0,0,16,0,0,15,432,0,0,0,0,0,1,0,
439,0,0,17,32,0,9,483,0,0,0,0,0,1,0,
454,0,0,17,0,0,13,489,0,0,7,0,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
3,0,0,2,4,0,0,
497,0,0,17,0,0,15,505,0,0,0,0,0,1,0,
512,0,0,18,69,0,9,536,0,0,0,0,0,1,0,
527,0,0,18,0,0,13,542,0,0,3,0,0,1,0,2,3,0,0,2,9,0,0,2,3,0,0,
554,0,0,18,0,0,15,554,0,0,0,0,0,1,0,
569,0,0,19,35,0,9,590,0,0,0,0,0,1,0,
584,0,0,19,0,0,13,597,0,0,4,0,0,1,0,2,3,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
615,0,0,19,0,0,15,608,0,0,0,0,0,1,0,
630,0,0,20,75,0,4,625,0,0,2,1,0,1,0,2,97,0,0,1,3,0,0,
653,0,0,21,1964,0,4,660,0,0,2,1,0,1,0,2,97,0,0,1,3,0,0,
676,0,0,22,96,0,4,711,0,0,2,1,0,1,0,2,97,0,0,1,3,0,0,
699,0,0,23,152,0,4,731,0,0,3,1,0,1,0,2,97,0,0,2,97,0,0,1,3,0,0,
726,0,0,24,169,0,4,748,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
749,0,0,25,44,0,9,782,0,0,0,0,0,1,0,
764,0,0,25,0,0,13,788,0,0,1,0,0,1,0,2,3,0,0,
783,0,0,25,0,0,15,794,0,0,0,0,0,1,0,
798,0,0,26,62,0,4,865,0,0,1,0,0,1,0,2,3,0,0,
817,0,0,17,32,0,9,887,0,0,0,0,0,1,0,
832,0,0,17,0,0,13,893,0,0,2,0,0,1,0,2,9,0,0,2,3,0,0,
855,0,0,17,0,0,15,903,0,0,0,0,0,1,0,
};


// win32 Visual C 컴파일시 추가
// 프로그램 가장 첫 줄에 추가할 것
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

void DB_connect();
void printBonusList();
void sql_error(char *msg);
void print_menu();
void accept_service();
void get_repairhis(int uid);
void init_yonggwang();
void get_staff();
int getRepairMonth(int temp);
int getWeekno(int temp);
int getDay(int temp);
void showDatas(int temp);
int getAge(int temp);
void showRepairId();
void candyEvent();
int signup();
void get_leak_parts();
void get_customer();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

   /* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


#define getch() _getch()

void main() {
   int user_id = 0;
   int num = 0;

   DB_connect();
   init_yonggwang();

    do{
	print_menu();
	scanf("%d", &num);
	switch(num){
		case 1:
			printf("-----------서비스를 접수합니다.----------");
			accept_service();
			break;
		case 2:
			printf("------서비스 접수 내역을 조회합니다.-----");
			printf("유저 아이디를 입력해 주세요....\n");
			scanf("%d", &user_id);
			printf("user_id 출력 : %d\n", user_id);
			get_repairhis(user_id);
			break;
		case 3:
			printf("-----------직원을 조회합니다.-------------");
			get_staff();
			break;
		case 4:
			printf("-----------고객을 조회합니다.-------------");
			get_customer();
			break;
		case 5:
			printf("----------부품 재고를 조회합니다.---------");
			printf("\n-----재고가 5개 이하로 남은 부품 목록-----");
			get_leak_parts();
			break;
		case 6:
			printf("-------------수능 이벤트------------------");
			candyEvent();
			break;
		case 7:
			printf("-----------용광전자 이달의 직원-----------");
			printBonusList();
			break;

		case 8:
			printf("프로그램을 종료합니다.\n 안녕히 가세요!\n");
			exit(0);
		default:
			printf("1에서 7 사이의 숫자를 눌러주세요.");
		}
   }while(num>7);
   

   getch();
}

void DB_connect() {
   strcpy((char *)uid.arr, "zstB7@//sedb.deu.ac.kr:1521/orcl");
   uid.len = (short) strlen((char *)uid.arr);
   strcpy((char *)pwd.arr, "77777777");
   pwd.len = (short) strlen((char *)pwd.arr);
   
   /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )10;
   sqlstm.offset = (unsigned int  )5;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&uid;
   sqlstm.sqhstl[0] = (unsigned int  )82;
   sqlstm.sqhsts[0] = (         int  )82;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&pwd;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )22;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlstm.sqlcmax = (unsigned int )100;
   sqlstm.sqlcmin = (unsigned int )2;
   sqlstm.sqlcincr = (unsigned int )1;
   sqlstm.sqlctimeout = (unsigned int )0;
   sqlstm.sqlcnowait = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if(sqlca.sqlcode != 0 && sqlca.sqlcode != -1405) { //connect
      printf("\7Connect error: %s ",sqlca.sqlerrm.sqlerrmc);
      getch(); 
      exit(-1);
   }
   printf("Oracle Connect SUCCESS by %s\n", uid.arr);
}



void sql_error(char *msg) {
   char err_msg[128];		size_t buf_len, msg_len;
   /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

   printf("\n%s\n", msg);      
   buf_len = sizeof(err_msg);
   sqlglm(err_msg, &buf_len, &msg_len);   
   printf("%.*s\n", msg_len, err_msg);
   getch();
   /* EXEC SQL ROLLBACK WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )36;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   exit(-1);
}

void print_menu(){
   printf("1. 서비스 접수하기\n");
   printf("2. 서비스 접수 내역\n");
   printf("3. 직원관리\n");
   printf("4. 고객관리\n");
   printf("5. 부품관리\n");
   printf("6. 이벤트\n");
   printf("7. 이달의 직원\n");
}

void init_yonggwang(){
   system("cls");
   puts("\n\n              @@@@@@&                                       &@@@/                                     #@@@#                                     .@@@#          \n            (@@.   .@@(                               .#@@.   %@@*                                 .    /@@@                                      ,@@@         \n            &@/     .@@                         @@@@@@%*&@@/  *@@,                       .@@@@@@@@@@#   .@@@                              .%@@@/   @@@         \n             (@@@&&@@@.                                 (@@   *@@,                          /..@@.      .@@@                        /@@@@@#,...    @@@         \n           .#,  .*/@@(                            &@@#  *@    *@@,                            @@@# %@@@@@@@@                             #@@.      @@@         \n            @@@.    @@(                             @@#       *@@#&@@@.                    .@@@(@@#  */. @@@                            @@@(       @@@         \n   *@@&&%%%&&@@@@@@@@@@@@@@,                    ..,,/@&&@@@@@@@@@,,/%&                   /@@,   @@@      @@@                          *@@&,@@@@    @@@         \n     ,&@@@&(,                                 &@@@@@@#,        @@                               ,@@      %@&                        /@%     ,@@/   @@@@@@@@    \n               ./#(.                                           %(                                #       *@,                                       @@@         \n             &@@@%&@@%                                 (@@@@@@@*                               .%(.      **                                        @@@         \n            &@(     (@%                               .@@.    &@(                               &@@@                                               &@#         \n            #@&     (@&                               .@@     #@#                                 @@                                               #@.         \n              @@@@@@@%                                 ,@@@@@@@#                                   @@@@@@@@%                                       (*          \n                 ..                                        ,.                                        ,*,                                                       \n                                                                                                                                                               \n");
   puts("                                                                용광전자에 오신 것을 환영합니다.         \n");
}

void accept_service(){
	/* EXEC SQL BEGIN DECLARE SECTION; */ 

		int vPid;//Parts_id
		/* varchar vParts[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vParts;
//Parts_name
		/* varchar vRdetail[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } vRdetail;
//Repair_detail
		int vCid;//Customer_id
		int vRid;//Repair_id
		int vSid;//Staff_id
		int Pprice;
		
		char sNTempBuf[32];//char for customer name
		char sTTempBuf[32];//char for tel
		char sDTempBuf[50];//char for Repair_detail
		char sPTempBuf[32];//char for parts name
		char test[32];
		/* varchar vPname[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vPname;
//Product_name
		/* varchar vPfield[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vPfield;
//Product_field_name
		/* varchar vRdate[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vRdate;
//Repair_date

		short iCid_ind;
		short vCid_ind;
		short vRid_ind;
		short vSid_ind;
		short vPid_ind;
		short vPname_ind;
		short vPfield_ind;
		short vRdate_ind;
		short vRdetail_ind;
	/* EXEC SQL END DECLARE SECTION; */ 


	/*init start*/
	int pro_num = 0;//product_number
	int rdm = 0;//random value
	int user_id = 0;

	memset(&vRdetail, 0x00, sizeof(vRdetail));
	memset(&vParts, 0x00, sizeof(vParts));

	memset(&vPname, 0x00, sizeof(vPname));
	memset(&vPfield, 0x00, sizeof(vPfield));
	memset(&vRdate, 0x00, sizeof(vRdate));

	memset(&sNTempBuf, 0x00, sizeof(sNTempBuf));
	memset(&sTTempBuf, 0x00, sizeof(sTTempBuf));
	memset(&sDTempBuf, 0x00, sizeof(sDTempBuf));
	memset(&sPTempBuf, 0x00, sizeof(sPTempBuf));
	memset(&test, 0x00, sizeof(test));
	vCid = 0;
	vRid = 0;
	vSid = 0;
	vPid = 0;
	iCid_ind = -1;
	Pprice = 0;

	vCid_ind = -1;
	vRid_ind = -1;
	vSid_ind = -1;
	vPid_ind = -1;
	vPname_ind = -1;
	vPfield_ind = -1;
	vRdate_ind = -1;
	vRdetail_ind = -1;
	/*init end*/
	
	printf("------------서비스 접수--------------\n");
	printf("*이름과 전화번호를 입력해 주세요*\n");
	gets();
	printf("이름 : ");
	gets(sNTempBuf);
	printf("전화번호 : ");
	gets(sTTempBuf);
	//printf(sTempBuf);

	/* EXEC SQL select customer_id into :vCid:iCid_ind from customer where customer_name = :sNTempBuf and tel = :sTTempBuf; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select customer_id into :b0:b1  from customer where (custom\
er_name=:b2 and tel=:b3)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )51;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&vCid;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&iCid_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)sNTempBuf;
 sqlstm.sqhstl[1] = (unsigned int  )32;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)sTTempBuf;
 sqlstm.sqhstl[2] = (unsigned int  )32;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	
	if(iCid_ind == -1){
		printf("회원가입이 필요합니다!\n");
		vCid = signup();
		printf("새로 회원가입 된 고객의 id값 : [%d]\n", vCid);
	}
	else{
		printf("id값 = [%d]\n\n", vCid);
	}

	printf("수리할 제품을 선택하세요\n");
	printf("1. 휴대폰 2. 패드 3. 스마트 워치\n");
	
	do{
		scanf("%d", &pro_num);
		switch(pro_num){
			case 1:
				strcpy((char*)vPname.arr, "용광폰");
				vPname.len = strlen(vPname.arr);
				strcpy((char*)vPfield.arr, "휴대폰");
				vPfield.len = strlen(vPfield.arr);
				printf("%s, %s\n", vPname.arr, vPfield.arr);
				break;
			case 2:
				strcpy((char*)vPname.arr, "용광패드");
				vPname.len = strlen(vPname.arr);
				strcpy((char*)vPfield.arr, "패드");
				vPfield.len = strlen(vPfield.arr);
				printf("%s, %s\n", vPname.arr, vPfield.arr);
				break;
			case 3:
				strcpy((char*)vPname.arr, "용광 워치");
				vPname.len = strlen(vPname.arr);
				strcpy((char*)vPfield.arr, "스마트 워치");
				vPfield.len = strlen(vPfield.arr);
				printf("%s, %s\n", vPname.arr, vPfield.arr);
				break;
			default:
				printf("1에서 3까지의 숫자를 선택하세요!\n");
		}
	}while(pro_num>3);
	
	/* EXEC SQL select max(repair_id)+1 into :vRid from repairhis; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select (max(repair_id)+1) into :b0  from repairhis ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )78;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&vRid;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	user_id = vCid;
	printf("user_id값 : %d", user_id);
	rdm = rand()%4 + 5001;
	printf("rdm 값 : %d\n", rdm);
	vSid = rdm;
	/* EXEC SQL select to_char(sysdate, 'YYYY-MM-DD') into :vRdate from dual; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select to_char(sysdate,'YYYY-MM-DD') into :b0  from dual ";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )97;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&vRdate;
 sqlstm.sqhstl[0] = (unsigned int  )22;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	/* EXEC SQL insert into REPAIRHIS(repair_id, staff_id, customer_id, device_name, repair_date, repair_field) values (:vRid, :vSid, :vCid, :vPname, :vRdate, :vPfield); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into REPAIRHIS (repair_id,staff_id,customer_id,devic\
e_name,repair_date,repair_field) values (:b0,:b1,:b2,:b3,:b4,:b5)";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )116;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&vRid;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&vSid;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)&vCid;
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqhstv[3] = (         void  *)&vPname;
 sqlstm.sqhstl[3] = (unsigned int  )22;
 sqlstm.sqhsts[3] = (         int  )0;
 sqlstm.sqindv[3] = (         void  *)0;
 sqlstm.sqinds[3] = (         int  )0;
 sqlstm.sqharm[3] = (unsigned int  )0;
 sqlstm.sqadto[3] = (unsigned short )0;
 sqlstm.sqtdso[3] = (unsigned short )0;
 sqlstm.sqhstv[4] = (         void  *)&vRdate;
 sqlstm.sqhstl[4] = (unsigned int  )22;
 sqlstm.sqhsts[4] = (         int  )0;
 sqlstm.sqindv[4] = (         void  *)0;
 sqlstm.sqinds[4] = (         int  )0;
 sqlstm.sqharm[4] = (unsigned int  )0;
 sqlstm.sqadto[4] = (unsigned short )0;
 sqlstm.sqtdso[4] = (unsigned short )0;
 sqlstm.sqhstv[5] = (         void  *)&vPfield;
 sqlstm.sqhstl[5] = (unsigned int  )22;
 sqlstm.sqhsts[5] = (         int  )0;
 sqlstm.sqindv[5] = (         void  *)0;
 sqlstm.sqinds[5] = (         int  )0;
 sqlstm.sqharm[5] = (unsigned int  )0;
 sqlstm.sqadto[5] = (unsigned short )0;
 sqlstm.sqtdso[5] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	printf("수리내역 연번 : %d 직원 번호 : %d 고객 번호 : %d 수리 제품 : %s 수리 분야 : %s 수리 일자 : %s\n", vRid, vSid, vCid, vPname.arr, vPfield.arr, vRdate.arr);
	/* EXEC SQL commit work; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )155;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	
	printf("---------------------수리 접수 완료---------------------\n\n");

	printf("상세 수리 내역 : ");
	gets(test);
	gets(sDTempBuf);
	strcpy((char*)vRdetail.arr, sDTempBuf);
	vRdetail.len = strlen(vRdetail.arr);
	//printf("확인 : %s\n", vRdetail.arr);
	
	printf("사용한 부품 : ");
	gets(sPTempBuf);
	strcpy((char*)vParts.arr, sPTempBuf);
	vParts.len = strlen(vParts.arr);
	//printf("확인 : %s\n", vParts.arr);

	/* EXEC SQL select part_id into :vPid:vPid_ind from parts where part_name = :vParts; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select part_id into :b0:b1  from parts where part_name=:b2";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )170;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&vPid;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)&vPid_ind;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&vParts;
 sqlstm.sqhstl[1] = (unsigned int  )22;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	if(vPid_ind == -1){
		printf("부품은 사용하지 않았음\n");
		vPid = 0;
		/* EXEC SQL update repairhis set part_id = :vPid, repair_detail = :vRdetail where repair_id = :vRid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update repairhis  set part_id=:b0,repair_detail=:b1 where \
repair_id=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )193;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&vPid;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&vRdetail;
  sqlstm.sqhstl[1] = (unsigned int  )52;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&vRid;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	}
	else{
		/* EXEC SQL update repairhis set part_id = :vPid, repair_detail = :vRdetail where repair_id = :vRid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update repairhis  set part_id=:b0,repair_detail=:b1 where \
repair_id=:b2";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )220;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (         void  *)&vPid;
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         void  *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned int  )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (         void  *)&vRdetail;
  sqlstm.sqhstl[1] = (unsigned int  )52;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         void  *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned int  )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (         void  *)&vRid;
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         void  *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned int  )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	}
	
	/* EXEC SQL commit work; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )247;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	Sleep(1500);
	printf("------------------------수리 완료-----------------------\n");
	printf("수리 일자 : %s 수리내역 연번 : %d 직원 번호 : %d 고객 번호 : %d\n 수리 제품 : %s 수리 분야 : %s \n사용 부품 : %s, 수리 상세내역 : %s\n\n", vRdate.arr, vRid, vSid, vCid, vPname.arr, vPfield.arr, vParts.arr, vRdetail.arr);
	Sleep(1000);
	printf("------------------수리 내역 영수증 출력-----------------\n");
	/* EXEC SQL select price into :Pprice from parts where part_id = :vPid; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 6;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select price into :b0  from parts where part_id=:b1";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )262;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)&Pprice;
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)&vPid;
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	printf("수리 일자 : %s 수리 내역 연번 : %d\n사용 부품 : %s 가격 : %d\n수리 상세내역 : %s\n", vRdate.arr, vRid, vParts.arr, Pprice, vRdetail.arr);

}

int signup(){
   /*회원가입*/
   /* EXEC SQL BEGIN DECLARE SECTION; */ 
   /*SQL에서 사용할 호스트 변수 선언*/
      int cloginId;
      char cloginName[32];
      char cloginTel[32];
      char cloginAdd[32];
   /* EXEC SQL END DECLARE SECTION; */ 


   cloginId = 0;   /*변수 초기화*/
   memset(&cloginName, 0x00, sizeof(cloginName));
   memset(&cloginTel, 0x00, sizeof(cloginTel));
   memset(&cloginAdd, 0x00, sizeof(cloginAdd));

   printf("정보를 입력하세요.\n");

   printf("이름 : ");
   gets(cloginName);   /*gets로 cloginName 변수에 이름을 입력받음*/

   printf("\n전화번호 : ");
   gets(cloginTel);   /*gets로 cloginTel 변수에 전화번호를 입력받음*/

   printf("\n주소 : ");
   gets(cloginAdd);   /*gets로 cloginAdd 변수에 주소를 입력받음*/

   /* EXEC SQL SELECT CUSTOMER_ID into :cloginId               /oCUSTOMER_ID를 호스트 변수 cloginId로 입력o/
   FROM (SELECT * FROM CUSTOMER ORDER BY CUSTOMER_ID DESC)      /oCUSTOMER 테이블에 대해 내림차순 정렬o/
   WHERE ROWNUM = 1; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select CUSTOMER_ID into :b0  from (select *  from CUSTOME\
R  order by CUSTOMER_ID desc  ) where ROWNUM=1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )285;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&cloginId;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

                                 /*ROWNUM 을 사용하여 CUSTOMER_ID에 대한 내림차순 정렬 중 맨 위의 컬럼 선택*/

   /* EXEC SQL insert into CUSTOMER values (:cloginId + 1, :cloginName, :cloginTel, :cloginAdd); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into CUSTOMER  values ((:b0+1),:b1,:b2,:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )304;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&cloginId;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)cloginName;
   sqlstm.sqhstl[1] = (unsigned int  )32;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)cloginTel;
   sqlstm.sqhstl[2] = (unsigned int  )32;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)cloginAdd;
   sqlstm.sqhstl[3] = (unsigned int  )32;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

   /*CUSTOMER 테이블의 각 값에 해당하는 호스트 변수를 입력*/

   /* EXEC SQL commit work; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )335;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

 //release;   /*SQL문 커밋*/

   cloginId = cloginId + 1; /*리턴해주기 위한 연산*/
   return cloginId;       /*리턴*/
}

void get_repairhis(int uid)
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   int customerid = uid;
   int iRepair_id;
   int iCustomer_id;
   int iPrice;
   /* VARCHAR vCustomer_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vCustomer_name;

   /* VARCHAR vPart_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vPart_name;

   /* VARCHAR vStaff_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vStaff_name;

   /* VARCHAR vDevice_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vDevice_name;

   /* VARCHAR vRepair_date[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vRepair_date;

   /* VARCHAR vRepair_field[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vRepair_field;

   /* VARCHAR vRepair_detail[50]; */ 
struct { unsigned short len; unsigned char arr[50]; } vRepair_detail;


   short iRepair_id_ind;
   short iCustomer_id_ind;
   short iPrice_ind;
   short vCustomer_name_ind;
   short vPart_name_ind;
   short vDevice_name_ind;
   short vStaff_name_ind;
   short vRepair_date_ind;
   short vRepair_field_ind;
   short vRepair_detail_ind;

/* EXEC SQL END DECLARE SECTION; */ 



   memset(&vCustomer_name, 0x00, sizeof(vCustomer_name));
   memset(&vPart_name, 0x00, sizeof(vPart_name));
   memset(&vStaff_name, 0x00, sizeof(vStaff_name));
   memset(&vDevice_name, 0x00, sizeof(vDevice_name));
   memset(&vRepair_date, 0x00, sizeof(vRepair_date));
   memset(&vRepair_field, 0x00, sizeof(vRepair_field));
   memset(&vRepair_detail, 0x00, sizeof(vRepair_detail));


   iRepair_id = 0;
   iCustomer_id = 0;
   iPrice = 0;
   iRepair_id_ind = 0;
   iCustomer_id_ind = 0;
   iPrice_ind = 0;
   vCustomer_name_ind = 0;
   vPart_name_ind = 0;
   vDevice_name_ind = 0;
   vStaff_name_ind = 0;
   vRepair_date_ind = 0;
   vRepair_field_ind = 0;
   vRepair_detail_ind = 0;

   /* EXEC SQL DECLARE repairhis_cur CURSOR FOR
   //select repair_id, repairhis.STAFF_ID, customer_id, parts.part_id,  repairhis.device_name, repairhis.REPAIR_DATE, repairhis.REPAIR_FIELD ,  parts.PRICE,  repairhis.REPAIR_DETAIL from parts, repairhis where parts.part_id = repairhis.part_id and customer_id = :customerid;
   select REPAIRHIS.REPAIR_ID, customer.CUSTOMER_ID, customer.CUSTOMER_NAME, staff.STAFF_NAME, parts.PART_NAME, REPAIRHIS.DEVICE_NAME, REPAIRHIS.REPAIR_DATE, REPAIRHIS.REPAIR_FIELD, parts.PRICE, REPAIRHIS.REPAIR_DETAIL from customer, REPAIRHIS, staff, parts where REPAIRHIS.CUSTOMER_ID = customer.customer_id and staff.STAFF_ID = REPAIRHIS.STAFF_ID and parts.PART_ID = REPAIRHIS.PART_ID and staff.STAFF_ID = REPAIRHIS.STAFF_ID and repairhis.customer_id = :customerid; */ 


   /* EXEC sql open repairhis_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0016;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )350;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlstm.sqhstv[0] = (         void  *)&customerid;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* exec sql whenever not found do break; */ 


  for (;;)
   {
      /* exec sql fetch repairhis_cur into
         :iRepair_id:iRepair_id_ind,
       :iCustomer_id:iCustomer_id_ind,
       :vCustomer_name:vCustomer_name_ind,
         :vStaff_name:vStaff_name_ind,
         :vPart_name:vPart_name_ind,
         :vDevice_name:vDevice_name_ind,
         :vRepair_date:vRepair_date_ind,
         :vRepair_field:vRepair_field_ind,
       :iPrice:iPrice_ind,
         :vRepair_detail:vRepair_detail_ind; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 10;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )369;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&iRepair_id;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)&iRepair_id_ind;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&iCustomer_id;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)&iCustomer_id_ind;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&vCustomer_name;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)&vCustomer_name_ind;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&vStaff_name;
      sqlstm.sqhstl[3] = (unsigned int  )22;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)&vStaff_name_ind;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&vPart_name;
      sqlstm.sqhstl[4] = (unsigned int  )22;
      sqlstm.sqhsts[4] = (         int  )0;
      sqlstm.sqindv[4] = (         void  *)&vPart_name_ind;
      sqlstm.sqinds[4] = (         int  )0;
      sqlstm.sqharm[4] = (unsigned int  )0;
      sqlstm.sqadto[4] = (unsigned short )0;
      sqlstm.sqtdso[4] = (unsigned short )0;
      sqlstm.sqhstv[5] = (         void  *)&vDevice_name;
      sqlstm.sqhstl[5] = (unsigned int  )22;
      sqlstm.sqhsts[5] = (         int  )0;
      sqlstm.sqindv[5] = (         void  *)&vDevice_name_ind;
      sqlstm.sqinds[5] = (         int  )0;
      sqlstm.sqharm[5] = (unsigned int  )0;
      sqlstm.sqadto[5] = (unsigned short )0;
      sqlstm.sqtdso[5] = (unsigned short )0;
      sqlstm.sqhstv[6] = (         void  *)&vRepair_date;
      sqlstm.sqhstl[6] = (unsigned int  )22;
      sqlstm.sqhsts[6] = (         int  )0;
      sqlstm.sqindv[6] = (         void  *)&vRepair_date_ind;
      sqlstm.sqinds[6] = (         int  )0;
      sqlstm.sqharm[6] = (unsigned int  )0;
      sqlstm.sqadto[6] = (unsigned short )0;
      sqlstm.sqtdso[6] = (unsigned short )0;
      sqlstm.sqhstv[7] = (         void  *)&vRepair_field;
      sqlstm.sqhstl[7] = (unsigned int  )22;
      sqlstm.sqhsts[7] = (         int  )0;
      sqlstm.sqindv[7] = (         void  *)&vRepair_field_ind;
      sqlstm.sqinds[7] = (         int  )0;
      sqlstm.sqharm[7] = (unsigned int  )0;
      sqlstm.sqadto[7] = (unsigned short )0;
      sqlstm.sqtdso[7] = (unsigned short )0;
      sqlstm.sqhstv[8] = (         void  *)&iPrice;
      sqlstm.sqhstl[8] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[8] = (         int  )0;
      sqlstm.sqindv[8] = (         void  *)&iPrice_ind;
      sqlstm.sqinds[8] = (         int  )0;
      sqlstm.sqharm[8] = (unsigned int  )0;
      sqlstm.sqadto[8] = (unsigned short )0;
      sqlstm.sqtdso[8] = (unsigned short )0;
      sqlstm.sqhstv[9] = (         void  *)&vRepair_detail;
      sqlstm.sqhstl[9] = (unsigned int  )52;
      sqlstm.sqhsts[9] = (         int  )0;
      sqlstm.sqindv[9] = (         void  *)&vRepair_detail_ind;
      sqlstm.sqinds[9] = (         int  )0;
      sqlstm.sqharm[9] = (unsigned int  )0;
      sqlstm.sqadto[9] = (unsigned short )0;
      sqlstm.sqtdso[9] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}


       
       
   printf("\n");
      printf("수리 내역 연번 = [%d]\n고객 ID = [%d]\n 고객 이름 = [%s]\n직원 이름 = [%s]\n 부품 이름 = [%s]\n 기기명 = [%s]\n 수리 일자 = [%s]\n 수리 부위 = [%s]\n 가격 = [%d]\n상세 내역 = [%s]\n", 
     iRepair_id, iCustomer_id, vCustomer_name.arr, vStaff_name.arr, vPart_name.arr, vDevice_name.arr, vRepair_date.arr, vRepair_field.arr, iPrice, vRepair_detail.arr);
   }
   printf("\n");

   /* EXEC SQL CLOSE repairhis_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )424;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}


void get_staff()
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   int iStaff_id;
   /* VARCHAR vStaff_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vStaff_name;

   /* VARCHAR vJumin[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vJumin;

   /* VARCHAR vTel[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vTel;

   //VARCHAR vJoin_date[20];
   /* VARCHAR vAccount[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vAccount;

   int iSalary;
   float fCustomer_rate;

   short iStaff_id_ind;
   short vStaff_name_ind;
   short vJumin_ind;
   short vTel_ind;
   //short vJoin_date_ind;
   short vAccount_ind;
   short iSalary_ind;
   short fCustomer_rate_ind;
/* EXEC SQL END DECLARE SECTION; */ 



   memset(&vStaff_name, 0x00, sizeof(vStaff_name));
   memset(&vJumin, 0x00, sizeof(vJumin));
   memset(&vTel, 0x00, sizeof(vTel));
   //memset(&vJoin_data, 0x00, sizeof(vJoin_data));
   memset(&vAccount, 0x00, sizeof(vAccount));

    iSalary = 0;
    fCustomer_rate = 0;

    iStaff_id_ind = 0;
    vStaff_name_ind = 0;
    vJumin_ind = 0;
    vTel_ind = 0;
    //vJoin_date_ind = 0;
    vAccount_ind = 0;
    iSalary_ind = 0;
    fCustomer_rate_ind = 0;

/* EXEC SQL DECLARE staff_cur CURSOR FOR
   select * from staff; */ 


   /* EXEC sql open staff_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0017;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )439;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* exec sql whenever not found do break; */ 


   for (;;)
   {
      /* exec sql fetch staff_cur into
         :iStaff_id:iStaff_id_ind,
         :vStaff_name:vStaff_name_ind,
         :vJumin:vJumin_ind,
         :vTel:vTel_ind,
         //:vJoin_date:vJoin_date_ind,
         :vAccount:vAccount_ind,
         :iSalary:iSalary_ind,
         :fCustomer_rate:fCustomer_rate_ind; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 10;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )454;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&iStaff_id;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)&iStaff_id_ind;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&vStaff_name;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)&vStaff_name_ind;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&vJumin;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)&vJumin_ind;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&vTel;
      sqlstm.sqhstl[3] = (unsigned int  )22;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)&vTel_ind;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&vAccount;
      sqlstm.sqhstl[4] = (unsigned int  )22;
      sqlstm.sqhsts[4] = (         int  )0;
      sqlstm.sqindv[4] = (         void  *)&vAccount_ind;
      sqlstm.sqinds[4] = (         int  )0;
      sqlstm.sqharm[4] = (unsigned int  )0;
      sqlstm.sqadto[4] = (unsigned short )0;
      sqlstm.sqtdso[4] = (unsigned short )0;
      sqlstm.sqhstv[5] = (         void  *)&iSalary;
      sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[5] = (         int  )0;
      sqlstm.sqindv[5] = (         void  *)&iSalary_ind;
      sqlstm.sqinds[5] = (         int  )0;
      sqlstm.sqharm[5] = (unsigned int  )0;
      sqlstm.sqadto[5] = (unsigned short )0;
      sqlstm.sqtdso[5] = (unsigned short )0;
      sqlstm.sqhstv[6] = (         void  *)&fCustomer_rate;
      sqlstm.sqhstl[6] = (unsigned int  )sizeof(float);
      sqlstm.sqhsts[6] = (         int  )0;
      sqlstm.sqindv[6] = (         void  *)&fCustomer_rate_ind;
      sqlstm.sqinds[6] = (         int  )0;
      sqlstm.sqharm[6] = (unsigned int  )0;
      sqlstm.sqadto[6] = (unsigned short )0;
      sqlstm.sqtdso[6] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}



     printf("\n");
      printf("ID = [%d]\n STAFF_NAME = [%s]\n JUMIN = [%s]\n TEL = [%s]\n ACCOUNT = [%s]\n SALARY = [%d]\n CUSTOMER_RATE[%1.1f]\n", iStaff_id, vStaff_name.arr, vJumin.arr, vTel.arr, vAccount.arr, iSalary, fCustomer_rate);
     printf("\n");

   }

   /* EXEC SQL CLOSE staff_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )497;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void get_leak_parts()
{
/* --------------------------------------------------------------------------
   부족한 부품에 대한 정보를 알려주는 함수
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   int iPart_id;
   int iStock;
   /* VARCHAR vPart_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vPart_name;


   short iPart_id_ind;
   short iStock_ind;
   short vPart_name_ind;
/* EXEC SQL END DECLARE SECTION; */ 



   memset(&vPart_name_ind, 0x00, sizeof(vPart_name_ind));

    iPart_id = 0;
    iStock = 0;

    iPart_id_ind = 0;
    iStock_ind = 0;
    vPart_name_ind = 0;

/* EXEC SQL DECLARE part_cur CURSOR FOR
   select part_id, part_name, stock  from parts where stock < 5; */ 


   /* EXEC sql open part_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0018;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )512;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* exec sql whenever not found do break; */ 


   for (;;)
   {
      /* exec sql fetch part_cur into
         :iPart_id:iPart_id_ind,
       :vPart_name:vPart_name_ind,
         :iStock:iStock_ind; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 10;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )527;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&iPart_id;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)&iPart_id_ind;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&vPart_name;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)&vPart_name_ind;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&iStock;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)&iStock_ind;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}



     printf("\n");
      printf("부품 식별자 = [%d]\n부품 이름 = [%s]\n부품 재고 = [%d]\n", 
     iPart_id, vPart_name.arr, iStock);
     printf("\n");

   }

   /* EXEC SQL CLOSE part_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )554;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

void get_customer()
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   int iCustomer_id;
   /* VARCHAR vCustomer_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vCustomer_name;

   /* VARCHAR vTel[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vTel;

   /* VARCHAR vAddress[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vAddress;


   short iCustomer_id_ind;
   short vCustomer_name_ind;
   short vTel_ind;
   short vAddress_ind;

/* EXEC SQL END DECLARE SECTION; */ 



   memset(&vCustomer_name, 0x00, sizeof(vCustomer_name));
   memset(&vTel, 0x00, sizeof(vTel));
   memset(&vAddress, 0x00, sizeof(vTel));

    iCustomer_id = 0;
    iCustomer_id_ind = 0;
    vCustomer_name_ind = 0;
    vTel_ind = 0;
    vAddress_ind = 0;


/* EXEC SQL DECLARE customer_cur CURSOR FOR
   select * from customer; */ 


   /* EXEC sql open customer_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0019;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )569;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* exec sql whenever not found do break; */ 



   for (;;)
   {
      /* exec sql fetch customer_cur into
         :iCustomer_id:iCustomer_id_ind,
         :vCustomer_name:vCustomer_name_ind,
         :vTel:vTel_ind,
         :vAddress:vAddress_ind; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 10;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )584;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&iCustomer_id;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)&iCustomer_id_ind;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&vCustomer_name;
      sqlstm.sqhstl[1] = (unsigned int  )22;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)&vCustomer_name_ind;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&vTel;
      sqlstm.sqhstl[2] = (unsigned int  )22;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)&vTel_ind;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&vAddress;
      sqlstm.sqhstl[3] = (unsigned int  )22;
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)&vAddress_ind;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}



     printf("\n");
      printf("CUSTOMER ID = [%d]\n CUSTOMER NAME = [%s]\nTEL = [%s]\n ADDRESS = [%s]\n SALARY = [%d]\n", iCustomer_id, vCustomer_name.arr, vTel.arr, vAddress.arr);
     printf("\n");
   }

   /* EXEC SQL CLOSE customer_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )615;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

int getRepairMonth(int temp)
{
   char nov[3], dec[3];
   strcpy(nov, "11");
   strcpy(dec, "12");

   //printf("nov '%s' \n", nov);
   //printf("dec '%s' \n", dec);

   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      char month[3];
      int r_no = temp;
   /* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL
      select substr(repair_date, 6, 2)
      into :month
      from repairhis
      where REPAIR_ID = :r_no; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select substr(repair_date,6,2) into :b0  from repairhis w\
here REPAIR_ID=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )630;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)month;
   sqlstm.sqhstl[0] = (unsigned int  )3;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&r_no;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 
}


   
   //printf("__month = %s \n", month);

   int res = 0;

   if( !strcmp(month, nov) ) //month == 11 이면
   {
      res = 11;
   }
   else if( !strcmp(month, dec) ) //month == 12이면
   {
      res = 12;
   }
   else
   {
      res = 0;
   }
   //printf("res = %d\n\n", res);

   return res;
}

int getWeekno(int temp)
{
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      char myWeekNo[2];
      int r_no = temp;
      int result;
   /* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL
      select case cast(TO_CHAR( TO_DATE( substr(to_char(repair_date), 3,6) || to_char('01'), 'YY/MM/DD')   , 'd') as INT)
      when 1 then TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W')
      when 2 then DECODE( cast (to_char(TO_date(repair_date, 'YY/MM/DD'), 'd')  as int ) , 2, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      3, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      4, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      5, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      6, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      7, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W') +1 )
      when 3 then DECODE( cast (to_char(TO_date(repair_date, 'YY/MM/DD'), 'd')  as int ) , 3, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      4, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      5, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      6, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      7, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W') +1 )
      when 4 then DECODE( cast (to_char(TO_date(repair_date, 'YY/MM/DD'), 'd')  as int ) , 4, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      5, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      6, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      7, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W') +1 )
      when 5 then DECODE( cast (to_char(TO_date(repair_date, 'YY/MM/DD'), 'd')  as int ) , 5, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      6, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      7, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W') +1 )
      when 6 then DECODE( cast (to_char(TO_date(repair_date, 'YY/MM/DD'), 'd')  as int ) , 6, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      7, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W') +1 )
      when 7 then DECODE( cast (to_char(TO_date(repair_date, 'YY/MM/DD'), 'd')  as int ) , 7, TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W'),
                                                                      TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'), 'W') +1 )
      end
      into :myWeekNo
      from repairhis
      where REPAIR_ID = :r_no; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlbuft((void **)0,
     "select  case cast(TO_CHAR(TO_DATE((substr(to_char(repair_date),3,6)||t\
o_char('01')),'YY/MM/DD'),'d') as INT) when 1 then TO_CHAR(TO_DATE(repair_da\
te,'YY/MM/DD'),'W') when 2 then DECODE(cast(to_char(TO_date(repair_date,'YY/\
MM/DD'),'d') as int),2,TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W'),3,TO_CHA\
R(TO_DATE(repair_date,'YY/MM/DD'),'W'),4,TO_CHAR(TO_DATE(repair_date,'YY/MM/\
DD'),'W'),5,TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W'),6,TO_CHAR(TO_DATE(r\
epair_date,'YY/MM/DD'),'W'),7,TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W'),(\
TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W')+1)) when 3 then DECODE(cast(to_\
char(TO_date(repair_date,'YY/MM/DD'),'d') as int),3,TO_CHAR(TO_DATE(repair_d\
ate,'YY/MM/DD'),'W'),4,TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W'),5,TO_CHA\
R(TO_DATE(repair_date,'YY/MM/DD'),'W'),6,TO_CHAR(TO_DATE(repair_date,'YY/MM/\
DD'),'W'),7,TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W'),(TO_CHAR(TO_DATE(re\
pair_date,'YY/MM/DD'),'W')+1)) when 4 then DECODE(cast(to_char(TO_date(repai\
r_date,'YY/MM/DD'),'d') as int),4,TO_CHAR(");
   sqlstm.stmt = "TO_DATE(repair_date,'YY/MM/DD'),'W'),5,TO_CHAR(TO_DATE(re\
pair_date,'YY/MM/DD'),'W'),6,TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W'),7,T\
O_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W'),(TO_CHAR(TO_DATE(repair_date,'YY/\
MM/DD'),'W')+1)) when 5 then DECODE(cast(to_char(TO_date(repair_date,'YY/MM/D\
D'),'d') as int),5,TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W'),6,TO_CHAR(TO_\
DATE(repair_date,'YY/MM/DD'),'W'),7,TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'\
W'),(TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W')+1)) when 6 then DECODE(cast\
(to_char(TO_date(repair_date,'YY/MM/DD'),'d') as int),6,TO_CHAR(TO_DATE(repai\
r_date,'YY/MM/DD'),'W'),7,TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W'),(TO_CH\
AR(TO_DATE(repair_date,'YY/MM/DD'),'W')+1)) when 7 then DECODE(cast(to_char(T\
O_date(repair_date,'YY/MM/DD'),'d') as int),7,TO_CHAR(TO_DATE(repair_date,'YY\
/MM/DD'),'W'),(TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'W')+1)) end  into :b0\
  from repairhis where REPAIR_ID=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )653;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)myWeekNo;
   sqlstm.sqhstl[0] = (unsigned int  )2;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&r_no;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


      
   result = atoi(myWeekNo);
   //printf("\n%s \n", myWeekNo);
   //printf("\n%d \n", result);

   return result;
}

int getDay(int temp)
{   
   int result;

   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      char myWeekNo[2];
      int r_no = temp;
   /* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL
      select TO_CHAR( TO_DATE(repair_date, 'YY/MM/DD')   , 'd')
      into :myWeekNo
      from repairhis
      where REPAIR_ID = :r_no; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select TO_CHAR(TO_DATE(repair_date,'YY/MM/DD'),'d') into \
:b0  from repairhis where REPAIR_ID=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )676;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)myWeekNo;
   sqlstm.sqhstl[0] = (unsigned int  )2;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&r_no;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   //printf("\n%s \n", myWeekNo);
   result = atoi(myWeekNo);

   return result;
}

void showDatas(int temp)
{
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      char customerBirth[20];
      char repairDate[20];
      int r_no = temp;
   /* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL
      select repair_date, CUSTOMER_BIRTH
      into :repairDate, :customerBirth
      from customer, repairhis
      where customer.CUSTOMER_ID = repairhis.CUSTOMER_ID and repairhis.REPAIR_ID = :r_no; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select repair_date ,CUSTOMER_BIRTH into :b0,:b1  from cus\
tomer ,repairhis where (customer.CUSTOMER_ID=repairhis.CUSTOMER_ID and repair\
his.REPAIR_ID=:b2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )699;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)repairDate;
   sqlstm.sqhstl[0] = (unsigned int  )20;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)customerBirth;
   sqlstm.sqhstl[1] = (unsigned int  )20;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&r_no;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   printf("\n고객 생년 월일 : %s             수리 일자 : %s\n\n", repairDate, customerBirth);
}


int getAge(int temp)
{
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      int age;
      int r_no = temp;
   /* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL
      select cast( substr(customer.CUSTOMER_BIRTH, 0,4) as int )
      into :age
      from customer, repairhis
      where customer.CUSTOMER_ID = repairhis.CUSTOMER_ID 
      and repairhis.REPAIR_ID = :r_no; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select cast(substr(customer.CUSTOMER_BIRTH,0,4) as int) i\
nto :b0  from customer ,repairhis where (customer.CUSTOMER_ID=repairhis.CUSTO\
MER_ID and repairhis.REPAIR_ID=:b1)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )726;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&age;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&r_no;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if( (2019-age +1) == 19 )
   {
      printf("고객님이 19살이에요! 수험생일 수도 있어요!\n");
      return 1;
   }
   else
   {
      printf("이 고객님은 수험생일 가능성이 없네요!\n");
      return 0;

   }
}

void showRepairId()
{
printf("\n                 수리내역 번호 목록                  ");
printf("\n\n");

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   int repair_his;
/* EXEC SQL END DECLARE SECTION; */ 


   repair_his=0;

/* EXEC SQL DECLARE his_cur CURSOR FOR
   select repair_id from repairhis; */ 


   /* EXEC sql open his_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0025;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )749;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   /* exec sql whenever not found do break; */ 


   for (;;)
   {
      /* exec sql fetch his_cur into
         :repair_his; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 10;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )764;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&repair_his;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}



      printf(" [%d]  ", repair_his);

   }
   /* EXEC SQL CLOSE his_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )783;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   printf("\n");
}

void candyEvent()
{
   int month = 0;
   int weekNo = 0;
   int day = 0;
   int temp = 0;
   printf("-----------------수험생 사탕 주기-----------------\n\n");
   while(1){
   showRepairId();
   printf("\n\n조회할 수리내역 번호를 입력하세요 : ");
   scanf("%d", &temp);
   //temp = 156126;
   showDatas(temp);
   if (getAge(temp)) {
      month = getRepairMonth(temp);

      if (month == 12)
      {
         printf("수험생이에요! 사탕을 챙겨주세요!\n");
      }
      else if (month == 11)
      {
         //printf(" 11 ");
         weekNo = getWeekno(temp);
         //printf("weekno %d\n", weekNo);
         if (weekNo == 4)
         {
            //printf(" 4쨰주 ");
            day = getDay(temp);
            //printf("day %d \n", day);
            if (day > 4)
            {
               printf("수험생이에요! 사탕을 챙겨주세요!\n");
            }
            else
            {
               printf("수능 기간이 아니네요. 사탕 안줌.\n");
            }
         }
         else if (weekNo > 4)
         {
            printf("수험생이에요! 사탕을 챙겨주세요!\n");
         }
         else
         {
               printf("수능 기간이 아니네요. 사탕 안줌.\n");
         }
      }
      else
      {
               printf("수능 기간이 아니네요. 사탕 안줌.\n");
      }

   }
   
      printf("\n----------------- 사탕주기 이벤트 끝! -----------------\n\n");


   }
}


void printBonusList()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

int month;
/* EXEC SQL END DECLARE SECTION; */ 

/* EXEC SQL
select cast(to_char(sysdate, 'MM') as INT)
into :month
from dual; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 10;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.stmt = "select cast(to_char(sysdate,'MM') as INT) into :b0  from dua\
l ";
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )798;
sqlstm.selerr = (unsigned short)1;
sqlstm.sqlpfmem = (unsigned int  )0;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqhstv[0] = (         void  *)&month;
sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         void  *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned int  )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


printf("\n%d월 보너스 상여급 지급 직원 목록입니다.\n\n", month);

/* EXEC SQL BEGIN DECLARE SECTION; */ 

      /* VARCHAR vStaff_name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } vStaff_name;

      int iSalary;

      short vStaff_name_ind;
      short iSalary_ind;
   /* EXEC SQL END DECLARE SECTION; */ 


    memset(&vStaff_name, 0x00, sizeof(vStaff_name));
   iSalary = 0;
   vStaff_name_ind = 0;
   iSalary_ind = 0;

   /* EXEC SQL DECLARE staff_cur CURSOR FOR
      select staff_name, salary*1.5  from staff where CUSTOMER_RATE = (select max(CUSTOMER_RATE)from staff); */ 

    
   /* EXEC sql open staff_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0017;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )817;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   
   /* EXEC sql whenever not found do break; */ 


   for (;;)
    {
      /* exec sql fetch staff_cur into
         :vStaff_name:vStaff_name_ind,
         :iSalary:iSalary_ind; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 10;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )832;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&vStaff_name;
      sqlstm.sqhstl[0] = (unsigned int  )22;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)&vStaff_name_ind;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&iSalary;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)&iSalary_ind;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}



      printf("STAFF_NAME = [%s], SALARY = [%d]\n", vStaff_name.arr, iSalary);

    }



   /* EXEC SQL CLOSE staff_cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 10;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )855;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}