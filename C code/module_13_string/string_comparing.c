
#include<stdio.h>

int main(){

char a[100],b[100];

scanf("%s %s",a,b);


int val = strcmp(a,b);

printf("%d",val);


// int idx =0;
//
// while(a[idx] == b[idx] && a[idx] !='\0' && b[idx] != '\0'){
//    idx++;
// }
//
// if(a[idx] == '\0' && b[idx] == '\0'){
//
//    printf("Equal");
// }
// else if(a[idx] == '\0' && b[idx] !='\0'){
//    printf("A is smaller");
// }
// else if(a[idx] !='\0' && b[idx]== '\0'){
//    printf("B is smaller");
// }
// else if(a[idx]<b[idx]){
//    printf("A is smaller");
// }
// else{
//    printf("B is smaller");
// }



return 0;
}
