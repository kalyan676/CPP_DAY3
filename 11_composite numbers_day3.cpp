#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j,n;
	cout<<"enter the lower limit";
	cin>>a;
	cout<<"enter the upper limit:";
	cin>>b;
	for(i=a;i<=b;i++)
	{
		for(j=a;j<i;j++)
		{
			if(i%j==0)
			{
				cout<<"\n"<<i;
				break;
			}
		}
		cout<<"\n";
	}
	return 0;
}