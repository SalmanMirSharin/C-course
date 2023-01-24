
#include<stdio.h>

int main(){

int n;
scanf("%d",&n);

int values[n];


int sz = sizeof(values)/sizeof(values[0]);

printf("%d",sz);






//for(int i=0; i<n; i++){
//
//   values[i] = i+1;
// //printf("%d\n",values[i]);
//}
//
//    values[4] *=5;
//
//    values[5] = values[1] + values[2];
//
//    for(int i=0; i<n; i++){
//
//        printf("Values[%d] = %d \n",i, values[i]);
//    }





return 0;
}
