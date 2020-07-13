/* Booking Management System
    -by Prakhar */


#include<conio.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<process.h>
#include<stdio.h>
using namespace std;


class Movie
{protected:
	char movie[25];
	char city[25];
};
    
class Theater
{protected:
	int book;
	char theater[25];
};

class Booking
{protected:
	char seat[25];
	char date[25];
	char time[25];
	int nseat;
	int amt=0;
	int ch;  
};
    
class Facilities 
{protected:
	char food1[25];
	char food2[25];
	char food3[25];
	int ch;
	int price1;
	int price2;
	int price3;
};
    
class Address   
{protected:
    double phn;
    char addr[25];

};  
     
class Payment
{protected:
	int opt;
	char det[50];
};   
   
   


class ABC : public Movie,public Theater,public Booking,public Facilities, public Address, public Payment     
{
public:




void Enter()
{     
      system("cls");
	  cout<<"\nAdmin Account:";
	  cout<<"\nmovie\t:";
      cin>>movie;
      cout<<"date:\t";
      cin>>date;
      cout<<"time:\t";
      cin>>time;
      cout<<"\nfood prefrence:\n";
      cout<<"1.\t";
      cin>>food1;
      cout<<"price:\t";
      cin>>price1;
      cout<<"2.\t";
      cin>>food2;
      cout<<"price:\t";
      cin>>price2;
      cout<<"3.\t";
      cin>>food3;
      cout<<"price:\t";
      cin>>price3;
    
}
      
   
     
void Display()
{    
     system("cls");
	 cout<<"\nUser Account:";
     cout<<"\nhi ";//<<name;
     cout<<"\n(Munbai/Delhi/Banglore)";
	 cout<<"\nCity:\t";
     cin>>city;
     if(strcmp(city,"mumbai")==0 || strcmp(city,"delhi")==0 || strcmp(city,"banglore")==0)
     { 
	    cout<<"\nMovie:\t"<<movie;
	 }
     
	 
	 

      cout<<"\n\tPVR";
      cout<<"\n\tinox";
      cout<<"\n\tcinepolis";
      cout<<"\ntheater:\t";
      cin>>theater;
      if(strcmp(theater,"pvr")==0)
       book=1;
      else if(strcmp(theater,"inox")==0)
       book=2;
      else if(strcmp(theater,"cinepolis")==0)
       book=3;
       
	 
	 
	 
     switch(book)
   
     {
	 case 1: 
     cout<<"pvr\n";
     cout<<"\ngold: Rs 150\n";
     cout<<"\nplatinum: Rs 200\n";
     cout<<"\ndiamound: Rs 250\n";
     cin>>seat;
     if(strcmp(seat,"gold")==0)
       {
	    cout<<"number of seats:";
        cin>>nseat;
        amt=nseat*150;
        cout<<"amount:\tRs"<<amt;	
       }
     else if(strcmp(seat,"platinum")==0)
       {
	    cout<<"number of seats:";
        cin>>nseat;
        amt=nseat*200;
        cout<<"amount:\tRs"<<amt;	
       }
     else if(strcmp(seat,"diamound")==0)
       {
	    cout<<"number of seats:";
        cin>>nseat;
        amt=nseat*250;
        cout<<"amount:\tRs"<<amt;	
       }
     break;

     case 2:
     cout<<"inox\n";
     cout<<"\ngold: Rs 170\n";
     cout<<"\nplatinum: Rs 220\n";
     cout<<"\ndiamound: Rs 270\n";
     cin>>seat;
     if(strcmp(seat,"gold")==0)
       {
	    cout<<"number of seats:";
        cin>>nseat;
        amt=nseat*170;
        cout<<"amount:\tRs"<<amt;	
       }
     else if(strcmp(seat,"platinum")==0)
       {
	    cout<<"number of seats:";
        cin>>nseat;
        amt=nseat*220;
        cout<<"amount:\tRs"<<amt;	
       }
     else if(strcmp(seat,"diamound")==0)
       {
	    cout<<"number of seats:";
        cin>>nseat;
        amt=nseat*270;
        cout<<"amount:\tRs"<<amt;	
       }
     break;

    case 3:
     cout<<"cinepolis\n";
     cout<<"\ngold: Rs 140\n";
     cout<<"\nplatinum: Rs 190\n";
     cout<<"\ndiamound: Rs 240\n";
     cin>>seat;	
     if(strcmp(seat,"gold")==0)
       {
	    cout<<"number of seats:";
        cin>>nseat;
        amt=nseat*140;
        cout<<"amount:\tRs"<<amt;	
     }
     else if(strcmp(seat,"platinum")==0)
       {
	    cout<<"number of seats:";
        cin>>nseat;
        amt=nseat*190;
        cout<<"amount:\tRs"<<amt;	
       }
      else if(strcmp(seat,"diamound")==0)
       {
	    cout<<"number of seats:";
        cin>>nseat;
        amt=nseat*240;
        cout<<"amount:\tRs"<<amt;	
       } 
	 break;

   }
   
   
    cout<<"\ndate:\t"<<date;
	cout<<"\ntime:\t"<<time;
	getchar();
	 
	system("cls"); 
	 int ch;
	 cout<<endl;
     cout<<"> 1."<< food1 <<" "<<price1<<"\n";
     cout<<"> 2."<< food2 <<" "<<price2<<"\n";
     cout<<"> 3."<< food3 <<" "<<price3<<"\n";
     cout<<"Enter your choice\n";
     cin>>ch;
     if(ch==1)
     {amt=amt+price1;
     cout<<"amount:"<<amt;}
     else if(ch==2)
	 {amt=amt+price2;
     cout<<"amount:"<<amt;}
     else if(ch==3)
     {amt=amt+price3;
     cout<<"amount:"<<amt;}
   
	 
	 
	 cout<<"\nEnter details";
     cout<<"\nphone number:\t";
     cin>>phn;
     cout<<"address:\t";
     cin>>addr;
     
     
     cout<<endl;
     cout<<"\n\nPhone:\t"<<phn;
     cout<<"\n\nAddress:\t"<<addr;
	 cout<<"\n\nCity:\t"<<city;
     cout<<"\n\nTheater:\t"<<theater;
     cout<<"\n\nMovie:\t"<<movie;
     cout<<"\n\nSeat:\t"<<seat;
     cout<<"\n\nNo.of seat:\t"<<nseat;
     cout<<"\n\nAmount:\t"<<amt; 
     
     
     cout<<endl;
	 cout<<"payment portal\n";
     cout<<"Amount:\t"<<amt<<endl;
     cout<<"paying options\n";
     cout<<"1.net baking\n2.creadit/debit card\n3.UPI\n";
     cin>>opt;
     cout<<"payment window\n";
     cout<<"enter details\n";
     cin>>det;

}

}x;














    
	
	


