#include<iostream>
using namespace std;
int main(){
	int i,j,n,sum;
	cout<<"enter the number of perfect numbers:\n";
	cin>>n;
	if(n<0)
	{
		cout<<"invalid";
		exit(0);
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			sum = 0;
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				{
				sum = sum+j;
			    }
			}
				if(sum==i)
                cout<<i;
		}
	}

return 0;
}