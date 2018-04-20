#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
#include<time.h>
#include<iomanip.h>
#include<fstream.h>
int flag=0;
char aclas[10]="a";
char sclas[10]="s";
char gclas[10]="g";
class login
{
public:
char id[100];
long double pass;
void getid()
{
cout<<" Enter your id(only string):";
gets(id);
cout<<" Enter the password(only numbers):";
cin>>pass;
}
void displayid()
{
cout<<"\nId:";
puts(id);
cout<<" Password:";
cout<<pass;
}
}l;
class traindetail
{
public:
char type[10];
int trainno,nos;
char trainname[100];
char bp[100];
char dest[100];
char station[10][100];
char e[10];
char s[10];
int distance[100];
int ac;
float acfare;
int sleeper;
float sleeperfare;
int general;
float generalfare;
void getdetail();
void displaydetail();
int exp,sf;
traindetail()
{
exp=89;
sf=107;
strcpy(e,"exp");
strcpy(s,"sf");
}
}a;
void traindetail :: getdetail()
{
cout<<"Enter the details as follows ";
cout<<endl;
cout<<"Train no:  ";
cin>>trainno;
cout<<"Train name:   ";
gets(trainname);
cout<<"Enter train type (exp-express,sf-super fast) :";
gets(type);
cout<<"Boarding point:  ";
gets(bp);
cout<<"Destination point:  ";
gets(dest);
cout<<"Now enter total no of stations:  "  ;
cin>>nos;
cout<<"Enter all the stations:  ";
for(int i=0;i<nos;i++)
{
gets(station[i]);
}
cout<<"Now enter distance between stations from Boarding station: ";
for(i=0;i<nos;i++)
{
cin>>distance[i];
}
cout<<"No of seats in AC class & fare per ticket / KM: ";
cin>>ac>>acfare;
cout<<"No of seats in sleeper class & fare per ticket / KM:   ";
cin>>sleeper>>sleeperfare;
cout<<"No of seats in general class & fare per ticket / KM:   ";
cin>>general>>generalfare;
}
void traindetail :: displaydetail()
{
cout<<"Train number is:                                 "<<trainno<<endl;
cout<<"Train name is:                                  " <<trainname<<endl;
cout<<"Bording point is:                                "<<bp<<endl;
cout<<"Destination is:                                  "<<dest<<endl;
cout<<"Total stations are:                              "<<nos<<endl;
cout<<"Stations are:                                    "<<endl;
for(int i=0;i<nos;i++)
{
puts(station[i]);
}
cout<<"No. of seats in AC class is:                       "<<ac<<endl;
cout<<"Fare per ticket / kilometer for AC class is:       "<<acfare<<endl;
cout<<"No. of seats in Sleeper class is:                  "<<sleeper<<endl;
cout<<"Fare per ticket / kilometer for Sleeper class is:  "<<sleeperfare<<endl;
cout<<"No. of seats in general class is:                  "<<general<<endl;
cout<<"Fare per ticket / kilometer for general class is:  "<<generalfare<<endl;
}
class reser
{
public:
int pnr;
int trainno;
char trainname[100];
char bp[10];
char dest[100];
char pname[10][100];
int age[20];
char clas[10];
int nos;
int i;
int d,m,y;
int conc;
float amc;
void getresdet();
void displayresdet();
reser()
{
amc=0.00;
}
}b;
void reser:: getresdet()
{
cout<<"Enter the details as follows\n";
cout<<"Train no:            ";
cin>>trainno;
cout<<"Train name:          ";
gets(trainname);
cout<<"Boarding point:      ";
gets(bp);
cout<<"Destination pt:      ";
gets(dest);
cout<<"No of seats required:";
cin>>nos;
for(i=0;i<nos;i++)
{
cout<<"Passenger name:      ";
gets(pname[i]);
cout<<"Passenger age:       ";
cin>>age[i];
}
cout<<"Enter the class a-AC, s-Sleeper & g-General class: ";
gets(clas);
cout<<"Date of travel:      ";
cin>>d>>m>>y;
cout<<"Enter the concession category\n";
cout<<"1.Military\n2.Senior citizen\n";
cout<<"3.Children below 5 yrs\n4.None\n";
cin>>conc;
cout<<"............END OF GETTING DETAILS............\n";
}
void reser:: displayresdet()
{
clrscr();
cout<<"***********************************************\n";
cout<<"@@@@@@@@@@@@   RESERVATION TICKET  @@@@@@@@@@@@@@\n";
cout<<"*************************************************\n";
cout<<"\nPnr no:                Train Type     \n";
cout<<pnr<<"                   "<<a.type ;
cout<<"\nTrain no        Train name          date of journey  \n"  ;
cout<<trainno<<"             ";cout<<trainname<<"                   "<<d<<"-"<<m<<"-"<<y;
cout<<"\nBoarding point:        Destination Point\n";
cout<<bp<<"                 "<<dest     ;
cout<<"\n......................................................\n";
cout<<"No of seats reserved:";
cout<<nos<<endl;
cout<<"Passenger name          Age                 Berth No.\n";
for(i=0;i<nos;i++)
{
cout<<pname[i]<<"                    ";
cout<<age[i]<<"                    ";
cout<<i+1<<endl;
}
cout<<"Your class:";
if(strcmp(clas,aclas)==0)
cout<<"  AC";
else if(strcmp(clas,sclas)==0)
cout<<"  Sleeper";
else if(strcmp(clas,gclas)==0)
cout<<"  General";
else
cout<<"";
cout<<"\nYour concession category:";
if(conc==1)
cout<<"  Military";
else if(conc==2)
cout<<"  Senior citizen";
else if(conc==3)
cout<<"  Children below 5 years";
else if(conc==4)
cout<<"  None";
else
cout<<"";

cout<<"\nYou must pay:"<<amc<<endl;
cout<<"***********************************************\n";
cout<<"##############      THANK YOU    ##################\n";
cout<<"***********************************************\n";
}
class canc
{
public:
int pnr;
int trainno;
char trainname[100];
char bp[10];
char dest[100];
char pname[10][100];
int age[20];
int i;
char clas[10];
int nos;
int d,m,y;
float amr;
void getcancdet();
void displaycancdet();
}c;
void canc::getcancdet()
{
cout<<"\nEnter the details as follows\n";
cout<<"\nPnr no:";
cin>>pnr;
cout<<"\nDate of cancellation:";
cin>>d>>m>>y;
cout<<"...........END OF GETTING DETAILS...........\n";
}
void canc::displaycancdet()
{
cout<<"...........................................\n";
cout<<"...........................................\n";
cout<<"\nPnr no:"<<pnr;
cout<<"\nTrain no:"<<trainno;
cout<<"\nTrain name:";puts(trainname);
cout<<"\nBoarding point:";puts(bp);
cout<<"\nDestination pt:";puts(dest);
cout<<"\nYour class:";puts(clas);
cout<<"\nno of seats to be cancelled:"<<nos;
for(i=0;i<nos;i++)
{
cout<<"\nPassenger name:";puts(pname[i]);
cout<<"\npassenger age:"<<age[i];
}
cout<<"\nDate of cancellation:"<<d<<"-"<<m<<"-"<<y;
cout<<"\nYou can collect:"<<amr<<"RS"<<endl;
cout<<"*****************************************\n";
cout<<".........END OF CANCELLATION.............\n";
cout<<"*****************************************\n";
}
void manage();
void can();
void user();
void database();
void res();
void reserve();
void displaypassdetail();
void cancell();
void update();
void main()
{
clrscr();
int ch;
cout<<" \n               ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"              .......WELCOME TO RAILWAY RESERVATION SYSTEM..........\n";
cout<<"                ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"\n";
do
{
cout<<"\n^^^^^^^^^^^^^^^^^^^^^^MAIN MENU^^^^^^^^^^^^^^^^^^^^\n";
cout<<" 1.Admin mode\n 2.User mode\n 3.Exit\n";
cout<<"Enter your choice:";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1:
database();
break;
case 2:
user();
break;
case 3:
exit(0);
}
}while(ch<=3);
getch();
}

