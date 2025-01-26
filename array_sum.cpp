#include<stdio.h>
 
int main(){

    int a[100];
    int limit,i,sum=0;

    printf("enter a limit and find the sum of all elements :");
    scanf("%d",&limit);

    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    printf("the total sum of entered value are :%d",sum);

    return 0;
}