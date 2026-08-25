//Read 3 numbers, multiply largest number from first two numbers to third one using conditional.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a , b , c : ");
    scanf("%d %d %d",&a,&b,&c);
    int lar = (a>b) ? a:b ;
    int ans = lar * c;
    printf("%d",ans);
    return 0;
}