#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   float height,m51,weight,BMI; 

    printf("======�ӨϥΪ̪�BMI��T======\n"); 

    printf("�z���������G");

    scanf("%f",&height);

    printf("�z���魫���G");

    scanf("%f",&weight);

    printf("=============================\n");

    m51=height/100;

    BMI=weight/(m51*m51);

    printf("BMI = %.2f\n\n",BMI);

    system("pause");

    return 0;

}
