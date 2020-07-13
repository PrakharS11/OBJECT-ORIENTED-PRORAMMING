/* Database System utilizing Stucture
   Class 11th Computer Science
    - by Prakhar*/

#include<iostream>
 #include<conio.h>
 #include<string.h>
 #include<stdio.h>
 using namespace std;
 struct cadet
  {
   int eno ;
   char nme[25];
   int hgt;
   int wgt;
   int dob;
   char gen[25];
   char desig[25];
   int slr;
   char addr[25];
   char fnm[25];
  }c[10];

 void enter()
  {char e;
   for (int i=0 ; i<10 ; ++i)
  {cout<<" \n enter e nrolment no";
   cin>>c[i].eno ;
   cout<< "\n enter name";
   gets(c[i].nme);
   cout<<"\n enter height";
   cin>>c[i].hgt;
   cout<<"\n enter weight";
   cin>>c[i].wgt;
   cout<<"\n enter dob";
   cin>>c[i].dob;
   cout<<"\n enter gender";
   gets(c[i].gen);
   cout<< "\n enter designtion";
   gets(c[i].desig);
   cout<<" \n enter addr";
   gets(c[i].addr );
   cout<<"\n enter fthers nme";
   gets(c[i].fnm);
   cout<<"\n you want to enter more(y/n)" ;
   cin>>e;
   if (e!='y')
   break;
  }
  }

 void display()
  {char e;
   for(int i=0; i<10 ;++i)
  {cout<<" enrolment no.";
   cout<<c[i].eno;
   cout<<"name" ;
   cout<<c[i].nme;
   cout<<"height";
   cout<<c[i].hgt;
   cout<<"weight";
   cout<<c[i].wgt;
   cout<<"dob";
   cout<<c[i].dob;
   cout<<"gender";
   cout<<c[i].gen;
   cout<<"designtion";
   cout<<c[i].desig;
   cout<<"addres";
   cout<<c[i].addr;
   cout<<"fathers nme";
   cout<<c[i].fnm;
   cout<< "\n you want disply more (y/n)";
   cin>>e;
   if(e!='y');
   break;
  }
  }

 void search ()
  {int b , flag=0;
   cout<<"\n enter eno. to search";
   cin>>b;
   for(int i=0; i<10; ++i)
  {if(c[i].eno==b)
  {flag = 1;
   cout<<" eno" ;
   cout<<c[i].eno;
   cout<<"\n name";
   cout<<c[i].nme;
   cout<<"\n height";
   cout<<c[i].hgt;
   cout<<"\n weight";
   cout<<c[i].wgt;
   cout<<"dob";
   cout<<c[i].dob;
   cout<<"\n gender";
   cout<<c[i].gen;
   cout<<"\n designtion";
   cout<<c[i].desig;
   cout<<"\n addres";
   cout<<c[i].addr;
   cout<<"\n fathers nme";
   cout<<c[i].fnm;
  }
  }if (flag==0)
   cout <<"\n cadet no not found";
  }
 void modify()
  {int pr, flag=0;
   cout<<" \n enrolment no to modify";
   cin>>pr ;
   for( int i=0; i<10; ++i )
  {if (c[i].eno==pr)
  {flag=1;
   cout<< "/n enter enrolment no";
   cin>>c[i].eno;
   cout<<"/n enter name";
   gets(c[i].nme);
   cout<<"/nheight";
   cout<<c[i].hgt;
   cout<<"/nweight";
   cout<<c[i].wgt;
   cout<<"/ndob";
   cout<<c[i].dob;
   cout<<"/ngender";
   gets(c[i].gen);
   cout<<"/ndesigntion";
   gets(c[i].desig);
   cout<<"/naddres";
   gets(c[i].addr);
   cout<<"/nfathers nme";
   gets(c[i].fnm);
  }
  }if(flag==0)
   cout<<" /nenrolmet no. not found";


  }
 void del()
  {int p,j;
   cout<< "/n enter one product no =";
   cin>>p;
   for (int i=0 ;i<10; ++i)
  {if (c[i].eno==p)
  {for (int j=i ; j<10 ; ++j)
   c[j].eno=c[j+1].eno;
   strcpy (c[j].nme,c[j+1].nme);
   c[j].hgt=c[j+1].hgt;
   c[i].wgt=c[j+1].wgt;
   c[j].dob=c[j+1].dob;
   strcpy(c[j].gen,c[j+1].gen);
   strcpy(c[j].desig,c[j+1]. desig);
   strcpy(c[j].addr,c[j+1]. addr);
   strcpy(c[j].fnm,c[j+1].fnm);
  }
  }
   cout<< "/n can not found" ;
  }

  main()
  {int ch;
   do
  {cout<<"\n 1 to enter";
   cout<<"\n 2 to display";
   cout<<" \n3 to search";
   cout<<" \n4 to modify";
   cout<<" \n5 to delete";
   cout<<"\nenter your choice (1-5) \t ";
   cout<< "\npress 6 to exist";
   cin>>ch;
   switch (ch)
  {
	case 1: enter (); break;
	case 2: display (); break;
	case 3: search (); break;
	case 4: modify (); break;
	case 5: del (); break;
	       }
  }while (ch>=1 && ch<=5 );
  }


//The End




