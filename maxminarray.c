#include <stdio.h>
 void fndmaxmin( int a[], int size);

int main()
{ int size ;
printf("Enter size of array:");
scanf("%d",& size);
 int a[size];
 
 for (int i = 0 ; i < size ; i++)
 {
  printf("Enter array element:");
  scanf("%d",&a[i]);
 }
 fndmaxmin(a,size);
 return 0 ;
}

 void fndmaxmin( int a[], int size)
 {
 int max = a[0] ;
 int min = a[0];
 for(int i =1 ; i< size ; i++)
 {
     if (a[i]>max)
     {
         max=a[i];
     }
     if (a[i]<min)
     {
         min = a[i];
         
     }
 }
 printf("The biggest number %d\n:",max);
 printf("The smallest number %d\n",min);
}
