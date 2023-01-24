

#include<stdio.h>

int main(){

//    int price;
//    int temp;
//    int age;
//
//    scanf("%d",&price);
//
//     printf("%lld\n",&price);
    //printf("%lld \n",&price);
    //printf("%lld \n",&temp);





    int value =100;
     int * pval = &value;


    printf("%d \n",value);
    printf("%p %d \n", pval, *pval);

    value = 200;

    printf("%d \n", value);

    printf("%p %d \n",pval, *pval);


    *pval = 300;

    printf("%d \n", value);
    printf("%p %d \n",pval, *pval);


   int value2 = 100;

   pval = &value2;

   printf("%d \n", value);

   printf("%p %d \n", pval, *pval);



   int v = 100;

   printf("%d", *&v);












return 0;
}
