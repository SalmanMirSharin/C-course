
//Number 01 solution:
//#include<stdio.h>
//
//    void square(int sqr){
//
//        sqr *=sqr;
//        printf("%d",sqr);
//    }
//
//int main(){
//
//    int n;
//
//    scanf("%d",&n);
//
//    square(n);
//
//return 0;
//}



//#include<stdio.h>
//
// char ch(int x, double y){
//
//        return x;
//        return y;
//
//
// }
//
//int main(){
//
//    int n;
//    double m;
//
//    scanf("%d %lf",&n, &m);
//
//   printf("%lf %d",ch(m,n));
//
//
//
//
//
//return 0;
//}

//Number 02- Solution:

//#include<stdio.h>
//
// char ch(int a, double b){
//
//    char c ='A';
//
//    return c;
// }
//
//int main(){
//
//    int a;
//    double b;
//
//    scanf("%d %lf",&a,&b);
//
//   int return_value = ch(a,b);
//
//   printf("%c",return_value);
//
//return 0;
//}




//Number 04-solution:

//#include<stdio.h>
//
//void makeSum(int a, int b, int *sum){
//
//     sum = a+b;
//
//    printf("%d",sum);
//
//}
//
//int main(){
//
//    int a, b;
//    int *sum;
//
//    scanf("%d %d",&a,&b);
//
//    makeSum(a,b,sum);
//
//
//return 0;
//}


//Number 05-Solution:
//#include<stdio.h>
//
//    int main(){
//
//        int a = 10;
//
//    int b = 20;
//
//    int *p = &a;
//
//    printf("%d %d %d\n", a, b, *p);
//
//    *p = 30;
//
//    printf("%d %d %d\n", a, b, *p);
//
//    *p = 20;
//
//    a = 50;
//
//    b = 10;
//
//    printf("%d %d %d\n", a, b, *p);
//
//    p = &b;
//
//    printf("%d %d %d\n", a, b, *p);
//
//    a = 20;
//
//    b = 100;
//
//    printf("%d %d %d\n", a, b, *p);
//
//
//
//return 0;
//}



//Number 07-Solution:

//#include<stdio.h>
//
//int returnAddres(int *a, int *b){
//
//    return *a=10, *b =20;
//
//}
//
//int main(){
//
//    int a =5, b =10;
//
//    returnAddres(&a,&b);
//
//    printf("%d %d",a,b);
//
//
//return 0;
//}


//Number 08 -Solution;

//#include<stdio.h>
//
//char stringCat(char a[], char b[], char out[]){
//
//        a = strcat(a,b);
//    return strcat(out,a);
//
//}
//
//int main(){
//
//    char a[100];
//    char b[100];
//    char c[205];
//
//
//   scanf("%s %s",a,b);
//
//    stringCat(a,b,c);
//
//    printf("%s",c);
//
//return 0;
//}



//Number 09-Solution:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//
//    scanf("%d",&n);
//    int ar[n];
//
//    int *par = &ar;
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",(par+i));
//    }
//
//    for(int i=0, j=n-1; i<j; i++, j--){
//
//            int item = *(par+i);
//
//            *(par+i) = *(par+j);
//            *(par+j) = item;
//    }
//
//    for(int i=0; i<n; i++){
//        printf("%d ",*(par+i));
//    }
//
//return 0;
//}



//Number 03:-Not solving:

//#include<stdio.h>
//
//int gcdFun(int a[], int b[], int gcd){
//
//      for( int  i = 1; i <= a && i <= b; ++i)
//    {
//        if (a % i ==0 && b % i == 0)
//
//            gcd  = i;
//
//    }
//     return gcd;
//
//
//
//}
//
//int main(){
//
//    int gc;
//    int a[10];
//
//    int ans[0];
//
//    for(int i=0; i<10; i++){
//
//        scanf("%d",&a[i]);
//    }
//
//
//    int g = gcdFun(ans,a,gc );
//
//    printf("%d",g);
//
//
////    int a, b, gcd;
////
////    scanf ( "%d %d", &a, &b);
////
////
////   int g = gcdFun(a,b,gcd);
////
////    printf ("GCD is %d." ,g);
//
//
//
//return 0;
//}

//Number 06- Solution;
//#include<stdio.h>
//
//void makeNArray(int n,int square[]){
//
//    for(int i=1; i<=n; i++){
//
//        square = i*i;
//
//      printf("%d \n",square);
//
//    }
//}
//
//int main(){
//
//    int n;
//
//    scanf("%d",&n);
//    int square[n];
//
//    makeNArray(n,square);
//
//return 0;
//}



























