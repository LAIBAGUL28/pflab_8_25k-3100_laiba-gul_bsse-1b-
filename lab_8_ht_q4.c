#include<stdio.h>
int main()
{   	//pf ab 08 question 4
	int seat[3][3] = {
	 {1, 0, 1},
 	 {0, 0, 1},
	 {1, 1, 0}
     };
     int i, j, row, col;
     int count = 0;
     for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				if(seat[i][j] == 0)
				{
					count ++;
					row = i+1;
					col = j+1;
					//printf("\n THE AVAIABLE SEATS ARE : %d",count);
					printf("\nthe available seat is in  %d row, %d seat",row, col);
				}
			}
		}
		 printf("\n\nTotal available seats: %d\n", count);	
}
