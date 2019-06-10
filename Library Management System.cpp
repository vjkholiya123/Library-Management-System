#include<iostream>
#include<string.h>
#include<string>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool checkiflogin=false;
int choice=0;
class check
{
	public:
		string a;
		int b;
		void add1()
		{
			cout<<"\n\t\tenter the book name you want to enter in our record =  ";
			cin>>a; 
	
	add();	
		}
void add()
{
	cout<<" \n\t\tEnter the price of the book =";
	cin>>b;

	ofstream f1;
	f1.open("books.txt",ios::app);
	f1<<a<<" RS."<<b<<" ";
	cout<<"\n\n\t\tRecords sucessfully saved in file";
	f1.close();
}
		
}c1;

class books
{
		char a[30],b[20];
public:
void show()
{
	char ch;
	ifstream ii("books.txt");
	cout<<"\n\n\t\t ";
	while(!ii.eof())
	{
		ii.get(ch);
		if(ch==' ')
		{
			
		cout<<"\n\n\t";
		}
		cout<<ch;
	}
	ii.close();
}
void check()
{
	char c[20],w[20];
	int k=0;
	fstream iff;
	books b1;
	iff.open("books.txt");
	cout<<"\n\t\tEnter the name of the book you want to check if present in our \t\t\tlibrary :";
	cin>>c;
	while(iff)
	{
		iff>>w;
		if(strcmp(w,c)==0)
		k++;
	}
		if(k>0)
		cout<<"\n\n\t\tBook present";
		else
		cout<<"\n\n\t\tNo such book";	
}
void deletee()
{
	if(checkiflogin)
	{
		char ch;
	cout<<"\n\t\tAre you sure you want to delete the book record.\n\t\tUndo is not possible";
	cout<<"\n\t\tPress y to confirm or other key to cancel = ";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
		ofstream xyz("books.txt",ios::out|ios::trunc);
		xyz.close();
		cout<<"\n\t\tFile contents deleted succesfully";
	} 	
	else
	{
	cout<<"\n\n\t\tCancelled by user";
	}
	}
	else
	{
		login();
	}
		
}
void login()
{
	bool checking_if_login_done=false;
	
	string s1;
	char s3[]="vijay";
	string s2="vjkholiya";
		int c=0;
		char pass[25];	
 		int p;
 		d:
 		cout<<"\n\n\t\tEnter Login ID:";
 		cin>>s1;
 		if (s1==s2)
 		{
 		cout<<"\n\t\tEnter Password:";
 			for (int i=0;i<strlen(s3);i++)
				 {
 					 pass[i] = getch();
 					 cout<<"*";
				 }
			 for (int j=0;j<strlen(s3);j++)
  				{
  					  if (pass[j] == s3[j])
  					  c = c+1;
  				}
			if (c == strlen(s3))
			{
			
   				 cout<<"\n\n\t\tCorrect Password";
				 cout<<"\n\n\t\tYou have succesfully logged in as vjkholiya";
				 checking_if_login_done=true;
				 checkiflogin=true;
			}
			else
  				 cout<<"\n\n\t\tInvalid Password";
		}
		else 
		{
		cout<<"\n\n\t\tWrong username please retry";
		goto d;
		}
		if(checking_if_login_done && choice==4)
		deletee();
		else
		exit;
		
}
}b1;
main()
{
	
	int ch,i;
	char a;
	cout<<"\n\n\t\t";
	for(i=0;i<33;i++)
	{cout<<"*";
	}
	cout<<"\n\t\t*\t\t\t\t*";
	cout<<"\n\t\t*  BOOK SHOP MANAGEMENT SYSTEM  * ";
	cout<<"\n\t\t*\t\t\t\t*\n\t\t";
	for(i=0;i<33;i++)
	{cout<<"*";
	}
	xyz:
	cout<<"\n\n\n\t\tEnter your choices(1-5)\n\n";
	cout<<"\n\n\t\t1.Add book records\n";
	cout<<"\n\t\t2.Show book records\n";
	cout<<"\n\t\t3.Check availability\n";
	cout<<"\n\t\t4.Delete book records\n";
	cout<<"\n\t\t5.Login\n";
	cout<<"\n\t\t6.Exit\n\t\t";
	cin>>ch;
	choice=ch;
	switch(ch)
	{
	case 1:
			c1.add1();
			break;
	case 2:
			b1.show();
			break;
	case 3:
			b1.check();
			break;
	case 4:
			b1.deletee();
			break;
	case 5:
			b1.login();
			break;
	case 6:
			return 0;
	default:
			exit;
	}
	
	cout<<"\n\n\t\tWant to do more(Y or N)";
	cin>>a;
	if(a=='y'||a=='Y')
	goto xyz;
	else
	exit;
}
