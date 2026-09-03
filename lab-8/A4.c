// Print sum of 1 to n numbers. 
#include<stdio.h>
int main(){
    int n,sum=0,i;

    printf("Enter n:");
    scanf("%d",&n);

    i=1;

    while(i<=n){
        sum=sum+i;
        i++;
    }

    printf("%d",sum);
    
    return 0;
}