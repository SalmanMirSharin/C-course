//
//#include<stdio.h>
//
//int main(){
//
//    int n=10;
//
//    int arr[n]={1,2,4,5,6,7,7,8,9,3};
//
//
//    for(int i=0; i<n; i++){
//
//        printf("%d",arr[i]);
//    }
//
//return 0;
//}


//
//#include<stdio.h>
//
//int main(){
//
// int sort[] = {4,3,6,9,5,7};
//
// int sz = sizeof(sort)/sizeof(sort[0]);
//
//
//
// for(int i=0; i<sz; i++){
//
//    for(int j=i+1; j<sz; j++){
//
//            if(sort[i]>sort[j]){
//
//            int temp = sort[i];
//                sort[i] = sort[j];
//                sort[j] = temp;
//        }
//    }
//
// }
// printf("\n");
//
//    for(int i=0; i<sz; i++){
//
//        printf("%d ",sort[i]);
//    }
//
//return 0;
//}



//Bouble sort:

//#include<stdio.h>
//#include<stdlib.h>
//
//void swap(int *a, int *b){
//    int temp = *a;
//        *a = *b;
//        *b = temp;
//
//}
//
//void sort(int n, int a[]){
//
//    for(int steps=0; steps<n; steps++){
//
//        for(int i=0; i+1<n; i++){
//
//            if(a[i]>a[i+1]){
//
//                swap(&a[i],&a[i+1]);
//    printf("%d,  %d \n",a[i], a[i+1]);
//            }
//        }
//    }
//
//
//
//}
//
//int main(){
//
//    int n;
//
//    scanf("%d",&n);
//
//    int ar[n];
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&ar[i]);
//
//    }
//
//    sort(n,ar);
//    for(int i=0; i<n; i++){
//
//        printf("%d ",ar[i]);
//    }
//
//
//return 0;
//}




//
//#include<stdio.h>
//
////int min(int *a, int *b){
////
////        if(*a>*b){
////       return *b = *a;
////    }
////}
//
//int min(int a,int b){
//
//    if(a>b){
//        return a;
//    }
//    else{
//        return b;
//    }
//
//}
//
//
//int main(){
//
//    int ar[5] = {1,3,5,8,4};
//
//    int ans =ar[0];
//
//
//    int a[5]={0};
//
//    for(int i=0; i<5; i++){
//
//    //printf("%d",ar[i]);
//       a= min(ar[i],ans);
//
//}
//
//return 0;
//}


//Sum Value function:
//#include<stdio.h>
//
//void printSum(int n){
//
//    int sum =0;
//
//    for(int i=1; i<=n; i++){
//
//        sum +=i;
//    }
//
//    printf("%dth number of sum is: %d", n,sum);
//
//}
//
//int main(){
//
//    int n;
//
//    scanf("%d",&n);
//
//    printSum(n +5);
//
//
//return 0;
//}



//Gcd function:
//#include<stdio.h>
//
//void printGcd(int x, int y){
//
//    while(y>0){
//        int temp = x%y;
//              x = y;
//            y = temp;
//
//    }
//
//        int gcd = x;
//        printf("Gcd is : %d \n",gcd);
//}
//
//int main(){
//
//    int n,m;
//
//    scanf("%d %d",&n,&m);
//
//
//    printGcd(n,m);
//
//return 0;
//}



//Gcd return function:
//#include<stdio.h>
//
//int calGcd(int n, int m){
//
//    while(m>0){
//    int temp = n%m;
//        n = m;
//        m = temp;
//}
//    int gcd = n;
//    return gcd;
//}
//
//int main(){
//
//    int n, m;
//
//    scanf("%d %d",&n, &m);
//
//   int g = calGcd(n,m);
//
//    n/=g;
//    m/=g;
//    printf("%d \n",g);
//
//    printf("Simplifide form: %d/%d",n,m);
//
//return 0;
//}


// Min function with array:
//#include<stdio.h>
//
//int getMin(int a, int b){
//
//  if(a>b)   return a;
//  else      return b;
//
//}
//
//int main(){
//
//    int n;
//
//    scanf("%d",&n);
//
//    int a[n];
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&a[i]);
//    }
//
//    int ans = a;
//
//    for(int i=0; i<n; i++){
//
//        ans = getMin(a[i],ans);
//    }
//
//    printf("%d",ans);
//
//
//return 0;
//}


