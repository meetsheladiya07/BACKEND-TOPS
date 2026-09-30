#include<stdio.h>
#include<conio.h>

void main()
{
    
    int cricketScores[4][3] = {
        {180,165,190},
        {145,172,189},
        {210,198,206},
        {155,160,145}
    };
	
	int i,j;
	
    for(i=0;i<4;i++){
        int highest = cricketScores[i][0];

        for (j=1;j<3;j++){
            if (cricketScores[i][j] > highest){
                highest = cricketScores[i][j];
            }
        }

        printf("Highest score in Match %d: %d\n", i + 1, highest);
    }

    getch();
}