class Porital
{
     public:
 
 	char Cmail[25];
	char Cpwd[25];
	char name[25];
 
 	void Create()
 	{
 	  cout<<"Enter mail\n";
 	  cin>>Cmail;
 	  cout<<"Enter password\n";
 	  cin>>Cpwd;
 	  cout<<"Enter name:\n";
 	  cin>>name;
	 }

}P;
	
	
	
	
	
	
	
    


    void SignIn()
     { char mail[45];
	   char pwd[25];
	   char c=' ';
     cout<<"\n\t\t";
     for(int i=0; i<40;i++)
     cout<<"-";
     cout<<"\n\t\t\t";
     cout<<"Book My Show";
     cout<<"\n\n\t\t\t";
     cout<<"Sign in";
     cout<<"\n\n\t\t\t";
     cout<<">Email:\t\t ";
     cin>>mail;
     cout<<"\n\t\t\t";
     cout<<">Password:\t ";
      int i=0;
      while(i<10)
      {
	   pwd[i]=getch();
       c=pwd[i];
       if(c==13) break;
       else printf("*");
       i++;
      }
      pwd[i]='\0';
      i=0;
     
	 
	 
	  if(strcmp(mail,"admin")==0 && strcmp(pwd,"pwd")==0)
	  {
	   ofstream f("mybook.dat",ios::out);
       x.Enter();
       f.write((char*)&x,sizeof(x));
       f.close();
	   }
     
	 
	 else if(strcmp(mail,P.Cmail)==0 && strcmp(pwd,P.Cpwd)==0)
	   {	
		   ifstream f("mybook.dat",ios::in);
		   while(!f.eof())
		   {
		   f.read((char*)&x,sizeof(x));
		   x.Display();
		   }
		   f.close();
		   
		}
    
     }

	    

    
    
    void SignUp()
     {
	 system("cls");
     cout<<"\n\t\t";
     for(int i=0; i<40;i++)
     cout<<"-";
     cout<<"\n\t\t\t";
     cout<<"Book My Show";
     cout<<"\n\n\t\t\t";
     cout<<"Sign Up";
     cout<<"\n\n\t\t\t";
     cout<<"Create Account";
     cout<<"\n\n\t\t\t";
    
	
	 ofstream fo("mybook.dat",ios::app);
     char ans='y';
     while(ans=='y')
     {
	 P.Create();
     fo.write((char*)&P,sizeof(P));
     ans='n';
     cout<<"(Record Entering Succsesful)\n";
     cout<<"(Press Enter Key)\n";
     getchar();
     }
     fo.close();
     }

    
    void Show()
     {
	 int ch;
     do
	 {
     cout<<"\n\t\t";
     cout<<"\n\t\t\t";
	 cout<<"Book My Show";
     cout<<"\n\n\n\t\t\t";
	 cout<<"1.Sign In";
     cout<<"\n\n\t\t\t";
	 cout<<"2.Sign Up"; 	 
	 cout<<"\n\t\t";
     cout<<"\n\n\t\t\t";
     cout<<"Enter your choice (1-2) \t ";
     cout<<"\n\n\t\t";
     cin>>ch;
     switch (ch)
     {case 1: SignIn (); 
	  break;
	  case 2: SignUp ();
	  break;	
     }
     }while (ch>=1 && ch<=2 );
     }

    

  int main()
   {   
     Show();
     return 0;    
   }

