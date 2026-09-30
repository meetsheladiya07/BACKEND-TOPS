#include<stdio.h>
#include<conio.h>

struct MovieShow{
    char Movie[50];
    int Screen;

    struct Time{
        int hours;
        int minutes;
    } Time;
};

void main(){
	
    struct MovieShow show = {
        "Dhurandhar",
        2,
        {7, 30}
    };

    printf("Movie: %s, Screen: %d, Time: %02d:%02d",
           show.Movie,
           show.Screen,
           show.Time.hours,
           show.Time.minutes);

    getch();
}
