#include <stdio.h>
void reversed(int a[],int size);
int main()
{   int size ;

    printf("Enter size of array:");
    scanf("%d",&size);
    int a[size];
    for (int i = 0 ; i < size ; i++ )
    {
        printf("Enter element of array:");
        scanf("%d",&a[i]);
    }
  
    printf("original array\n");
    for (int i = 0 ; i < size ; i ++)
    {
        printf("%d\n",a[i]);
    }
    reversed(a,size);
      return 0;
}
void reversed(int a[] ,int size)
{
    printf (" reserved array\n");
    for (int i = size-1;i >=0; i--)
    {
       printf("%d\n",a[i]);
    }
       
}