//global variable:
//#include<stdio.h>
//
//
//int add(int a, int b){
//     static int count=0;
//
//    count++;
//   printf("%d\n",count);
//
//   return a+b;
//
//}
//
//
//
//int main(){
//
//    add(1,3);
//    add(2,5);
//
//    add(5,6);
//    add(2,9);
//
//
//return 0;
//}

//
//Function use of with Array:
//#include<stdio.h>
//
//int min(int a, int b){
//
//    if(a<b) return a;
//    else    return b;
//
//}
//
//int getArrayMin(int n, int a[]){
//
//   int minn = a[0];
//
//    for(int i=0; i<n; i++){
//
//        minn = min(a[i],minn);
//    }
//
//    return minn;
//
//}
//
//int main(){
//
//    int a[] = {5,88,4,9,6};
//
//    int sz = 5;
//
//
//    printf("%d",getArrayMin(sz,a));
//
//return 0;
//}


// Function for Array value double:
//#include<stdio.h>
//
//void makeDouble(int n, int a[]){
//
//    for(int i=0; i<n; i++){
//
//        a[i] *=2;
//    }
//
//}
//
//
//int main(){
//
//    int a[]= {2,3,4,5,6};
//
//    makeDouble(5,a);
//
//
//
//    for(int i=0; i<5; i++){
//
//        printf("%d \n",a[i]);
//    }
//
//
//
//return 0;
//}


//Array reverse:
//#include<stdio.h>
//
//void reverse(char str[]){
//
//    int n =strlen(str);
//
//    for(int i=0, j=n-1; i<j; i++, j--){
//
//            int temp = str[i];
//            str[i] = str[j];
//            str[j] = temp;
//    }
//
//}
//
//int main(){
//
//    char str[] ="hello";
//
//    reverse(str);
//    printf("%s",str);
//
//return 0;
//}




//#include<stdio.h>
//
//
//int main(){
//
//    int ar[]= {1,3,4,5,6,7,6,7,8,9,2,434,5,7,7,8,9,0};
//    int sz = sizeof(ar)/sizeof(ar[0]);
//
//    int *mal = (int*)malloc(sz*sizeof(int));
//
//    mal = calloc(mal,sz*2*sizeof(int));
//
//    free(mal);
//    int count=0;
//    for(int i=0; i<sz*2; i++){
//
//        printf("%d \n",ar[i]);
//    count++;
//    }
//    printf("%d",count);
//
//return 0;
//}
//



//#include<stdio.h>
//
//int min(int a, int b){
//
//    if(a<b) return a;
//    else    return b;
//
//}
//
//int swap(int *a, int *b){
//
//        int temp = *a;
//        *a = *b;
//        *b = temp;
//}
//int boubleSort(int n, int a[]){
//
//        int ans;
//    for(int i=0; i<n; i++){
//
//        for(int j=i+1; j<n-1; j++){
//
//          ans =  min(a[i],a[j]);
//
//        }
//    }
//    swap(ans, a);
//
//
//}
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    int a[n];
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&a[i]);
//    }
//
//    boubleSort(n,a);
//
//    for(int i=0; i<n; i++){
//
//        printf("%d",a[i]);
//    }
//
//
//
//return 0;
//}



//#include<stdio.h>
//
//void passByValue(int *a){
//        *a*=2;
//}
//
//int main(){
//	int* a = 10;
//
//passByValue(&a);
//printf("%d",a);
////We will get here 20, that means we can get modifi value. And it  can by this variable address.
//
//return 0;
//}



//solve-2:

//#include<stdio.h>
//int f(int n, int a[]) {
//     int cnt = 0;
//     for (int i=0; i<n; i++) {
//         if (a[i] == a[0]) cnt++;
//    }
//
//    return cnt;
//}
//
//
//int main(){
//
//    int a[]={1,2,1,2,1};
//
//    int n =5;
//
//
//    printf("%d",f(n,a));
//
//return 0;
//}



//#include<stdio.h>
//
//void makeStrCopy(char in[], char out[]){
//
//    out = in;
//
//    printf("%s",out);
//}
//
//int main(){
//
//    char in[]="Hello";
//    char out[10];
//
//    makeStrCopy(in,out);
//
//return 0;
//}


