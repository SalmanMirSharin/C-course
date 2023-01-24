

//Decimal to Binary and Binary to Decimal:
#include<stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    char str[100];
    int idx =0;

    while(n>0){

        int digit = n%2;

        n/=2;
        str[idx] = digit + '0';
        idx++;
        //printf("%d",digit);
    }

    str[idx]='\0';

    int i=0, j = strlen(str)-1;

    while(i<j){

        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Binary - %s \n",str);

        int sum =0;
        int p = strlen(str)-1;
    for(int i=0; i<strlen(str); i++){

        int c = str[i];
        int digit = c -'0';
        sum+= digit*pow(2,p);
        p--;
    }

    printf("Decimal - %d \n",sum);



return 0;
}
