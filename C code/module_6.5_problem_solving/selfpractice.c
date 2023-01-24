
#include<stdio.h>

int main(){

//int a;
//
//scanf("%d",&a);
//
//while(a-->0){
//
//    int n;
//
//    scanf("%d",&n);
//
//    int a[n];
//
//    for(int i=1; i<=n; i++){
//        scanf("%d \n",&a[i]);
//    }

//}

//multiplication:


//int x,y;
//
//scanf("%d %d",&x,&y);
//
//for(int i=1; i<=y; i++){
//
//int multi = i*x;
//
//printf("%d \n",multi);
//}


int x,y;

scanf("%d %d",&x,&y);

for(int i=1; i<y; i++){

    if(y%i!=0){

        if(i*x>y){

         continue;
        }
  printf("%d \n",i*x);

    }


}










return 0;
}
