#include<stdio.h>
#include<conio.h>

struct FoodItem{
    char itemName[50];
    float price;
    float rating;
};

void main(){
    struct FoodItem menu[3] = {
        {"Margherita Pizza", 299.00, 4.5},
        {"Veg Burger", 149.00, 4.2},
        {"Paneer Tikka", 249.00, 4.6}
    };

    int i;

    for(i=0;i<3;i++){
        printf("Food Item: %s\n", menu[i].itemName);
        printf("Price: %.2f\n", menu[i].price);
        printf("Rating: %.1f/5\n", menu[i].rating);
        printf("----------------------\n");
    }

    getch();
}
