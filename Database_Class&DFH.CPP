		   /*Class 12th Computer Science Project*/
		   /*Cadet Database Management System*/
			      /*by Prakhar Srivastava*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
class cadet
{
private:
int rc;                           //Registration Code
char n[25];                       //Name
char fn[25];                      //Father's Name
char ad[25];                      //Address
char c[25];                       //City
int pc;                           //Pin Code
int dob;                          //Date Of Birth
int hgt;                          //Hight
int wgt;                          //Weight
char rgt[25];                         //Regiment

public:
void getdata()
{
cout<<"Enter Registration no.\t";
cin>>rc;
cout<<"Enter Name\t";
gets(n);
cout<<"Enter Father's Name\t";
gets(fn);
cout<<"Enter Address\t";
gets(ad);
cout<<"Enter City\t";
gets(c);
cout<<"Enter Pin Code\t";
cin>>pc;
cout<<"Enter Date Of Birth\t";
cin>>dob;
cout<<"Enter Height\t";
cin>>hgt;
cout<<"Enter Weight\t";
cin>>wgt;
cout<<"Enter Regiment\t";
gets(rgt);
}
void putdata()
{
cout<<"Registration No.:\t"<<rc;
cout<<"\nName:\t"<<n;
cout<<"\nFather's Name:\t"<<fn;
cout<<"\nAddress:\t"<<ad;
cout<<"\nCity:\t"<<c;
cout<<"\nPin Code:\t"<<pc;
cout<<"\nDate Of Birth:\t"<<dob;
cout<<"\nHeight:\t"<<hgt;
cout<<"\nWeight:\t"<<wgt;
cout<<"\nRegiment:\t"<<rgt;


}
int getrc()
{
return rc;
}

}c1;

void append()                     // Enter Function
{
clrscr();
ofstream fo("cadets.dat",ios::app);
cadet c1;
char ans='y';
while(ans=='y')
{
cout<<"\n~ADD DATA\n";
c1.getdata();
fo.write((char*)&c1,sizeof(c1));
cout<<"(You Want To Enter More)(y/n):\t";
cin>>ans;
cout<<"(Record Entering Succsesful)\n";
cout<<"(Press Enter Key)\n";
getchar();
}
fo.close();
}

void show()                       // Display Function
{
clrscr();
ifstream fi("cadets.dat",ios::app);
cadet c1;
fi.seekg(0);
while(!fi.eof())
{
cout<<"\n~SHOW DATA\n";
fi.read((char*)&c1,sizeof(c1));
c1.putdata();
cout<<"\n(Press Enter Key)";
getchar();
}
fi.close();
}

void search()                    // Search Function
{
clrscr();
ifstream  fi("cadets.dat",ios::in);
int s;
cadet c1;
cout<<"\n~SEARCH DATA\n";
cout<<"Enter The Registration No. To Be Searched:\t";
cin>>s;
fi.seekg(0);
char found='f';
while(!fi.eof())
{
fi.read((char*)&c1,sizeof(c1));
if(c1.getrc()==s)
{
c1.putdata();
found='y';
break;
}
}
if(found=='f')
cout<<"\n(RECORD NOT FOUND!)\n";
cout<<"\n(Press Enter Key)\n";
getchar();
fi.close();
}


void modify()                    // Modify Function
{
fstream fio("cadets.dat",ios::in||ios::out);
int pcm;
char found='f';
long pos;
cout<<"\n~MODIFY DATA\n";
cout<<"Enter Registration no,to be modify:\t";
cin>>pcm;
while(!fio.eof())
{
pos=fio.tellg();
fio.read((char*)&c1,sizeof(c1));
if(c1.getrc()==pcm)
{
c1.getdata();
fio.seekg(pos);
fio.write((char*)&c1,sizeof(c1));
found='t';
break;
}
}
if (found=='f')
cout<<"(Registration No.not found!)\n";
fio.seekg(0);
cout<<"(NOW THE FILE CONTAIN)\n";
while(fio.eof());
{
fio.read((char*)&c1,sizeof(c1));
c1.putdata();
}
fio.close();
getch();
}


void del()                       // Delete Function
{
ifstream fio("cadets.dat",ios::in);
ofstream file("cadet.dat",ios::out);
int pcd;
char found='f';
char confirm='n';
cout<<"\n~DELETE DATA\n";
cout<<"Enter Registration No. to be delete:\t";
cin>>pcd;
while(!fio.eof())
{
fio.read((char*)&c1,sizeof(c1));
if(c1.getrc()==pcd)
{ c1.putdata();
 found='t';
 cout<<"\n(Are you sure you want this delete this file!)(y/n)\t";
 cin>>confirm;
 if(confirm=='y')
 file.write((char*)&c1,sizeof(c1));
}
else
file.write((char*)&c1,sizeof(c1));
}
if(found=='f')
cout<<"(Record not found!)\n";
fio.close();
file.close();
remove("cadets.dat");
rename("cadets.dat","cadets.dat");
fio.open("cadets.dat",ios::in);
cout<<"(NOW THE FILE CONTAIN)\n";
while(!fio.eof())
{
fio.read((char*)&c1,sizeof(c1));
if(fio.eof());
c1.putdata();
break;
}
fio.close();
}

void main()                       // Main Funtion
{ int ch;
do
{
 clrscr();
 cout<<"\n\t\t Cadet Database Management System\n";
 cout<<"MAIN MEANU\n";
 cout<<"1.Add\n";
 cout<<"2.Display\n";
 cout<<"3.Search\n";
 cout<<"4.Modify\n";
 cout<<"5.Delete\n";
 cout<<"6.Exit\n";
 cout<<"Enter your choice:\t";
 cin>>ch;


switch(ch)
 {
case 1:append();
       break;
case 2:show();
       break;
case 3:search();
       break;
case 4:modify();
       break;
case 5:del();
       break;
case 6:exit(0);
       break;
}
}
while((ch>=1)&&(ch<=5));
}
				    //End Program//