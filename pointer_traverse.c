/**
 * 
 *  Traverse array using pointer increment.
 */

 #include "stdint.h"
 #include <stdio.h>

 int main(){
    // 1d
    int a[] = {1,4,5,3};
    int length = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < length; i++){
      printf("%d\n",*(a+i)); // pointer arithmetic 
    }
    printf("\n");
    // 2d
    int b[][2] = {{6,7},{8,9}};
    int lenb = sizeof(b)/sizeof(b[0]); // number of rows
    int colsb = sizeof(b[0])/sizeof(b[0][0]); // number of cols
    for (int i = 0;i < lenb; i++){
      for (int j = 0; j < colsb; j++){
        printf("%d ",**(b+i)+j);
      }
    }
    printf("\n");

    //3d 
    int c[][2][2] = {{1,2},{3,4},{5,6},{7,8}};
    int layerc = sizeof(c)/sizeof(c[0]); // number of rows
    int rowsc = sizeof(c[0])/sizeof(c[0][0]); 
    int colsc = sizeof(c[0][0])/sizeof(c[0][0][0]);
    for(int i = 0; i < layerc; i++){
      for(int j = 0; j < rowsc; j++){
        for(int k = 0; k < colsc; k++){
          printf("%d ",*(*(*(c+i)+j)+k));
        }
      }
    }

    // 4d 
    int d[][2][2][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
    int dim1 = sizeof(d)/sizeof(d[0]); // number of layers
    int dim2 = sizeof(d[0])/sizeof(d[0][0]); 
    int dim3 = sizeof(d[0][0])/sizeof(d[0][0][0]);
    int dim4 = sizeof(d[0][0][0])/sizeof(d[0][0][0][0]);
    for(int i = 0; i < dim1; i++){
      for(int j = 0; j < dim2; j++){
        for(int k = 0; k < dim3; k++){
          for(int l = 0; l < dim4; l++){
            printf("%d ",*(*(*(*(d+i)+j)+k)+l));
          }
        }
      }
    }
    return 0;
 }

 