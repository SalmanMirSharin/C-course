
#include<stdio.h>


int main(){

    int n, things;

    scanf("%d",&n);

    int arr[8] = {0};

    for(int i=0; i<n; i++){

        scanf("%d",&things);
    arr[things]++;


    }


    for(int i=1; i<=7; i++){

        printf("%d th index value: %d \n",i,arr[i]);
    }



return 0;
}



