

//#include<stdio.h>
//
//int main(){
//
//    int values[] ={1,2,3,4,5};
//    double reals[10];
//
//    int sz = sizeof(values)/sizeof(values[0]);
//    printf("%d \n",sz);
//    for(int i=0; i<sz; i++){
//
//        printf("%d",values[i]);
//    }
//
//return 0;
//}




// Understinding problem:

#include<stdio.h>

//How can we return this function Because here has a void type:

void makeSquares(int n, int ans[]){

    for(int i=0; i<n; i++){

        ans[i] = (i+1) * (i+1);
    }
    //return ans;
}

int main(){

    int n=5;
    int ans[n];

     makeSquares(n,ans);

    for(int i=0; i<n; i++){

        printf("%d ",ans[i]);
    }


return 0;
}








#include<stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){

        scanf("%d",&arr[i]);
    }


  int i=0, j = strlen(n)-1;

  while(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

  }
    for(int i =0; i<n; i++){

        printf("%d",arr[i]);
    }

return 0;
}







