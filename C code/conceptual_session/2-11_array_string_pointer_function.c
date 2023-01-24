
// String:

//#include<stdio.h>
//
//int main(){
//
//    char ar[10];
//
//    fgets(ar,10,stdin);
//
//    int sz = strlen(ar);
//    ar[sz-1] = '\0';
//    printf("%s Hello",ar);
//
//
//return 0;
//}


//Function:

//#include<stdio.h>
//
//void add_number(){
//
//      int a,b;
//
//    scanf("%d %d",&a,&b);
//    int sum = a+b;
//
//    printf("%d",sum);
//}
//
//int main(){
//
//  add_number();
//
//
//return 0;
//}



//#include<stdio.h>
//
//void solution(){
//
//  int a,b;
//
//  scanf("%d %d",&a,&b);
//
//  int sum = a+b;
//
//  printf("%d \n",sum);
//
//}
//
//int main(){
//
//    int t;
//
//    scanf("%d",&t);
//
////    for(int i=0; i<n; i++){
////
////        solution();
////    }
//    //Another way:
//    while(t--){
//        solution();
//    }

//return 0;
//}




//Pointer:


#include<stdio.h>

void fun(int *p){

    *p = 1000;


}

int main(){

    int a = 10;

    int *p = &a;

    fun(p);
    printf("%d",a);

return 0;
}







