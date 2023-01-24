
#include<stdio.h>

int main(){

    const int n = 20;

   const int* const pn = &n;

//    int n2 = 30;
//    pn = &n2;
//
    //*pn = 10;

    printf("%d",*pn);


return 0;
}
