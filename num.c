#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d" ,&n);
    while(n>0){
        n=n%10;
        printf("%d\n" , n);
        n=n/10;
        printf("%d\n" , n);
    }
    return 0;
}