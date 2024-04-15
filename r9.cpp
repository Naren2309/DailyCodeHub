#include<iostream>
using namespace std;

void f(int l ,int a[], int r)
{
	if(l>=r)
	return;
	swap(a[l],a[r]);
	f(l+1,a,r-1);
}

int main()
{
	int n,a[n];
	cin>>n;
	for(int i = 0; i<n; i++)  cin>>a[i];
	f(0,a,n-1);
	for(int i = 0; i<n; i++)  cout<<a[i]<<" ";
	
	return 0;
}
