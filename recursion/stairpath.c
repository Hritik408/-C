#include <stdio.h>
int stair(int n){
    if(n<=2) return n;
     int totalways=stair(n-1)+stair(n-2);
     return totalways;}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int x=stair(n);
    printf("%d",x);
    return 0;}


