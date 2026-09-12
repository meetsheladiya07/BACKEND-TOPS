/*
A program is a set of instructions written in a programming language that tells a computer how to perform a specific 
task. For example, in Zomato, a program can take the user's selected food items, calculate the total price, add 
delivery charges and taxes, and display the final bill. In C language, we can write programs to perform similar 
calculations and tasks using variables, conditions, and functions.
*/
#include<stdio.h>
#include<conio.h>

void main(){
	int food = 200;
    int delivery = 40;
    int total = food + delivery;

    printf("Total Bill = %d", total);
	getch();
}
