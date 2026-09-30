#include<stdio.h>
#include<conio.h>

struct InstaProfile{
    char username[50];
    int followers;

    struct Bio{
        char description[100];
        int age;
    } Bio;
};

void main(){
	
    struct InstaProfile profile = {
        "meet_sheladiya",
        2500,
        {"Software Developer | Tech Enthusiast", 21}
    };

    printf("Instagram Profile\n");
    printf("----------------------\n");

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Description: %s\n", profile.Bio.description);
    printf("Age: %d\n", profile.Bio.age);

    getch();
}
