#include<iostream>
using namespace std;

/*

	* * * * *
	* * * *
	* * *
	* *
	*
	
	1 
	2 3 
	4 5 6 
	7 8 9 10
*/

int main(){
	
	int i,j;
	int num=1;
	
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
	
	
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<"\n";
//	}
	
//	for(i=5;i>=1;i--){
//		for(j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<"\n";
//	}
	
	return 0;
}
