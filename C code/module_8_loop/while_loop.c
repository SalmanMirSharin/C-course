//
//#include<stdio.h>
//
//int main(){

//int i=1;
//while(i<=5){
//    printf("%d \n",i);
//
//    i++;
//}

//while loop use case code write delow:

//int money =0;
//int target =100;
//
//while(money<target){
//    printf("Need more, Enter amount: ");
//    int given;
//
//    scanf("%d",&given);
//
//    money +=given;
//
//    printf("Current money %d \n",money);
//}


 //For Add some number:
// int number;
//
// scanf("%d",&number);
// int sum = 0;
// while(number>0){
//    int modulus = number%10;
//
//    number /=10;
//
//    sum +=modulus;
//
// }
//  printf("%d",sum);



//reverse any number:
// int number;
//
// scanf("%d",&number);
// int reversed = 0;
// while(number>0){
//    int digit = number%10;
//
//    number /=10;
//
//    reversed = reversed *10 + digit;
//
// }
//  printf("%d",reversed);


//We want to get GCD;

//int a,b;
//
//scanf("%d %d",&a,&b);
//
//int gcd;
//for(int g=1; g<=a && g<=b; g++){
//        if(a%g==0 && b%g==0){
//            gcd=g;
//        }
//
//}
// printf("Comman factor is %d \n",gcd);


//GCD solve by uclider Algotithm:

//int a,b;
//
//scanf("%d %d",&a,&b);
//
//while(a!=0){
//
//    int rem =b%a;
//   b=a;
//   a=rem;
//   printf("%d %d \n",a,b);
//}
//printf("Gcd: %d",b);

//return 0;
//}

//Break statement:


#include<stdio.h>

int main(){

for(int i=1; i<=10; i++){


    break;

         printf("%d \n",i);


}

return 0;
}



