//Input an integer number and check the last digit of number is even or odd.

#include<stdio.h>
int main(){
    int n,last;

    printf("Enter n:");
    scanf("%d",&n);

    last=n%10;

    if(last%2==0){
        printf("even");
    }else{
        printf("odd");
    }
    
    return 0;
}