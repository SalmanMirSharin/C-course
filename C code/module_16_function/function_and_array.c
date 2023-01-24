
#include<stdio.h>

int getMin(int a, int b){

        if(a<b)     return a;
        else        return b;

}

int getArrayMin(int sz, int a[]){

    int min = a[0];

    for(int i=0; i<sz; i++){

        min = getMin(a[i], min);

    }

    return min;

}


void reverse( char str[]){

        int n = strlen(str);
    for(int i=0, j=n-1; i<j; i++, j--){

        int temp = str[i];

        str[i] = str[j];
        str[j] = temp;

    }

}




int main(){



    char str[] ="hello";

    reverse(str);

    printf("%s",str);



//
//int a[]={4,5,3,10,5};
//
//    makedouble(5,a);
//
//    for(int i=0; i<5; i++){
//
//        printf("%d ",a[i]);
//    }





//int sz = sizeof(a)/sizeof(a[0]);
//
//   int minimum= getArrayMin(sz,a);
//
//   printf("%d",minimum);




return 0;
}