void database()
{
clrscr();
char *password;
char *pass="12345";
password=getpass("Enter the admininistrator password:");
fstream f;
int ch,cc;
char c;
if(strcmp(pass,password)!=0)
{
cout<<"\n SORRY!!!!!";
cout<<"\nEnter the password correctly \n";
cout<<"You are not permitted to logon this mode\n";
goto h;
}
if(strcmp(pass,password)==0)
{
do
{
cout<<"\n...........ADMINISTRATOR MENU...........\n";
cout<<"1.Add Train Details\n2.Update Details\n";
cout<<"3.Display Train Details\n4.User Management\n";
cout<<"5.Display passenger details\n6.Return to main menu\n";
cout<<"\nEnter your choice:";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1:
f.open("train.dat",ios::out|ios::binary|ios::app);
do
{
a.getdetail();
f.write((char *) & a,sizeof(a));
cout<<"Do you want to add one more record?\n";
cout<<"y-for Yes\nn-for No\n";
cin>>c;
}while(c=='y');
f.close();
break;
case 2:
update();
break;
case 3:
int t;
cout<<"1.Search train \n";
cout<<"2.Display all trains";
cin>>cc;
switch(cc)
{
case 1:
cout<<"Enter train number:";
cin>>t;
f.open("train.dat",ios::in|ios::binary);
while(!f.eof())
{
f.read((char*)&a,sizeof(a));
if(f.eof())
{
break;
}
if(a.trainno==t)
{
a.displaydetail();
}
}
f.close();
break;
case 2:
f.open("train.dat",ios::in|ios::binary);
while(!f.eof())
{
f.read((char*)&a,sizeof(a));
if(f.eof())
{
break;
}
a.displaydetail();
}
f.close();
}
break;
case 4:
manage();
break;
case 5:
displaypassdetail();
break;
}
}while(ch<=5);
}
h:
}
void update()
{
clrscr();
ifstream f1;
ofstream f2;
int ch,no;
char chh;
cout<<"1.Delete Trains\n";
cout<<"2.Edit train Details\n";
cin>>ch;
switch(ch)
{
case 1:
f1.open("train.dat",ios::in|ios::binary);
f2.open("temp.dat",ios::out|ios::binary);
cout<<"\nEnter train number you want to delete ";
cin>>no;
while(!f1.eof())
{
f1.read((char*)&a,sizeof(a));
if(f1.eof())
{
break;
}
if(a.trainno==no)
{
flag=1;
a.displaydetail();
cout<<"Enter Y/N if you want to delete or not:";
cin>>chh;
if(chh=='y'||chh=='Y')
cout<<"Train Detail deleted\n";
else
f2.write((char*)&a,sizeof(a));
}
else
f2.write((char*)&a,sizeof(a));
}
f1.close();
f2.close();
if(flag==0)
cout<<" Train not found\n";
remove("train.dat");
rename("temp.dat","train.dat");
break;
case 2:
flag=0;
f1.open("train.dat",ios::in|ios::binary);
f2.open("temp.dat",ios::out|ios::binary);
cout<<" Enter train number:";
cin>>no;
while(!f1.eof())
{
f1.read((char*)& a,sizeof(a));
if(f1.eof())
{
break;
}
if(a.trainno==no)
{
flag=1;
a.displaydetail();
cout<<" Enter Y/N if you want to edit or not:";
cin>>chh;
if(chh=='y'||chh=='Y')
{
a.getdetail();
f2.write((char*)&a,sizeof(a));
}
else
f2.write((char*)&a,sizeof(a));
}
else
f2.write((char*)&a,sizeof(a));
}
f1.close();
f2.close();
if(flag==0)
cout<<" Train not found\n";
remove("train.dat");
rename("temp.dat","train.dat");
break;
}
}
void manage()
{
clrscr();
int ch,chh;
ifstream f1;
ofstream f2;
char c;
cout<<" \n.........WELCOME TO THE USER MANAGEMENT MENU........\n";
do
{
cout<<"1.Create user ID data base\n2.Update ID details\n";
cout<<"3.Display IDdetails\n4.Return to the main menu\n";
cout<<"Enter your choice:";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1:
f2.open("idd.dat",ios::out|ios::binary|ios::app);
do
{
l.getid();
f2.write((char*)&l,sizeof(l));
cout<<" Do you want to add one more record\n";
cout<<" y-Yes\nn-No\n";
cin>>c;
}while(c=='y');
f2.close();
break;
case 2:
cout<<"1.Delete ID\n2.Edit ID\n";
cin>>chh;
char userid[100];
long double password;
switch(chh)
{
case 1:
f1.open(" idd.dat  ",ios::in|ios::binary);
f2.open(" temp.dat ",ios::out|ios::binary);
cout<<" Enter user id you want to delete:";
gets(userid);
cout<<" Enter password: ";
cin>>password;
while(!f1.eof())
{
f1.read((char *)&l,sizeof(l));
if(f1.eof())
{
break;
}
if(strcmp(l.id,userid)==0&&l.pass==password)
{
flag=1;
l.displayid();
cout<<"\nEnter Y/N if you want to delete or not: ";
cin>>c;
if(c=='y'||c=='Y')
cout<<"ID Detail deleted\n";
else
f2.write((char*)&l,sizeof(l));
}
else
f2.write((char*)&l,sizeof(l));
}
f1.close();
f2.close();
if(flag==0)
cout<<"ID not found";
remove("idd.dat");
rename("temp.dat","idd.dat");
break;
case 2:
flag=0;
cout<<"Enter id you want to edit:";
gets(userid);
cout<<"Enter password:";
cin>>password;
f1.open("idd.dat",ios::in|ios::binary);
f2.open("temp.dat",ios::out|ios::binary);
while(!f1.eof())
{
f1.read((char*)&l,sizeof(l));
if(f1.eof())
{
break;
}
if(strcmp(l.id,userid)==0&&l.pass==password)
{
flag=1;
l.displayid();
cout<<"\nEnter Y/N if you want to edit or not:";
cin>>c;
if(c=='y'||c=='Y')
{
l.getid();
f2.write((char*)&l,sizeof(l));
}
else
f2.write((char*)&l,sizeof(l));
}
else
f2.write((char*)&l,sizeof(l));
}
f1.close();
f2.close();
if(flag==0)
cout<<"ID not found";
remove("idd.dat");
rename("temp.dat","idd.dat");
break;
}
case 3:
f1.open("idd.dat",ios::in|ios::binary);
while(!f1.eof())
{
f1.read((char*)&l,sizeof(l));
if(f1.eof())
{
break;
}
l.displayid();
}
f1.close();
break;
}
}while(ch<=3);
getch();
}
void user()
{
clrscr();
int d;
int ch;
cout<<"\n*****************************************************\n";
cout<<"***********WELCOME TO THE USER MENU**\n";
cout<<"****************************************************\n";
long double password;

fstream f;
f.open("idd.dat",ios::in|ios::out|ios::binary);
char id[100];
puts("Enter your id:");
gets(id);
cout<<"Enter your password:";
cin>>password;
while(f.read((char *)&l,sizeof(l)))
{
if((strcmp(l.id,id)==0)&&l.pass==password)
{
do
{
cout<<"\n1.Reserve\n2.Cancel\n3.Return to the main menu\n";
cout<<"Enter your choice:";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1:
reserve();
break;
case 2:
cancell();
break;
}
}while(ch<=2);
goto j;
}
else
{
d=1;
}
}
if(d==1)
{
cout<<"Enter your user id and password correctly\n";
}
getch();
j:
}
void reserve()
{
clrscr();
int ch;
do
{
cout<<"1.Reserve\n2.Return to the main menu\n";
cout<<"Enter your choice:";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1:
res();
break;
}
}while(ch==1);
getch();
}
void res()
{
clrscr();
int p,pos,f=0,ff=0;
int dist;
time_t t;
fstream f1,f2;
f1.open("train.dat",ios::in|ios::out|ios::binary);
f2.open("pass.dat",ios::out| ios::in|ios::binary|ios::app);
int ch;
b.getresdet();
while(!f1.eof())
{
f1.read((char*)&a,sizeof(a));
if(f1.eof())
{
break;
}
if(a.trainno==b.trainno)
{
if(strcmp(b.clas,aclas)==0)
{
if(a.ac>=b.nos)
{
for(int i=0;i<a.nos;i++)
{
if(strcmp(a.station[i],b.bp)==0)
{
f=1;
p=i;
break;
}
}
if(f==1)
{
for(int j=0;j<a.nos;j++)
{
if(strcmp(a.station[j],b.dest)==0)
{
ff=1;
pos=j;
break;
}
}
if(ff==1)
{
srand((unsigned) time(&t));
b.pnr=rand();
dist=a.distance[pos]-a.distance[p];
b.amc=(dist*b.nos);
b.amc=(b.amc*a.acfare);
a.ac=a.ac-b.nos;
f1.write((char*)&a,sizeof(a));
flag=1;
if(b.conc==1)
{
cout<<"Concession category:MILITARY PERSONNEL\n";
b.amc=(b.amc*50)/100;
}
else if(b.conc==2)
{
cout<<"Concession category:SENIOR CITIZEN\n";
b.amc=(b.amc*60)/100;
}
else if(b.conc==3)
{
cout<<"Concession category:CHILDERN BELOW FIVE\n";
b.amc=0.0;
}
else if(b.conc==4)
{
cout<<"You cannot get any concession\n";
}
f2.write((char*)&b,sizeof(b));
if(flag==1)
{
if(strcmp(a.type,a.e)==0)
{
b.amc=b.amc+a.exp;
strcpy(a.type,"EXPRESS");
}
else
{
b.amc=b.amc+a.sf;
strcpy(a.type,"SUPERFAST");
}
b.displayresdet();
}
}
else
cout<<"";
}
else
cout<<"";
}
else
cout<<"SORRY!!!! No. of seats not available";
}
else if(strcmp(b.clas,sclas)==0)
{
if(a.sleeper>=b.nos)
{
for(int i=0;i<a.nos;i++)
{
if(strcmp(a.station[i],b.bp)==0)
{
f=1;
p=i;
break;
}
}
if(f==1)
{
for(int j=0;j<a.nos;j++)
{
if(strcmp(a.station[j],b.dest)==0)
{
ff=1;
pos=j;
break;
}
}
if(ff==1)
{
srand((unsigned) time(&t));
b.pnr=rand();
dist=a.distance[pos]-a.distance[p];
b.amc=(dist*b.nos);
b.amc=(b.amc*a.sleeperfare);
a.sleeper=a.sleeper-b.nos;
f1.write((char*)&a,sizeof(a));
flag=1;
if(b.conc==1)
{
cout<<"Concession category:MILITARY PERSONNEL\n";
b.amc=(b.amc*50)/100;
}
else if(b.conc==2)
{
cout<<"Concession category:SENIOR CITIZEN\n";
b.amc=(b.amc*60)/100;
}
else if(b.conc==3)
{
cout<<"Concession category:CHILDERN BELOW FIVE\n";
b.amc=0.0;
}
else if(b.conc==4)
{
cout<<"You cannot get any concession\n";
}
f2.write((char*)&b,sizeof(b));
if(flag==1)
{
if(strcmp(a.type,a.e)==0)
{
b.amc=b.amc+a.exp;
strcpy(a.type,"EXPRESS");
}
else
{
b.amc=b.amc+a.sf;
strcpy(a.type,"SUPERFAST");
}
b.displayresdet();
}
}
else
cout<<"";
}
else
cout<<"";
}
else
cout<<"SORRY!!!! No. of seats not available";
}
else if(strcmp(b.clas,gclas)==0)
{
if(a.general>=b.nos)
{
for(int i=0;i<a.nos;i++)
{
if(strcmp(a.station[i],b.bp)==0)
{
f=1;
p=i;
break;
}
}
if(f==1)
{
for(int j=0;j<a.nos;j++)
{
if(strcmp(a.station[j],b.dest)==0)
{
ff=1;
pos=j;
break;
}
}
if(ff==1)
{
srand((unsigned) time(&t));
b.pnr=rand();
dist=a.distance[pos]-a.distance[p];
b.amc=(dist*b.nos);
b.amc=(b.amc*a.generalfare);
a.general=a.general-b.nos;
f1.write((char*)&a,sizeof(a));
flag=1;
if(b.conc==1)
{
cout<<"Concession category:MILITARY PERSONNEL\n";
b.amc=(b.amc*50)/100;
}
else if(b.conc==2)
{
cout<<"Concession category:SENIOR CITIZEN\n";
b.amc=(b.amc*60)/100;
}
else if(b.conc==3)
{
cout<<"Concession category:CHILDERN BELOW FIVE\n";
b.amc=0.0;
}
else if(b.conc==4)
{
cout<<"You cannot get any concession\n";
}
f2.write((char*)&b,sizeof(b));
if(flag==1)
{
if(strcmp(a.type,a.e)==0)
{
b.amc=b.amc+a.exp;
strcpy(a.type,"EXPRESS");
}
else
{
b.amc=b.amc+a.sf;
strcpy(a.type,"SUPERFAST");
}
b.displayresdet();
}
}
else
cout<<"";
}
else
cout<<"";
}
else
cout<<"SORRY!!!! No. of seats are not available";
}
else
cout<<"SORRY!!!! Class does not exist";
}
else
cout<<" ";
}
f1.close();
f2.close();
if(f==0||ff==0)
{
cout<<"SORRY!!!! Train does not goes to this station";
}
getch();
}
void displaypassdetail()
{
clrscr();
int pn,ff=0;
cout<<"Enter pnr number:";
cin>>pn;
fstream f;
f.open("pass.dat",ios::in|ios::binary);
while(!f.eof())
{
f.read((char*)&b,sizeof(b));
if(f.eof())
break;
if(b.pnr==pn)
{
ff=1;
b.displayresdet();
}
}
f.close();
if(ff==0)
{
cout<<"Pnr number entered is wrong:";
}
getch();
}
void can()
{
clrscr();
int ch;
do
{
cout<<".................CANCELLATION MENU.........\n";
cout<<"1.Cancel\n2.Return to the main menu\n";
cout<<"Enter your choice:";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1:
cancell();
break;
}
}while(ch==1);
getch();
}

