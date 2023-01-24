
#include<stdio.h>

//wrong code:
//int X,Y,Z;
int main(){

//int t;
//
//scanf("%d",&t);
//
//for(int i=1; i<=t; i++){
//    int a,b,c,n,d,e;
//
//    scanf("%d %d %d",&a,&b,&c,&n);
//
//    if(a>b || a>c){
//
//        d=a-b;
//        n -=d;
//        d+b;
//
//        e=a-c;
//        n-=e;
//        e+c;
//
//            if(n%3==0){
//        printf("Yes");
//    }
//    else{
//        printf("Not");
//    }
//
//
//    }
//    else if(b>a || b>c){
//        d=b-a;
//        n -=d;
//        d+a;
//
//        e=b-c;
//        n-=e;
//        e+c;
//            if(n%3==0){
//        printf("Yes");
//    }
//    else{
//        printf("Not");
//    }
//
//    }
//    else if(c>a || c>b){
//        d=c-a;
//        n -=d;
//        d+a;
//
//        e=c-b;
//        n-=e;
//        e+b;
//            if(n%3==0){
//        printf("Yes");
//    }
//    else{
//        printf("Not");
//    }
//    }
//
//}



int n;

scanf("%d",&n);

int sum= 0;
for(int i=1; i<=n; i++){

    char ch;
    scanf("%c",&ch);
    sum+=i;

}
 printf("%d",sum);

return 0;
}
