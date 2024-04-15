#include<iostream>
using namespace std;

// factorial of n by functional recursion Way //

fact(int n)
{
	if(n==0)
	return 1;
	
    return n * fact(n-1);           
}

main()
{
	int n;
	cin>>n;
	cout<<"Factorial of "<<n<<" is "<<fact(n);
}