void cancell()
{
clrscr();
int ac=0;int s=0;int g=0;
float tamt;
fstream f1,f2,f3,f4;
f1.open("train.dat",ios::in|ios::binary);
f2.open("pass.dat",ios::in|ios::out|ios::binary);
f3.open("canc.dat",ios::out|ios::binary);
f4.open("t.dat",ios::out|ios::binary);
cout<<"**********CANCELLATION MENU*********\n";
c.getcancdet();
while(!f2.eof())
{
f2.read((char*)&b,sizeof(b));
if(f2.eof())
{
break;
}
if(b.pnr==c.pnr)
{
flag=1;
c.trainno=b.trainno;
strcpy(c.trainname,b.trainname);
strcpy(c.bp,b.bp);
strcpy(c.dest,b.dest);
c.nos=b.nos;
for(int i=0;i<c.nos;i++)
{
strcpy(c.pname[i],b.pname[i]);
c.age[i]=b.age[i];
}
strcpy(c.clas,b.clas);
tamt=b.amc;
if(strcmp(c.clas,aclas)==0)
{
ac=1;
if((c.d==b.d)&&(c.m==b.m))
{
cout<<"You are cancelling at the date of departure\n";
c.amr=tamt-((tamt*60)/100);
}
else if((c.m==b.m)&&(b.d>c.d))
{
cout<<"You are cancelling at the month of departure\n";
c.amr=tamt-((tamt*50)/100);
}
else if(b.m>c.m)
{
cout<<"You are cancelling one month before the date of departure\n";
c.amr=tamt-((tamt*20)/100);
}
else
{
cout<<"Cancelling after the departure\n";
cout<<"Your request cannot be completed\n";
}
c.displaycancdet();
}
else if(strcmp(c.clas,sclas)==0)
{
s=1;
if((c.d==b.d)&&(c.m==b.m))
{
cout<<"You are cancelling at the date of departure\n";
c.amr=tamt-((tamt*60)/100);
}
else if((c.m==b.m)&&(b.d>c.d))
{
cout<<"You are cancelling at the month of departure\n";
c.amr=tamt-((tamt*50)/100);
}
else if(b.m>c.m)
{
cout<<"You are cancelling one month before the date of departure\n";
c.amr=tamt-((tamt*20)/100);
}
else
{
cout<<"Cancelling after the departure\n";
cout<<"Your request cannot be completed\n";
}
c.displaycancdet();
}
else if(strcmp(c.clas,gclas)==0)
{
g=1;
if((c.d==b.d)&&(c.m==b.m))
{
cout<<"You are cancelling at the date of departure\n";
c.amr=tamt-((tamt*60)/100);
}
else if((c.m==b.m)&&(b.d>c.d))
{
cout<<"You are cancelling at the month of departure\n";
c.amr=tamt-((tamt*50)/100);
}
else if(b.m>c.m)
{
cout<<"You are cancelling one month before the date of departure\n";
c.amr=tamt-((tamt*20)/100);
}
else
{
cout<<"Cancelling after the departure\n";
cout<<"Your request cannot be completed\n";
}
c.displaycancdet();
}
}
else
{
flag=1;
f3.write((char*)&b,sizeof(b));
}
}
if(ac==1)
{
while(!f1.eof())
{
f1.read((char*)&a,sizeof(a));
if(f1.eof())
{
break;
}
if(a.trainno==c.trainno)
{
a.ac=a.ac+c.nos;
f4.write((char*)&a,sizeof(a));
}
}
}
if(s==1)
{
while(!f1.eof())
{
f1.read((char*)&a,sizeof(a));
if(f1.eof())
{
break;
}
if(a.trainno==c.trainno)
{
a.sleeper=a.sleeper+c.nos;
f4.write((char*)&a,sizeof(a));
}
}
}
if(g==1)
{
while(!f1.eof())
{
f1.read((char*)&a,sizeof(a));
if(f1.eof())
{
break;
}
if(a.trainno==c.trainno)
{
a.general=a.general+c.nos;
f1.write((char*)&a,sizeof(a));
tamt=b.amc;
}
}
}
f1.close();
f2.close();
f3.close();
f4.close();
remove("train.dat");
rename("t.dat","train.dat");
remove("pass.dat");
rename("canc.dat","pass.dat");
if(flag==1)
{
cout<<"Enter the correct pnr no\n";
}
getch();
}







