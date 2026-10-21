#include<stdio.h>
int main(){
    int n;
    int rem;
    printf("enter a number : ");
    scanf("%d" ,&n);
    while(n>0){
        rem=n%10;
        printf("%d\n" , rem);
        n=n/10;
        printf("%d\n" , n);
    }
    return 0;
}
