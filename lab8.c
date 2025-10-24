#include<stdio.h>
int main()
{   //lab8 question 1 (multiplication)
	//nested loops
	int n=0, table=0;
		int i,j;
    printf("enter input:");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
    	for(j=1;j<=10;j++)
    	{
    		table=i*j;
    		
    		printf("  %d",table);
    		
		}
		printf("\n");
	}
}
