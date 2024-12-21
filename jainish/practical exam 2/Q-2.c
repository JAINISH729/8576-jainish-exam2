// 2. WAP to make below Pattern    
//5 10 15 20 25    
//5 10 15 20    
//5 10 15    
//5 10    
//5

#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
        printf("%d ",5*(j+1));
        }
    printf("\n");
    }
}
