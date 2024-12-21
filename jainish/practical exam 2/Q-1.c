// 1. WAP to find area of Triangle using below formula      area=(l*h)/2

#include <stdio.h>
void main()
{
    float length,height,area;

    printf("enter length:-");
    scanf("%f",&length);
    printf("enter height:-");
    scanf("%f",&height);

    area =(length*height)/2;
    
    printf("the area of triangle is %f",area);
}    