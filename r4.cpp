#include<iostream>
using namespace std;

void f(int i, int n)
{
	if(i>1)
	return;
	f(i,n-1);
	cout<<i<<endl;
}

int main()
{
	int n;
	cin>>n;
	f(n,n);
}
