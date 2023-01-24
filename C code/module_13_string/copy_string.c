

#include<stdio.h>
#include<strings.h>

int main(){

char str[] = "Hello world";
char str2[10];



strncpy(str2,str,9);

str2[9] = '\0';



printf(str2);


return 0;
}
