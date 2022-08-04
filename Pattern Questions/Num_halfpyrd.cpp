

#include<iostream>
using namespace std;
int main()
{
	int n,num=1;
	cout<<"Enter the value of n";
	cin>>n;
	for(int i=0;i<n;i++,num++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<num;
		}
		cout<<endl;
	}
}