#include<stdio.h>
int main()
{
 int i,j,datos[7][5];
 for (i=0 ; i<7 ; i++)
 {
 for (j=0 ; j<5 ; j++)
 {
 datos[i][j]=i+j;
 printf("\t%d, ",datos[i][j]);
 }
 printf("\n");
 }
 return 0; 
}
