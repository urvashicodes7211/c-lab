// Get 10 numbers from user print count of odd, even numbers 
#include<stdio.h>
int main(){
    int n,i=1,ec=0,oc=0;
    while(i<=10){
        printf("Enter n : ");
        scanf("%d",&n);
        if(n%2==0){
            ec++;
        }else{
            oc++;
        }
        i++;
    }
    printf("%d %d",ec,oc);
    return 0;
}