
#include<stdio.h>

int main(){

    int* ptr;


    char str[] = "Hello apple";
    char* first = str;
    char* ch = strchr(str,'a');

    if(!ch){
        printf("It's a null value.");
    }
    else{
        printf("have it.");
    }


return 0;
}
