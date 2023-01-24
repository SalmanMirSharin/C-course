
#include<stdio.h>

int fun(int val){

     // printf("val-> %d\n",val);
    if(val==5)
    return;

    int sum = fun(val+1);

    printf("sum-> %d\n",sum);

   int total = sum+val;
   printf("Total -> %d\n",total);

  return total;

}

int main(){

   int sum = fun(1);

   printf("%d \n",sum);

return 0;
}


//#include<stdio.h>
//
//void fun(int val){
//
//        if(val==5){
//            return;
//        }
//
//        printf("%d ",val);
//        fun(val+1);
//}
//
//int main(){
//
//    fun(1);
//
//return 0;
//}









