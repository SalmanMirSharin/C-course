

//#include<stdio.h>
//
//int main(){

//    int price;
//    int temp;
//    int age;
//
//    scanf("%d",&price);
//
//    printf("%d %lld\n",price,&price);

//
//return 0;
//}




//#include<stdio.h>
//
//
//int main(){
//
//
//    int value =100;
//    int value2 = 500;
//        int* pval =&value;
//
//    value = 200;
//
//    *pval = 300;
//
//    pval =&value2;
//
//
//    printf("%d \n",*pval);
//    printf("%lld \n",pval);
//    printf("%lld \n",&value);
//    printf("%lld \n",&value2);
//
//return 0;
//}




#include<stdio.h>

struct student{

    int ar[50];


};


int main(){

    struct student s1[1]={200};;

    for(int i=0; i<1; i++){

          printf("%d",s1[i].ar);
    }


return 0;
}



























