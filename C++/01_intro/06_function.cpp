#include<iostream>
using namespace std;

void sum(int x,int y){
	int test;
	test = x + y;
	cout<<"sum : "<<test<<endl;
}

int mul(int a,int b){
	return a*b;
}

int main(){
	
	sum(20,10);
	sum(30,20);
	
	cout<<"Mul : "<<mul(30,15)<<endl;
	
	return 0;
}
