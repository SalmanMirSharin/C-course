
#include<stdio.h>

int main(){

    int val1,val2;

    int *pa = &val1;
    int *pb = &val2;

    printf("pa: %lld, pb: %lld \n", pa, pb);
    printf("Difarence: %d \n", pa - pb);

//
//    double num = 20;
//
//    double * pnum = &num;
//
//    printf("%lld \n",pnum);
//
//    pnum--;
//
//    printf("%lld \n",pnum);


return 0;
}
