/*Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using 
switch.*/

#include<stdio.h>
int main(){
    int choice;
    float n1,n2,result;
    printf("Enter n1,n2:");
    scanf("%f %f",&n1,&n2);
    printf("choose operation:\n");
    printf("1.addition\n2.subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            result=n1+n2;
            break;
        case 2:
            result=n1-n2;
            break;
        case 3:
            result=n1*n2;
            break;
        case 4:
            result=n1/n2;
            break;
        default :printf("Invalid choice");
    }
    printf("%f",result);
    return 0;
}