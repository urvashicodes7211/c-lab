/* Enter basic salary of an employee and calculate Gross salary according to given conditions: 
-  Basic Salary >= 10000: HRA = 20% of basic, DA = 80% of basic 
- Basic Salary >= 20000: HRA = 25% of basic, DA = 90% of basic 
- Basic Salary >= 30000: HRA = 30% of basic, DA = 95% of basic */

#include<stdio.h>
int main(){
    float basic,hra,da,gross;

    printf("Enter basic salary:");
    scanf("%f",&basic);

    if(basic>=30000){
        hra=basic * 0.3;
        da=basic * 0.95;
    }else if(basic>=20000){
        hra=basic * 0.25;
        da=basic * 0.90;
    }else if(basic>=10000){
        hra=basic * 0.20;
        da=basic * 0.80;
    }else{
        hra=0;
        da=0;
    }

    gross=basic+hra+da;
    printf("%f",gross);
    
    return 0;
}