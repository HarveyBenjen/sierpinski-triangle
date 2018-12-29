#include<stdlib.h>
#include<stdio.h>
#define SIZE 32

void sierpinski(int square[SIZE][SIZE], int size, int x, int y);
void display(int square[SIZE][SIZE]);

int main()
{
   int x=0, y=0;
   int square[SIZE][SIZE] = {0};
   sierpinski(square, SIZE, x, y);
   display(square);
   return 0;
}

void sierpinski(int square[SIZE][SIZE], int size, int x, int y)
{
   if(size == 1){
      square[y][x] = 1;
      return;
   }
   else{
      sierpinski(square, size/2, x+size/4, y);
      sierpinski(square, size/2, x, y+size/2);
      sierpinski(square, size/2, x+size/2, y+size/2);
   }
}

void display(int square[SIZE][SIZE])
{
   for(int r=0;r<SIZE;++r)
   {
      for(int c=0;c<SIZE;++c)
      {
         if(square[r][c] == 1)
         {
            printf("*");
         }
         else
         {
            printf(" ");
         }
      }
      printf("\n");
   }
}
