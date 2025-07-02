#include<stdio.h>
int main(){

    int i,j,k,n,o=4,y=4;
    
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            //printf("(%d,%d)",i,j);
            if(i==j){
                printf("%d ",i);
            }else{
                printf("  ");
            }
        }
        for(k=1;k<=5*2-i*2-1;k++){
            printf("  ");
        }
        for(n=1;n<=i;n++){
            // printf("(%d,%d)",i,n);
            if(i==5){
                break;
            }else{
                if(n==1){
                printf("%d",i);
            }else{
                printf("  ");
            }
            }
        }
        
        printf("\n");
    }
    
    for(i=1;i<=4;i++){
        for(j=i;j<=4;j++){
            if(j==4){
                printf("%d",o); 
                o--;
            }else{
                printf("  ");
            }
        }
        for(k=1;k<=i*2;k++){
            printf("  ");
        }
        for(n=i;n<=4;n++){
            if(n==i){
                printf("%d",y); 
                y--;
            }else{
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}