#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		char name[20];
	public:
		Student(){
			cout<<"Enter Your Rollno : ";
			cin>>rollno;
			cout<<"Enter Your Name : ";
			cin>>name;
		}
		void display(){
			cout<<"Student details "<<endl;
			cout<<"Rollno : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
		}
};

int main()
{
	
	Student s1;
	s1.display();
	
	Student Meet;
	Meet.display();
	return 0;
}
