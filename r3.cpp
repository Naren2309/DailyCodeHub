#include<iostream>
using namespace std;

int num(int i , int n){
	if(i>n)
	return 0;
	
	cout<<n<<endl;
	num(i,n-1);
}

int main(){
	int n;
	cin>>n;
	num(1,n);
}
