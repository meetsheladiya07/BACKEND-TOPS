#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		string name;
		string course;
	
	public:
		void putData(){
			cout<<"Enter Your Rollno : ";
			cin>>rollno;
			cout<<"Enter Your Name : ";
			cin>>name;
			cout<<"Enter Your Course : ";
			cin>>course;
		}
		void getData(){
			cout<<"---Student Details ----"<<endl;
			cout<<"Rollno : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Course : "<<course<<endl;
		}
};

int main()
{
	Student s1;
	Student meet;
	
	s1.putData();
	s1.getData();
	
	meet.putData();
	meet.getData();
	
	return 0;
}
