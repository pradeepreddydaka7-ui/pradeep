#include<stdio.h>
 int main()
 {
 int i, p, num;
 int a[50]={10,20,30,40,50,60,70,80,90,100}; 
 printf("enter position to insert ");
 scanf("%d",&p);
 printf("enter number to insert");
 scanf("%d",&num);
 for(i=9;i>=p;i--)
  	{      a[i+1]=a[i];  
		}
  a[p]=num;
  for(i=0;i<11;i++)
	{       printf(" %d",a[i]);   
		}

   
printf("\nenter position to delete");
   scanf("%d",&p);
   for(i=p;i<10;i++)
   {
       a[i]=a[i+1];
   }
   for(i=0;i<10;i++)
   	{     
	  printf(" %d",a[i]); 
	  }
         return 0;
 }
