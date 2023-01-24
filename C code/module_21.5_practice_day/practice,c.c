
//#include<stdio.h>
//
//int main(){
//
//    int n =10;
//
//    int *pal = (int*)malloc(n*sizeof(int));
//
//   pal= realloc(pal,n*2*sizeof(int));
//
//        int idx =0;
//    for(int i=0; i<n*2; i++){
//
//      // printf("%d ",pal[i]);
//
//       idx++;
//    }
//    printf("\n");
//
//printf("%d",idx);


// malloc/calloc/realloc/free():

// int n =10;
//
// int *a = (int*)calloc(n,sizeof(int));
//
// a =  realloc(a,n*2*sizeof(int));
//     int idx =0;
//    for(int i=0; i<n*2; i++){
//
//    printf("%d \n",a[i]);
//    idx++;
//    }
//   printf("%d",idx);
//
//    free(a);
//
//return 0;
//}


//Solve-01:
//#include<stdio.h>
//
//int main(){
//int n =10;
//int *a =(int*)malloc(n*sizeof(int));
//int prod=1;
//for (int i=0; i<n; i++) {
//    prod = prod * *(a+i);
//}
//printf("%d ", prod);
//
//return 0;
//}




//Solve-2:
//#include<stdio.h>
//
//int main(){
//
//    //int *a = (int*) malloc(n*sizeof(int));
//    double n=5;
//    double *b = (double*)malloc(n*sizeof(double));
//
//    int idx=0;
//    for(int i=0; i<n; i++){
//
//        idx++;
//
//    }
//    printf("%d",idx);
//
//return 0;
//}




#include<stdio.h>

int main(){

   int n = 6;

    int ar[n] ={1,2,3,4,5,6};

    for(int i=0; i<n; i++){

        printf("%d \n",ar[i]);
    }



return 0;
}
