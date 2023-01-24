
#include<stdio.h>

//  void makedouble(int* a){
//
//    *a *=2;
//
//  }

void swap(int* x , int* y){

    int temp = *y;
    *y = *x;
    *x = temp;


}

int main(){
//
//    int x = 10;
//    makedouble(&x);
//    printf("%d", x);


    int x = 10, y =  20;
    swap(&x,&y);


    printf("x is : %d, y is : %d",x, y);


return 0;
}
