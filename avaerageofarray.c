#include <stdio.h>
void avg(int a[], int size )
{ int sum = 0 ;
    for (int i = 0 ; i < size ; i++)
    {
        sum = sum + a[i];
    }
    int average = sum / size;
    printf("The average of array %d", average);
}

int main()
{   int size ;
    printf("Enter size of array :");
    scanf("%d",&size);
    int a[size];
    for (int i = 0 ; i < size ; i++)
    {
        printf("Enter element of array :");
        scanf("%d",&a[i]);
    }    
    avg(a,size);
    return 0;
}
