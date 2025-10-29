#include<stdio.h>
	int main()
	{    //pf lab question 3
		int image[4][4] = {
		{1, 0, 1, 0},
		{0, 1, 0, 1},
		{1, 1, 0, 0},
		{0, 0, 1, 1}	
		};
		int inverted[4][4];
		int i, j, count = 0;
		
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				if(image[i][j] == 1)
				{
					count ++;
				}
				
			}
			
		}
	
	for(i=0; i<4; i++)
{
    for(j=0; j<4; j++)
    {
        if(image[i][j] == 1)   
        {
            inverted[i][j] = 0;
        }
        else if(image[i][j] == 0)  
        {
            inverted[i][j] = 1;
        }
        else
        {
            printf("incorrect");
        }
       
    }
    
}
printf("Original Image      Inverted Image\n");
    for(i=0; i<4; i++) 
	{
        
        for(j=0; j<4; j++)
		 {
            printf("%d ", image[i][j]);
         }

        printf("              "); // space between two images

    
        for(j=0; j<4; j++)
		 {
            printf("%d ", inverted[i][j]);
         }

        printf("\n");
    }
	printf("\nTHE WHITE PIXEL IN ORIGINAL IMAGE IS: %d ",count);				
}
