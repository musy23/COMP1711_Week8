#include <stdio.h>

//the value of the last dimension, variable (3) is required.
void printArray(int a[][3] ){
  for (size_t i = 0; i <= 1; ++i) {
     for (size_t j = 0; j <= 2; ++j) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}

int main() {

  int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  printf("Values in array1 by row are:\n");
  printArray(array1);

//Another way of assigning values to arrays. zeroes in cells where data is missing, values assigned to next row automatically, for example 
  int array2[2][3] = {1, 2, 3, 4, 5, 6};
  printf("Values in array2 by row are:\n");
  printArray(array2);

//Assigining values to arrays
  int array3[2][3] = {{1, 2}, {4}};
  printf("Values in array3 by row are:\n");
  printArray(array3);
  
  return 0;
}