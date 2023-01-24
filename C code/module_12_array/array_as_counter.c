
#include<stdio.h>

int main(){

int number_of_users;

scanf("%d",&number_of_users);

int rating[number_of_users];

for(int i=0; i<number_of_users; i++){

    scanf("%d",&rating[i]);
}

int count[6] ={0};
for(int i=0; i<number_of_users; i++){

    int x = rating[i];

    count[x]++;

}

for(int i=1; i<=5; i++){

    printf("%d => %d \n",i,count[i]);
}


//
//for(int i=0; i<number_of_users; i++){
//
//    printf("%d ",rating[i]);
//}
//
//for(int val=1; val<=5; val++){
//
//     int count=0;
//    for(int i=0; i<number_of_users; i++){
//
//
//        if(rating[i] == val){
//
//            count++;
//        }
//    }
//    printf("%d \n",count);
//}

return 0;
}
