#include<stdio.h>
main()
{
	
															//PF LAB 08 Question 6
								// print *

	int i,j,k;
	int row=5;
	for(i=1;i<=5;i++)
	{
		for(k=i;k<5;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\t|");
		printf("\t");
		
		
									//print 12345

		for(k=i;k<5;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\t|");
		printf("\t");
		
									//print ABCDE
		for(k=i;k<5;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c", 'A'+j-1);
		}
		printf("\n");
	}
}
