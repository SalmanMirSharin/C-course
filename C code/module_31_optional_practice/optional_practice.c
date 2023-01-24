
//Missing number and Duplicate Number:

#include<stdio.h>


int main(){

    int n;
    scanf("%d",&n);
    int ar[102];
    int count[100]={0};


    for(int i=0; i<n; i++){

        scanf("%d",&ar[i]);
    }

    for(int i=1; i<=n; i++){
       int val = ar[i];

       printf(" A-< \n%d",ar[1]);
       count[val]++;
    }

    for(int i=1; i<=n; i++){
        printf("27 -> %d \n",ar[i]);

           if(count[i]==0){
             printf("Missing Number: %d \n",i);
           }
            printf("\n");
         if(count[i]>1){
            printf("Duplicate Number: %d \n",i);
         }
    }

return 0;
}
