#include<stdio.h>
int main(){
      
    int i,searchkey,limit,values[100], flag = 0;
    printf("Enter array limit :");
    scanf("%d",&limit);

    printf("Enter array values");
    for(i=0;i<=limit;i++){
        scanf("%d",&values[i]);
    }


    printf("Enter a number to check the number is available in that array : ");
    scanf("%d",&searchkey);

    for(i=0;i<limit;i++){
        if(searchkey == values[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("searchkey found at position :%d",i+1);
    }else{
        printf("Not found searchkey");
    }

}