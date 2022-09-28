#include<iostream>
using namespace std;
int main()
{
	int i,n,count=0;
	cout<<"enter the number:";
	cin>>n;
	cout<<"factors of "<<n<<" = ";
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			cout<<i;
			cout<<" ";
		}
	}
	cout<<"\nnumber of factors of "<<n<<" = "<<count;
	return 0;
}