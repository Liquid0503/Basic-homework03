#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   float height,m51,weight,BMI; 

    printf("======該使用者的BMI資訊======\n"); 

    printf("您的身高為：");

    scanf("%f",&height);

    printf("您的體重為：");

    scanf("%f",&weight);

    printf("=============================\n");

    m51=height/100;

    BMI=weight/(m51*m51);

    printf("BMI = %.2f\n\n",BMI);

    system("pause");

    return 0;

}
