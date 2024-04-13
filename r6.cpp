#include<iostream>
using namespace std;

f(int i, int sum)
{
	if(i<1)
	{
	cout<<sum;
	return 0;
	}
	
	f(i-1,sum+i);
}

main()
{
	int n;
	cin>>n;
	f(n,0);
}
