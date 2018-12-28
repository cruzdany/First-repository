#include<iostream>
/*This is a basic calculator*/
using namespace std;

int main(){
	
	float val1, val2, sum=0, subs=0, mult=0, div=0;
	cout<<"This is a basic calculator, I will ask you for numbers"<<endl;
	cout<<"Give me 2 values"<<endl; 
	cin>>val1>>val2;
	
	sum=val1+val2;
	subs=val1-val2;
	mult=val1*val2;
	div=val1/val2;
	
	cout<<"The result of the sum is: "<<sum<<endl;
	cout<<"The result of the substraction is: "<<subs<<endl; 
	cout<<"The result of the multiplication is: "<<mult<<endl; 
	cout<<"The result of the division is: "<<div<<endl;
	  
	return 0;
}
