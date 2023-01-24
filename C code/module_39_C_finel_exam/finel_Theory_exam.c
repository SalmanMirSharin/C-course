//
//#include<stdio.h>
//
//void odd_even(){
//
//    int n;
//    scanf("%d",&n);
//    if(n%2!=0){
//       printf("Odd");
//    }
//    else{
//        printf("Even");
//    }
//}
//
// int main(){
//
//     odd_even();
//
//}



//Solve-2:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    for(int i=0; i<=n; i++){
//
//        if(i%2==0 || i%7==0){
//            printf("%d ",i);
//        }
//    }
//
//return 0;
//}



//Solve-3:
//#include<stdio.h>
//
//struct Fun
//{
//    int sum;
//};
//
//int main(){
//
//    struct Fun sumition;
//
//    sumition.sum = 10;
//
//    int *p = &sumition.sum;
//
//    *p = 200;
//
//    printf("%d",sumition.sum);
//
//return 0;
//}



//Solve-4:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//    int ar[n];
//
//    int count[1001]={0};
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&ar[i]);
//
//        count[ar[i]]++;
//    }
//
//    printf("\n");
//
//    for(int i=0; i<=1000; i++){
//
//        if(count[i]!=0){
//            printf("index: %d count: %d\n",i,count[i]);
//        }
//    }
//
//return 0;
//}
//



//Solve-6:
//#include<stdio.h>
//
//int main(){
//
//    char str[1001];
//
//    scanf("%s",str);
//
//    int count[1001]={0};
//
//    for(int i=0; i<strlen(str); i++){
//
//            char val = str[i];
//
//            if(val-'0'>=0 && val-'0'<=9){
//                count[val]=1;
//            }
//    }
//
//        int sum =0;
//    for(int i=0; i<1001; i++){
//         if(count[i]!=0){
//
//            sum+=count[i];
//        }
//    }
//
//    if(sum == 10){
//        printf("Yes");
//    }
//    else{
//        printf("NO");
//    }
//
//return 0;
//}



//Solve-6:
//#include<stdio.h>
//
//int main(){
//
//    int n,l,r;
//    //printf("Enter N,l,r: ");
//    scanf("%d %d %d",&n,&l,&r);
//
//    int ar[100000];
//    printf("Enter array Index: ");
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&ar[i]);
//    }
//
//    for(int i=l; i<=r; i++){
//
//        ar[i]=0;
//    }
//
//    for(int i=0; i<n; i++){
//        printf("%d ",ar[i]);
//    }
//
//
//return 0;
//}




//Solve-7:
//#include<stdio.h>
//
//int main(){
//
//    int n,mul;
//    scanf("%d",&n);
//
//
//    int ar[n],count[10001]={0};
//
//    for(int i=0; i<n; i++){
//        scanf("%d",&ar[i]);
//    }
//
//    for(int i=0; i<n-1; i++){
//
//        for(int j=i+1; j<n; j++){
//
//                int val = ar[j]*ar[i];
//
//                count[val]++;
//
//        }
//    }
//
//
//    scanf("%d",&mul);
//
//    for(int i=0; i<10001; i++){
//
//        if(count[i]!=0){
//
//            if(mul == i){
//                printf("Yes");
//               return 0;
//            }
//        }
//    }
//    printf("No");
//
//return 0;
//}
//



//Solve-8:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    for(int i=n; i>0; i--){
//
//        for(int j=i; j<n; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//        for(int i=0; i<n; i++){
//
//        for(int j=n; i<j; j--){
//            printf("*");
//        }
//        printf("\n");
//    }
//
//
//return 0;
//}




//#include<stdio.h>
//
//struct student{
//
//    int roll;
//    int class;
//    int marks;
//
//};
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//
//    struct student detail[n];
//
//    for(int i=0; i<n; i++){
//        scanf("%d %d %d",&detail[i].roll,&detail[i].class,&detail[i].marks);
//    }
//
//        int all_marks=0;
//    for(int i=0; i<n; i++){
//
//        all_marks+= detail[i].marks;
//    }
//
//    printf("Total marks: %d",all_marks);
//
//
//return 0;
//}



#include<stdio.h>

int main(){

    for(int i=1; i<=100; i++){
        if(i%2!=0){
            printf("index: %d I Love Programming!\n",i);
        }
        else{
            printf("index: %d Goodbye\n",i);
        }
    }

return 0;
}































