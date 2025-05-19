#include<stdio.h>
int main(){
    int n,sum,i;

    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum += i;
    }
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);


}