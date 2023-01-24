//First video:
//#include<stdio.h>
//
//char get_len(char ar[]){
//
//    int index=0;
//
//    while(ar[index] !='\0'){
//
//        index++;
//    }
//
//    return index;
//
//}
//
//int main(){
//
//    char str1[]="abcdefgd", str2[]="abcde";
//
//    int len1= get_len(str1);
//    int len2= get_len(str2);
//
//    printf("%d %d",len1, len2);
//
//
//return 0;
//}



//Second Video:
//#include<stdio.h>
//
//int make_sum(int a, int b){
//
//    int sum = a+b;
//
//    sum=sum*2;
//    sum = sum-234;
//    sum=sum+1000;
//
//    return sum;
//
//}
//
//int main(){
//
//    int s = make_sum(10,15);
//    int s2 = make_sum(20,25);
//
//    printf("%d %d",s, s2);
//
//
//return 0;
//}



//Third Video:
//#include<stdio.h>
//
//char get_len(char ar[]){
//
//    int index=0;
//
//    while(ar[index] != '\0'){
//
//        index++;
//    }
//    return index;
//}
//
//
//int main(){
//
//    char str1[]="abcdefgh", str2[]="abcde";
//
//    int l1= get_len(str1);
//
//    int l2 = get_len(str2);
//    l2 = l2*3;
//
//    printf("%d %d",l1,l2);
//
//
//return 0;
//}


//
//Fourth Video:
//#include<stdio.h>
//
//char get_len(char ar[]){
//
//    int index=0;
//
//    while(ar[index] != '\0'){
//
//        index++;
//    }
//    return index;
//}
//
//void check_char(char a[], char ch){
//
//        int len = get_len(a);
//
//    for(int i=0; i<len; i++){
//
//        if(a[i]==ch){
//            printf("Yes");
//            return;
//        }
//
//    }
//    printf("No");
//
//}
//
//int main(){
//
//    char str[]="abcdxetox";
//
//    char ch = 'o';
//
//    check_char(str,ch);
//
//
//return 0;
//}



//Fifth Video:
//#include<stdio.h>
//
//int make_sum(){
//  int a,b;
//
//  scanf("%d %d",&a,&b);
//
//  int sum = a+b;
//
//  return sum;
//
//
//}
//
//int main(){
//
//    int sum = make_sum();
//
//    printf("%d",sum);
//
//
//return 0;
//}


//Sixth Video:
//#include<stdio.h>
//
//void test_case(){
//
//    int n;
//    scanf("%d",&n);
//
//    int ar[n];
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&ar[i]);
//    }
//
//    for(int i=0; i<n; i++){
//
//        printf("%d ",ar[i]);
//    }
//
//}
//
//int main(){
//
//    int test;
//    scanf("%d",&test);
//
//   while(test--){
//
//        test_case();
//
//    }
//
//return 0;
//}




#include<stdio.h>


void print(int a);
int main(){

  int x=100;
    print(x);



return 0;
}

void print(int a){

    printf("%d",a);
}














