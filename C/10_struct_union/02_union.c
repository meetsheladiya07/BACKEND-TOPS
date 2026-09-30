 #include<stdio.h>
#include<conio.h>
 
union Student {
	int rollno;
	float marks;
	char Sname[20];
};

int main(){
	
	union Student s1;
	
	
	printf("Enter your Rollno : ");
	scanf("%d",&s1.rollno);
	printf("Enter your Name : ");
	scanf("%s",&s1.Sname);
	printf("Enter your marks : ");
	scanf("%f",&s1.marks);
	
	printf("\n----Student Details----\n");
	printf("Rollno : %d",s1.rollno);
	printf("\nStudent Name : %s ",s1.Sname);
	printf("\nmarks : %.2f",s1.marks);
	
	
	return 0;
}
