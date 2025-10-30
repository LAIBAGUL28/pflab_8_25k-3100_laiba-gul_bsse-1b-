
#include<stdio.h>
main()
{ 		//pf lab question 7
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
		for(j=1;j<i;j++)
		{
			printf("*");
		}
		for(k=5;k>i;k--)
		{
			printf(" ");
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
			for(j=1;j<i;j++)
		{
			printf("%d",j+i);
		}
		for(k=5;k>i;k--)
		{
			printf(" ");
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
			for(j=1;j<i;j++)
		{
			printf("%c", 'A'+j-1+i);
		}
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		printf("\n");
	}
}
