#include<stdio.h>
#include<conio.h>

// Function to format Instagram followers count
void formatFollowersCount(int count){
    // If followers are less than 1000
    if (count < 1000){
        printf("%d", count);
    }
    // If followers are 1000 or more
    else if (count < 1000000){
        // Convert followers into thousands
        printf("%.1fK", count / 1000.0);
    }
    // If followers are 1 million or more
    else{
        // Convert followers into millions
        printf("%.1fM", count / 1000000.0);
    }
}

void main(){
    // Test different follower counts
    printf("1500 = ");
    formatFollowersCount(1500);

    printf("\n1200000 = ");
    formatFollowersCount(1200000);

    printf("\n850 = ");
    formatFollowersCount(850);

    getch();
}
