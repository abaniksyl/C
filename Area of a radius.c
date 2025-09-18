#include<stdio.h>
#include<math.h> //libari funcation
int main()

{
    float area,radius;
    printf("Enter the value of radius : ");
    scanf("%f",&radius);

    area = M_PI * radius * radius;
    printf("Are of the radiius = %f\n",area);

    getchar();
}

