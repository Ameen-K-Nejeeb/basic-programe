#include<stdio.h>
int main(){

    int i,j,k,n;
    
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            if(j==0||i==j){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        for(k=0;k<7-i*2;k++){
            printf("  ");
        }
        for(n=0;n<=i;n++){
            if(i==n||n==0){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        
        printf("\n");
     }//printf("\n");
    for(i=1;i<5;i++){
        for(j=i;j<=4;j++){
            if(j==4||i==j){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        for(k=0;k<i*2-1;k++){
            printf("  ");
        }
        for(n=i;n<=4;n++){
             //printf("(%d,%d)",i,n);
             if(n==4||i==n){
                 printf("* ");
             }else{
                 printf("  ");
            }
        }
        printf("\n");
    }
    

    return 0;
}