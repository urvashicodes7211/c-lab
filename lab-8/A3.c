// Print numbers between two given numbers which is divisible by 2. 
#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter n1,n2:");
    scanf("%d %d",&n1,&n2);
    while(n1<=n2){
        if(n1%2==0){
            printf("%d\n",n1);
        }
        n1++;
    }
    return 0;
}