
//A - Curtain:

#include<stdio.h>

int main(){

int a, b;

scanf("%d %d",&a, &b);

b +=b;


if(a>b){

int curtain = a-b;

   printf("%d",curtain);
}
else{
    printf("0");
}



return 0;
}
