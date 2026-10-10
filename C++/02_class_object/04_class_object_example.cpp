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
			cin.ignore();
			cout<<"Enter Your Name : ";
			getline(cin,name);
			cout<<"Enter Your Course : ";
			getline(cin,course);
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
	
	s1.putData();
	s1.getData();

	
	return 0;
}
