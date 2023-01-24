

#include<stdio.h>
#include<strings.h>

int main(){


    char word[] = {'h','e','l','l','o'};

    int sz = sizeof(word)/sizeof(word[0]);

    for(int i=0; i<sz; i++){

        putchar(word[i]);
    }







//double arr[] = {1,2,3,4,5,6,7,8};
//
//int sz = sizeof(arr)/sizeof(arr[0]);
//
//printf("%d \n",sz);
//
//
//for(int i=0; i<sz; i++){
//
//    printf("%lf \n",arr[i]);
//}





//for(int i=0; i<10; i++){
//
//    arr[i] = i+1;
//}
//
//for(int i=0; i<10; i++){
//
//    printf("%lf \n",arr[i]);
//}

return 0;
}


