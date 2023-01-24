
 //Use for loop:
//#include<stdio.h>
//
//int main(){
//
//    int sum = 0;
//    for(int i=1; i<=100; i++){
//        sum +=i;
//
//    }
//    printf("%d \n",sum);
//return 0;
//}

//Use while loop:

//#include<stdio.h>
//
//int main(){
//
//    int i=1;
//    int sum =0;
//    while(i<=100){
//
//          sum +=i;
//        i++;
//
//    }
//    printf("%d",sum);
//
//
//return 0;
//}


//patran with for loop:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    for(int i=1; i<=n; i++){
//
//        for(int j=1; j<=i; j++){
//            printf("%d ",j);
//        }
//        printf("\n");
//    }
//
//return 0;
//}


//Use while loop:

//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    int i=1;
//
//
//    while(i<=n){
//
//
//    int j=1;
//    while(j<=i){
//        printf("%d",j);
//        j++;
//    }
//        i++;
//        printf("\n");
//    }
//
//
//
//return 0;
//}


//#include<stdio.h>

//from 1 to 100;

//int main(){
//
// int i=1;
//
//for(int i=1; i<=100; i++){
//
//
//        if(i%2==0){
//        continue;
//
//    }
//
//     printf("%d \n",i);
//
//
//}

//disible by 3;

//for(int i=1; i<=100; i++){
//
//    if(i%3==0){
//        continue;
//    }
//
//    printf("%d \n",i);
//}



//for(int i=1; i<=60; i++){
//
//    if(60%i==0){
//        continue;
//    }
//
//    printf("%d \n",i);
//}
//
//
//return 0;
//}



#include<stdio.h>
#include<stdbool.h>

int main(){

int n;


do{
printf("Enter 0/1: ");
 scanf("%d",&n);


    if(n==0 || n==1){
        printf("You Entered %d \n \n",n);
        break;

    }
    else{
        printf("Wrong input, try again \n \n");
    }
}while(true);

return 0;
}

