//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice. 
#include<stdio.h>
int main(){
    int choice,n1,n2;

    printf("Enter n1 and n2: ");
    scanf("%d %d",&n1,&n2);

    printf("Enter choice\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n");
    scanf("%d",&choice);
    
    if(choice == 1){
        printf("Addition : %d",n1+n2);
    }else if(choice == 2){
        printf("Subtraction : %d",n1-n2);
    }else if(choice == 3){
        printf("Multiplication : %d",n1*n2);
    }else if(choice == 4){
        printf("Division : %d",n1/n2);
    }else{
        printf("Invalid choice");
    }
    return 0;
}