#include<iostream>
using namespace std;

// sum of 1 to n by functional recursion Way //

 f(int n)
{
	if(n==0)
	return 1;
	
    return n * f(n-1);           
}

main()
{
	int n;
	cin>>n;
	cout<<f(n);
}
