#include<stdio.h>
#include<conio.h>

void Initials(char name[], char init[])
{
    int i=0,j=0;

    init[j++] = toupper(name[0]);

    while(name[i] != '\0')
    {
        if(name[i] == ' ' && name[i+1] != '\0')
        {
            init[j++] = toupper(name[i+1]);
        }
        i++;
    }

    init[j] = '\0';
}

void main()
{
    char name[] ="Meet Sheladiya";
    char init[10];

    Initials(name, init);

    printf("User Name: %s\n",name);
    printf("Initials: %s",init);

    getch();
}
