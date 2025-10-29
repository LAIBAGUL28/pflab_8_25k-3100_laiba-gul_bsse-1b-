
#include <stdio.h>
int main()
 {
 	//pf lab q8
 	
    char seat[5][5];
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if ((i + j) % 2 == 0)
                seat[i][j] = 'X';   
            else
                seat[i][j] = 'O';   
        }
    }

  	printf("  CLASSROOM SEATING CHART");
		printf("\n  ======================");
		printf("\n\n X = STUDENT , o = EMPTY\n\n");	
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c ", seat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

