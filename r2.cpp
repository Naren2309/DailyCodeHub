#include<iostream>
using namespace std;

int num(int i , int n){
	if(i>n)
	return 0;
	
	cout<<i<<endl;
	num(i+1,n);
}

int main(){
	int n;
	cin>>n;
	num(1,n);
}
