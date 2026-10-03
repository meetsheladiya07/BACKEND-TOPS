#include<stdio.h>
#include<conio.h>

int main(){
    float basic, hra, da, total_salary;

    printf("Enter the Basic Salary of the employee: ");
    scanf("%f", &basic);

    if (basic <= 10000) {
        hra = basic * 0.20; 
        da = basic * 0.80;  
    } 
    else if (basic <= 20000) {
        hra = basic * 0.25; 
        da = basic * 0.90; 
    } 
    else {
        hra = basic * 0.30; 
        da = basic * 0.95;  
    }
	
	total_salary = basic + hra + da;

    printf("Total Salary = %.2f", total_salary);

    return 0;
}
