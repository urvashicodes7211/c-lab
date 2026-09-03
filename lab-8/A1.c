#include<stdio.h>
int main(){
    int i=1; 

    while(i<=10){
        printf("%d\n",i);
        i++;
    }

    int n;
    printf("Enter n:\n");
    scanf("%d",&n);

    i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}