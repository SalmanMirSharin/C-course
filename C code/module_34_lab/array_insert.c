
#include<stdio.h>

void array_insert(int ar[],int n, int pos, int val){

        for(int i=n-2; i>=pos; i--){

            ar[i+1] = ar[i];
        }

        //ar[pos] = val;


}

int main(){

    int ar[6]={10,20,30,40,50};
    int pos,val;
    scanf("%d %d",&pos,&val);

    array_insert(ar,6,pos,val);

    for(int i=0; i<5; i++){
        printf("%d ",ar[i]);
    }

return 0;
}




//#include<stdio.h>
//
//void insert(int ar[],int n, int pos){
//
//        for(int i=pos+1; i<n; i++){
//
//            ar[i-1] = ar[i];
//
//        }
//
//          for(int i=0; i<n-1; i++){
//            printf("%d ",ar[i]);
//
//        }
//
//}
//
//int main(){
//
//    int ar[5]={10,20,30,40,50};
//    int pos;
//    scanf("%d",&pos);
//
//        insert(ar,5,pos);
//
//return 0;
//}
//

