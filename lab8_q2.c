#include<stdio.h>
int main()
{		//lab 08 q 2
	int i,j;
	int row, col;
	int max = 0, index;
	int mat[3][4]={
		{10,22,35,4},
		{50,65,73,80},
		{91,10,11,12},
		};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf(" %d",mat[i][j]);
			printf("\n");
		if(mat[i][j]>max)
		{
			max=mat[i][j];
			row=i;
			col=j;
		}
	} 	
			printf("\nthe maximum number in array is %d",max);
			printf("\nthe index = %d %d",i,j);
}
