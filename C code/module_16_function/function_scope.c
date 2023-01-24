

#include<stdio.h>


 int add(int a , int b){
    static int count =0;
    count++;
     printf("%d th Called\n",count);
   return a+b;
 }

int main(){

    add(1,4);
    add(3,5);

    add(1,2);
    add(6,3);





return 0;
}
