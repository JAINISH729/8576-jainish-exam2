//3. WAP to find sum of all positive value in 1D Array
#include<stdio.h>
void main()
{
    int i,n;
    int sum=0;

    printf("enter the size:");
    scanf("%d",&n);
    
    int arr[n];

    printf("enter the element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    printf("sum of all positive value is %d",sum);
}