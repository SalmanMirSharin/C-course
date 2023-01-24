
 //Bear and Big brother
//#include<stdio.h>
//
//int main(){
//
//int a, b;
//
// scanf("%d %d",&a, &b);
//int year =0;
//while(a<=b){
//
//    a*=3;
//    b*=2;
//
//    year++;
//  //printf("%d %d \n", a,b);
//
//}
//printf("%d",year);
//
//return 0;
//}


#include<stdio.h>

int main(){

int x=0;
int n;

scanf("%d",&n);

for(int i=1; i<=n; i++){

    char a,b,c;
    scanf(" %c%c%c",&a,&b,&c);

    if(b=='+'){
        x++;
    }
    else if(b=='-'){

        x--;
    }

}
 printf("%d",x);

return 0;
}
