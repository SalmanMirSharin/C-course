
#include<stdio.h>

 int main(){

 /*
    char ch;

    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){

        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    */


    int num;
    scanf("%d",&num);

    if(num>=80){
        if(num>90){
            printf("You get almost 100 ");
        }
        else{
            printf("You get almost 90");
        }
    }
   else if(num>=50){
        printf("Not bad \n");
    }
    else{
        if(num>=40){
            printf("Not Good");
        }
        else{
            printf("You get too poor number");
        }

    }

return 0;
}
