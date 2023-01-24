
//
//#include<stdio.h>
//
//int main(){
//
//    int a=10;
//
//    printf("Address->%p value->%d \n",&a,a);
//
//   int *p = &a;
//
//   printf("Address->%p Value->%d",p,*p);
//
//return 0;
//}



//#include<stdio.h>
//
//int main(){
//
//    int a=100;
//
//    int *p=&a;
//
//    int **q=&p;
//
////
////    printf("value->%d Address->%p \n",a,&a);
////    printf("value->%p Address->%p \n",p,&p);
////    printf("value->%p Address->%p \n",q,&q);
//
////    printf("%p \n",&a);
////    printf("%d",**q);
//
//    *p =-5000;
//
//    **q=-2000;
//
//    printf("%d",a);
//
//
//return 0;
//}


//
//#include<stdio.h>
//
//int main(){
//
//    int a[5]={3,5,6,2,6};
//    int *ptr =a;
//for(int i=0; i<5; i++){
//
//    printf("%d ",*ptr);
//
//  ptr++;
//
//}
//
//return 0;
//}


//
//#include<stdio.h>
//
//int main(){
//
//     int a =10;
//
//   const int * const p =&a;
//
//
//
//    printf("%d",*p);
//
//
//return 0;
//}




//
//#include<stdio.h>
//
//void change(int ar[], int x){
//
//        ar[1] = -100;
//
//        x = -50;
//}
//
//int main(){
//
//    int a[]={1,2,3};
//
//    int k = 10;
//
//    change(a,k);
//
//    printf("%d %d %d \n",*a,*(a+1),*(a+2));
//
//    printf("%d",k);
//
//return 0;
//}




//
//#include<stdio.h>
//
//void send( char *str){
//
//    int sz = strlen(str);
//
//    printf("%d",sz);
//
//
//}
//
//int main(){
//
//   char str[5] = "abcd";
//
//
//   send(str);
//
//
//return 0;
//}



#include<stdio.h>

int main(){

    int ar[100] ={1,2,3,4,5};

return 0;
}


    int count=0;
    for(int i=0; i<100; i++){

       if(ar[i] !=0){
        count++;
       }
    }

    printf("%d",count);



