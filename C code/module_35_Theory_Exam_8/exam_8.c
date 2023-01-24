
//Solve-1
//#include<stdio.h>
//
//float make_sum(float a, float b){
//
//        float sum = a+b;
//
//        return sum;
//}
//
//int main(){
//
//        float a,b;
//
//    scanf("%f %f",&a,&b);
//
//    float sum =make_sum(a,b);
//    printf("%.2f",sum);
//
//return 0;
//}



//Solve-2:
//#include<stdio.h>
//
//int make_average(int ar[], int n){
//
//        int sum=0;
//
//        for(int i=0; i<n; i++){
//            sum += ar[i];
//        }
//
//        sum = sum/n;
//}
//int main(){
//
//    int n;
//    scanf("%d",&n);
//    int ar[n];
//
//    for(int i=0; i<n; i++){
//        scanf("%d",&ar[i]);
//    }
//
//    int avarage = make_average(ar,n);
//
//    printf("%d",avarage);
//
//return 0;
//}



//Solve-3:
//#include<stdio.h>
//
//void count_zero(char *str,int n){
//
//     int count=0;
//
//    for(int i=0;i<n; i++){
//
//      if(str[i]=='0'){
//        count++;
//      }
//    }
//
//    printf("%d",count);
//}
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//    char str[n];
//
//    scanf("%s",&str);
//    count_zero(str,n);
//return 0;
//}



//Solve-4:
//#include<stdio.h>
//
//void foo(){
//
//    printf("foo\\n \n");
//      bar();
//}
//void bar(){
//
//    printf("bar\\n \n");
//}
//
//int main(){
//
//    foo();
//
//return 0;
//}



//Solve-5:
//#include<stdio.h>
//#include<stdbool.h>
//
//void array_sort(int *ar, int n){
//
//    for(int i=0; i<n-1; i++){
//
//        for(int j=i+1; j<n; j++){
//
//            if(ar[j]<ar[i]){
//                int temp = ar[i];
//                ar[i] = ar[j];
//                ar[j] = temp;
//
//            }
//        }
//    }
//
//}
//
//
//void array_copy(int *a, int *b,int n){
//
//        for(int i=0; i<n; i++){
//
//            b[i] = a[i];
//        }
//}
//
//bool array_check(int *a, int n){
//
//        int b[n];
//
//        array_copy(a,b,n);
//        array_sort(b,n);
//
//        for(int i=0; i<n; i++){
//
//            if(a[i]!=b[i]){
//
//                return false;
//            }
//        }
//
//    return true;
//}
//
//int main(){
//
//    int a[5]={1,2,3,4,5};
//
//
//   bool ans = array_check(a,5);
//
//   if(ans){
//
//    printf("It's 1 to n \n");
//
//   }
//   else{
//    printf("It's Not 1 to n \n");
//   }
//
//return 0;
//}
//




//Solve-6:
//#include<stdio.h>
//
//int main(){
//
//    int a=10;
//
//    int *P =&a;
//    int **Q = &P;
//    int ***R =&Q;
//
//    ***R = 200;
//
//    printf("%d",a);
//
//
//return 0;
//}



//Solve-7:
//#include<stdio.h>
//
//int count_swaps(int *a, int n){
//
//        int count=0;
//
//    for(int pos=0; pos<n-1; pos++){
//        for(int check=pos+1; check<n; check++){
//
//            if(a[check]<a[pos]){
//                int temp = a[pos];
//                a[pos] = a[check];
//                a[check] = temp;
//                    count++;
//            }
//        }
//    }
//}
//
//
//int main(){
//
//    int a[6] = {2,5,10,3,14};
//
//    int swap = count_swaps(a,6);
//
//    printf("%d",swap);
//
//return 0;
//}




//Solve-8:
//i) Has return + Has parameter:

//#include<stdio.h>
//#include<stdbool.h>
//
//bool odd_even(int n){
//
//
//    if(n%2!=0){
//        return false;
//    }
//  return true;
//}
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    bool number_test = odd_even(n);
//
//    if(number_test){
//        printf("Even");
//    }
//    else{
//        printf("Odd");
//    }
//
//return 0;
//}



//ii) No return + Has parameter:
//
//#include<stdio.h>
//
//void odd_even(int n){
//
//    if(n%2!=0){
//       printf("Odd");
//    }
//    else{
//        printf("Even");
//    }
//}
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    odd_even(n);
//
//return 0;
//}



//iii) Has return + No parameter:

//#include<stdio.h>
//#include<stdbool.h>
//
//bool odd_even(){
//
//     int n;
//    scanf("%d",&n);
//
//    if(n%2!=0){
//      return false;
//    }
//    return true;
//}
//
//int main(){
//
//   int number_test = odd_even();
//
//   if(number_test){
//        printf("Even");
//   }
//   else{
//    printf("Odd");
//   }
//
//return 0;
//}



//iv) No return + No parameter:
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
//int main(){
//
//    odd_even();
//
//return 0;
//}





//#include<stdio.h>
//#include<string.h>
//
//int main(){
//
//    char str[]="abcdba";
//    char b[100];
//
//    strcpy(b,str);
//
//    strrev(b);
//
//        int count=0, c=0;
//   for(int i=0; i<strlen(str); i++){
//
//      if(str[i]==b[i]){
//
//           c++;
//        }
//        else{
//             count++;
//        }
//
//   }
//      printf("%d \n",count);
//      printf("%d",c);
//
//return 0;
//}
//



//Solve-9:
//#include<stdio.h>
//#include<string.h>
//
//int check_palindrome(char str[]){
//
//    int i=0,j=strlen(str)-1;
//    int count=0;
//    while(i<j){
//      if(str[i]!=str[j]){
//
//        count++;
//      }
//      i++;
//      j--;
//
//    }
//    return count;
//
//}
//
//int main(){
//
//    char str[]="abcdba";
//
//    int minimum_change = check_palindrome(str);
//
//    printf("%d",minimum_change);
//
//return 0;
//}






//Solve-10:
//#include<stdio.h>
//
//void change_array(int a[],int b[],int n){
//
//    for(int i=0,j=n-1; i<j; i++,j--){
//
//        int temp = a[i];
//        a[i] = a[j];
//        a[j] = temp;
//    }
//
//    for(int i=0; i<n; i++){
//
//        b[i] = a[i];
//    }
//}
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    int b[n];
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&a[i]);
//    }
//
//    change_array(a,b,n);
//
//
//    for(int i=0; i<n; i++){
//
//        printf("%d ",b[i]);
//    }
//
//return 0;
//}






















