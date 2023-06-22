#include<stdio.h>
float findArea(float);
int main()
{
    float rad=6.6, area;
  
    area = findArea(rad);
    printf("\nArea = %0.2f", area);
 
    return 0;
}
float findArea(float rad)
{
    return 3.14*rad*rad;
}