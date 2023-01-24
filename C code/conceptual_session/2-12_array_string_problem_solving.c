

//frequence count:

//#include<stdio.h>
//
//int main(){
//
//    int n, num;
//
//    scanf("%d",&n);
//    int ar[2001]={0};
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&num);
//
//        ar[num]++;
//
//        //printf("%d",ar[i]);
//    }
//
//    for(int i=0; i<=2000; i++){
//
//        if(ar[i]==0){
//
//            printf("Smalest number is: %d",i);
//
//            return 0;
//        }
//    }
//
//return 0;
//}




 #include<stdio.h>

 int main(){

    int n, num;

    scanf("%d",&n);

    int freq[1000]={0};
    for(int i=1; i<=n; i++){

        scanf("%d",&num);

      freq[num]++;
    }

    for(int i=1; i<=n; i++){

        if(freq[num]==0){
                printf("Yes");

        }
        else {
            printf("No");
        }
        //printf("%d", freq[i]);
    }


 return 0;
 }
