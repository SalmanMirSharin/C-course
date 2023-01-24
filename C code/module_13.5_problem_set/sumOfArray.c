
//Array Sum:

//#include<stdio.h>
//
//int main(){
//
//    int n;
//
//    printf("Enter Number: ");
//
//    scanf("%d",&n);
//
//    int number[n];
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&number[i]);
//    }
//
//    int sum = 0;
//    for(int i=0; i<n; i++){
//
//        sum +=number[i];
//
//    }
//     printf("%d ",sum);
//
//return 0;
//}



#include<stdio.h>

    int main(){

        int n;

        printf("Enter Number: ");

        scanf("%d",&n);

        int num[n];
        int i;
        for( i=0; i<n; i++){

            scanf("%d",&num[i]);
        }


        for(int i=0; i<n; i++){

          if(num[0]<num[i]){
            num[0] = num[i];
          }
        }
        printf("%d \n",num[0]);

        int count[6]={0};
        for(int i=0; i<n; i++){
            int x = num[i];
            count[x]++;
        }


        for(int i=1; i==num[0]; i++){

            printf("Count: %d \n",count[i]);


        }




    return 0;
    }




