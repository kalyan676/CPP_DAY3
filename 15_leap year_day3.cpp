#include<iostream>
using namespace std;
int main()
{
	int y,r;
	cout<<"enter the year:";
	cin>>y;
	if(y%4==0||y%400==0)
	{
		cout<<y<<"is a leap year";
		cout<<"\n next leap year = "<<y+4;
	}
	else
	{
		r=y%4;
		cout<<"not a leap year";
		cout<<"\n previous leap year = "<<y-r;
	}
	return 0;
}