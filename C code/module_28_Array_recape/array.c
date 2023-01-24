//
// First Video code:

//#include<stdio.h>
//
//int main(){
//
//    int n =10;
//    int count = 0;
//    int note;
//    for(int i=1; i<=10; i++){
//
//
//         scanf("%d",&note);
//
//         if(note==100){
//            count++;
//         }
//    }
//    printf("%d %d",note,count);
//
//
//
//
//return 0;
//}


//Second Video code:
//#include<stdio.h>
//
//int main(){
//
//   long long int ar[5];
//
//    printf("%d \n",&ar[0]);
//    printf("%d \n",&ar[1]);
//    printf("%d \n",&ar[2]);
//    printf("%d \n",&ar[3]);
//    printf("%d \n",&ar[4]);
//
//
//return 0;
//}


//Third Video Code:
//#include<stdio.h>
//
//int main(){
//
//    int ar[5];
//
//        for(int i=0; i<5; i++){
//
//            scanf("%d",&ar[i]);
//        }
//        for(int i=0; i<5; i++){
//
//            printf("%d ",ar[i]);
//        }
//
//
//    return 0;
//}


//Fourth Video Code:
//#include<stdio.h>
//
//int main(){
//
//    int ar[5];
//
//    for(int i=0; i<5; i++){
//
//        printf("%d ",ar[i]);
//    }
//
//
//return 0;
//}




//Fifth Video code:
//Sum Calculate:
//#include<stdio.h>
//
//int main(){
//
//    int ar[6]={2,1,0,-5,10,5};
//    int sum =0;
//    for(int i=0; i<6; i++){
//
//      sum += ar[i];
//
//   // printf("i ->%d sum ->%d \n",i,sum);
//    }
//    printf("%d",sum);
//return 0;
//}


//Min & Maximum:
//#include<stdio.h>
//
//int main(){
//
//    int ar[6]={2,1,0,-5,10,5};
//
//    int min =ar[0], max=ar[0];
//
//    for(int i=1; i<6; i++){
//
//        int val = ar[i];
//
//        if(val>max){
//            max =val;
//        }
//
//        if(val<min){
//            min =val;
//        }
//    }
//    printf("min-> %d, max-> %d",min,max);
//
//return 0;
//}

//Array reverse:
//#include<stdio.h>
//
//int main(){
//
//    int ar[6]={2,1,0,-5,10,5};
//
//    for(int i=5; i>=0; i--){
//
//        printf("%d ",ar[i]);
//    }
//
//return 0;
//}


//Sixth Video Code:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    int ar[n];
//    ar[1000];
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&ar[i]);
//    }
//
//    for(int i=0; i<n; i++){
//        printf("%d ",ar[i]);
//    }
//
//return 0;
//}


//Seventh Video Code:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    int ar[n];
//    //memset(ar,0,sizeof(ar));
//    for(int i=0; i<n; i++){
//        ar[i] = -1;
//    }
//    for(int i=0; i<n; i++){
//
//        printf("%d ",ar[i]);
//    }
//
//return 0;
//}




#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++){

        scanf("%d",&ar[i]);
    }

    int count[12]={0};
    for(int i=0; i<n; i++){

        int val = ar[i];
        count[val]++;
    }
    for(int i=0; i<=10; i++){

        if(count[i]>0){
             printf("Value-> %d, Count-> %d \n",i,count[i]);
        }

    }

return 0;
}

