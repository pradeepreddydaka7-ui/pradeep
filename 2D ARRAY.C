#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],i,j;
 printf("Enter elements into A matrix");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Elements of   matrix A\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf(" %d",a[i][j]);
  } 
printf("\n");
 }
return 0;
}
