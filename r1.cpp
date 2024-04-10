#include<iostream>
using namespace std;


int f(int i,int n){
	
  	if(i>n)
  	return 0;
  	
  	cout<<"Naren"<<endl;              // TC is O(n)
 	f(i+1,n);                        //  SC is O(n)
 	
 }
 
int main(){
 	int n;
 	cin>>n;
 	f(1,n);
 }
