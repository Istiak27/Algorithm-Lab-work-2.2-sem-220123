#include<stdio.h>

int max,min;

int a[100];

max_min(int i,int j)
{
    int mid,max1,min1;

    if(i == j)
    {
        max = min = a[i];
    }

    else if(i == j-1)
    {
        if(a[i] > a[j])
        {
            max = a[i];

            min = a[j];
        }

        else
        {
            max = a[j];

            min = a[i];
        }
    }

    else
    {
       mid = (i+j)/2;

       max_min(i,mid);

       max1 = max;

       min1 = min;

       max_min(mid+1,j);

       if(max < max1)

        max = max1;

       if(min > min1)

       min = min1;

    }
}

int main()
{
    int i,num;

    printf("Enter the total number of numbers:\n");

    scanf("%d",&num);

    printf("Enter the number: \n");

    for(i = 1; i <= num; i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];

    min = a[0];

    max_min(1,num);

    printf("The maximum number of element:%d\n",max);

    printf("The minimum number of element:%d",min);

    return 0;
}
