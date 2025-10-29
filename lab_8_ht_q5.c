#include <stdio.h>

int main() {
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };

    int i, j;
     int current;
      int isCold;
    int rows = 4, cols = 4;

    printf("Cold spots found:\n");

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
             current = temp[i][j];
             isCold = 1; 


            if (i > 0 && current >= temp[i-1][j])
                isCold = 0;

            
            if (i < rows-1 && current >= temp[i+1][j])
                isCold = 0;

            
            if (j > 0 && current >= temp[i][j-1])
                isCold = 0;

            
            if (j < cols-1 && current >= temp[i][j+1])
                isCold = 0;

        
            if (isCold)
                printf("Cold spot at (Row %d, Col %d) = %d Degree Centigrade\n", i+1, j+1, current);
        }
    }

    return 0;
}

