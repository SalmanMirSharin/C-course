
#include<stdio.h>
#include<stdbool.h>

 int main(){

 /*
int A = 5, B =6, C=10;

int result = ((A<B && B%4==0) || (C%5==0) );


if(result){
    printf("True");
}else{
printf("False");
}
*/


/*
int number;

scanf("%d",&number);

if(number%2==0){
    printf("It's Even");
}else{
    printf("It's Odd");
}

*/



//Arathmetic Oparator:
/*int a,b;
char op;
scanf("%d %c %d", &a, &op, &b);

switch(op){

 case '+': printf("Addition is: %d", a+b);
 break;

 case '-': printf("subtraction is: %d", a-b);
 break;

 case '*': printf("Multiplication is: %d", a*b);
 break;

 case '/': if(b==0){
            printf("0 is not divide");
        }else{
            printf("Division is: %d", a/b);
        }
 break;

 case '%': if(b==0){
            printf("just 0 can't use for modulus");
          }else{
            printf("Modulus is : %d", a%b);
          }
 break;

 default: printf("It's not valid");
 break;

}
*/

//Input Marks and get output;
/*
int marks;

scanf("%d",&marks);

if(marks>=80 && marks<=100){

    printf("A+");

}else if(marks>=70 && marks<80){

    printf("A");

}else if(marks>=60 && marks<70){

    printf("B");

}else if(marks>=50 && marks<60){

    printf("C");

}else if(marks>=40 && marks<50){

    printf("D");

}else if(marks>=0 && marks<40){
    printf("F");
}
else{
    printf("Not valid number");
}
*/


bool n;

scanf("%d",&n);

if(n== n>0){
    printf("%d",n);
}
else if(n== 0){
    printf("%d",n);
}



return 0;
}
