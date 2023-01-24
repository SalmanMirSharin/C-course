
#include<stdio.h>


int printGcd(int x, int y){

    while(y>0){

    int temp = x%y;

        x = y;
        y = temp;
    }

    int Gcd = x;
    return Gcd;

 }



int main(){

int n,m;

scanf("%d %d",&n, &m);


 int g = printGcd(n,m);

 printf("GCD is : %d \n \n",g);

 n /=g;
 m/=g;

 printf("Gcd Simplifide: %d/%d \n \n",n,m);


return 0;
}
