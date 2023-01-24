//
//
//#include<stdio.h>
//
//int main(){
//
//int a[10];
//a[0]+=10;
//a[0]= a[0]*2;
//
//printf("%d",a[0]);
//
//return 0;
//}



//#include<stdio.h>
//
//int main(){
//
// const int n =100;
//int values[n];
//for(int i=0; i<=n; i++){
//    values[i] =i;
//}
//for(int i=0; i<=100; i++){
//
//    printf("%d \n",values[i]);
//}
//
//return 0;
//}



//#include<stdio.h>
//
//int main(){
//
// const int n =100;
//int values[n];
//for(int i=0; i<=n; i++){
//    values[i] =i;
//}
//for(int i=0; i<=100; i++){
//
//    printf("%d \n",values[i]);
//}
//
//
//int a ={0,2,1,4,3};
//
//printf("%d",a[a[1]+1]);
//
//return 0;


#include<stdio.h>


int main(){

int fib[5];
	fib[0] = fib[1] = 1;
for (int i=2; i<5; i++) {
fib[i] = fib[i-1]+fib[i-2];
}
printf("%d", fib[4]);

return 0;
}

