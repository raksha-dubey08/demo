#include <stdio.h>
void countoddeven(int a[], int size)
{
    int counte=0;
    int counto=0;
    for(int i = 0 ; i < size ; i++)
    {
        int d = a[i];
        if(d%2==0)
        {
            counte +=1;
        }
        else 
        {
            counto +=1;
        }
    }
    printf("The number of odd element is %d\n",counto);
     printf("The number of even element is %d\n",counte);
}
int main()
{   int size;
    printf("Enter size of array ");
    scanf("%d",&size);
    int a [size];
    for (int i = 0 ; i <size ; i++)
    {
        printf("Enter element of array :");
        scanf("%d",&a[i]);
    }
   countoddeven(a,size);
    return 0;
}
