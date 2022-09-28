#include<iostream>
using namespace std;
class student{
	int rno,m1,m2,m3,avg,total;
	char name[100],grade;
	public:
		void read();
		void compute();
		void display();
};
void student::read()
{
	cout<<"enter the roll no:";
	cin>>rno;
	cout<<"\nenter the name of student:";
	cin>>name;
	cout<<"\nenter the marks of student:";
	cin>>m1>>m2>>m3;
}
void student::compute()
{
	total = m1+m2+m3;
	avg = total/3;
	if(avg>=90)
	{
		grade = 's';
	}
	else if(avg<90 and avg>=80)
	{
		grade = 'a';
	}
	else if(avg<80 and avg>=70)
	{
		grade = 'b';
	}
	else if(avg<70 and avg>=60)
	{
		grade = 'c';
	}
	else if(avg<60 and avg>=50)
	{
		grade = 'd';
	}
	else
	{
		grade = 'fail';
	}
}
void student::display()
{
	cout<<"\n";
     cout<<rno<<" "<<name<<" "<< grade ;  
}
int main()
{
	student s[10];
	int i,n;
	cout<<"enter the number of students:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s[i].read();
	}
	for(i=1;i<=n;i++)
	{
		s[i].compute();
	}
	cout<<"\nroll no"<<" "<<"name"<<" "<<" grade "<<endl;
	for(i=1;i<=n;i++)
	{
		s[i].display();
	}
	return 0;
}