//Solve: 4:
//#include<stdio.h>
//
//int main(){
//
//    //int  n =100;
//
//    int* f = (int*)malloc(100*sizeof(int));
//
//    int sz = sizeof(f);
//
//    printf("%d",sz);
//
//return 0;
//}


//#include<stdio.h>
//
//int main(){
//
//    int a[] = {1,2,3,4,5,6,7,8,9};
//
//    printf("%d",&*(a+4));
//
//return 0;
//}




//Array reverse buoble sort:
//#include<stdio.h>
//
//void sort(int n, int a[]) {
//
//    for (int steps=0; steps<n; steps++) {
//
//        for (int i=n-1; i>0; i--){
//
//            if(a[i-1]<a[i]){
//            int temp = a[i-1];
//            a[i-1] = a[i];
//            a[i] =temp;
//
//            }
//       }
//   }
//}
//
//int main(){
//
//     int n;
//     scanf("%d",&n);
//
//    int a[n];
//
//    for(int i=0; i<n; i++){
//        scanf("%d",&a[i]);
//    }
//
//    sort(n,a);
//
//    for(int i=0; i<n; i++){
//
//        printf("%d",a[i]);
//    }
//
//
//return 0;
//}





//Array already reverse or not check function:
//#include<stdio.h>
//#include<stdbool.h>
//int is_reverse_sorted(int n, int a[]){
//
//    if(n<=1){
//        return true;
//    }
//
//    for(int i=0; i<n; i++){
//        if(a[i]<a[i+1]){
//            break;
//        }
//        else{
//           return true;
//        }
//    }
//
//
//}
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//     int a[n];
//
//     for(int i=0; i<n; i++){
//
//        scanf("%d",&a[i]);
//     }
//
//    int sorted = is_reverse_sorted(n,a);
//
//    printf("%d",sorted);
//
//return 0;
//}


//Solve-10:
//#include<stdio.h>
////#include<string.h>
////#include<ctype.h>
//
//int main(){
//
//
////    int bass = (int)(a);
////    int adch = (int)strchr(a,'a');
////    int addr = (int)strstr(a,"a");
////    printf("%d \n",a);
//       char text[] = "This is a";
//    printf("%d \n",strchr(text,'a'));
//    printf("%d \n",strstr(text,"a"));
//
//
//return 0;
//}


//solve-9:
//#include<stdio.h>
//#include<string.h>
//char* Strch(char str[], char giveCh[]){
//
//  for(int i=0; i<strlen(str); i++){
//    for(int j=0; j<strlen(giveCh); j++){
//        if(str[i+j]!=giveCh[j]){
//            break;
//        }
//    if(j==strlen(giveCh)){
//        return i;
//        break;
//    }
//  }
//
//}
//
//int main(){
//
//    char str[]="This a pen";
//    char giveCh[]="a";
//
//    Strch(str,giveCh);
////
////      for(int i=0; i<strlen(str); i++){
////    for(int j=0; j<strlen(giveCh); j++){
////        if(str[i+j]!=giveCh[j]){
////            break;
////        }
////    if(j==strlen(giveCh)){
////        return i;
////        break;
////    }
////  }
////
////}
//
// // printf("%d",Strch(str,giveCh));
//
//
//return 0;
//}

//
//#include<stdio.h>
//
//int main(){
//
//    int a[]={1,2,3,4,5,6,7,8,9};
//
//    printf("%d \n",&a[0]);
//     printf("%d",a);
//
//return 0;
//}





#include<stdio.h>
#include<stdbool.h>

int is_reverse_sorted(int n, int a[]){

    if(n<=1){
        return true;
    }

    for(int i=0; i<n; i++){
        if(a[i]<a[i+1]){
            break;
        }
        else{
           return selectionSort(n,a);
           break;
        }
    }


void selectionSort(int n, int ar[]){

    for(int step =0; step<n; step++){

        int mini = ar[step];
        int posi = step;

        for(int i=step; i<n; i++){
            if(ar[i]<mini){
                mini = ar[i];
                posi = i;
            }
        }
        int temp = ar[step];
        ar[step] = mini;
        ar[posi] =temp;
    }

}

int main(){

    int n;

    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n; i++){

        scanf("%d",&ar[i]);
    }

   is_reverse_sorted(n,ar);

      for(int i=0; i<n; i++){

        printf("%d",ar[i]);
    }



return 0;
}





