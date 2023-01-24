
#include<stdio.h>
#include<ctype.h>


int main(){

//unsigned int x = 0;x--;printf("%u", x);
//
//float cel =ceil(-7.5);
//
//printf("%f",cel);

    char ch;
    scanf("%c",&ch);

    if(!(ch<'a' || ch>'z')){

       printf("Lower case");
    }
    else{
        printf("Upper case");
    }


return 0;
}
