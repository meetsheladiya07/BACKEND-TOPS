#include<iostream>
using namespace std;

int main(){
	
	int a[5],i;
	
	for(i=0;i<=4;i++){
	cout<<"Enter your element : ";
	cin>>a[i];		
	}
	
	for(i=0;i<5;i++){
		cout<<"a["<<i<<"] : "<<a[i]<<endl;
	}
	
	cout<<endl;
	
	for(i=4;i>=0;i--){
		cout<<"a["<<i<<"] : "<<a[i]<<endl;
	}
		
	
	return 0;
}
