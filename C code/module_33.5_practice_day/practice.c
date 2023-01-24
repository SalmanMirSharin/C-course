
//Get max function:
//#include<stdio.h>
//
//int get_max(int a, int b){
////
////    int temp;
////
////    if(a>b){
////        temp =a;
////    }
////    else{
////        temp =b;
////    }
////    return temp;
//
//
////    if(a>b) return a;
////    else    return b;
//
//    int max = (a>b)? a: b;
//
//    return max;
//
//}
//
//int main(){
//
//    int a,b;
//    scanf("%d %d",&a,&b);
//
//    int max = get_max(a,b);
//
//    printf("%d",max);
//
//return 0;
//}



//get_min function:
//#include<stdio.h>
//
//int get_min(int x, int y){
//
//    int temp;
//
//    if(x<y){
//        temp = x;
//    }
//    else{
//        temp = y;
//    }
//
//    return temp;
//}
//
//int main(){
//
//    int a,b;
//    scanf("%d %d",&a,&b);
//
//    int min = get_min(a,b);
//
//    printf("%d",min);
//
//
//return 0;
//}



//String length function:
//#include<stdio.h>
//
//int get_length(char str[]){
//
//    int index=0;
//    while(str[index] !='\0'){
//        index++;
//    }
//
//    return index;
//
//}
//
//int main(){
//
//    char str[100];
//    scanf("%s",&str);
//    int len = get_length(str);
//    printf("%d",len);
//
//return 0;
//}
//



//String copy function:
//#include<stdio.h>
//
//void string_copy(char a[], char b[]){
//
////      for(int i=0;i<strlen(b); i++){
////
////            a[i] = b[i];
////      }
////
////     for(int i=0; i<strlen(b); i++){
////
////            printf("%c",a[i]);
////     }
//
//
//    //different way:
////
////    a =b;
////
////    printf("%s",a);
//
//
//}
//
//int main(){
//
//    char a[100];
//    char b[100];
//
//    scanf("%s",&b);
//
//    string_copy(a,b);
//
//return 0;
//}



#include<stdio.h>

void string_concat(char a[], char b[]){

    char str[100];
    int i=0,j=0;

    while(a[i] !='\0'){

        str[j] = a[i];
        i++;
        j++;
    }

    i=0;
    while(b[i] !='\0'){
        str[j] = b[i];

        i++;
        j++;
    }

    str[j]='\0';

    printf("%s",str);

}
int main(){

    char a[]="abc";
    char b[]="def";

    string_concat(a,b);


return 0;
}




















