#include<iostream>
using namespace std;

int num(int n)
{
	if(n==0)
	return 0;
	else
	cout<<n<<endl;
	num(n-1);
	
}

int main()
{
	int n;
	cout<<"N = ";
	cin>>n;
	num(n);
}
