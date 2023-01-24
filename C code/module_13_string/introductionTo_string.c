
#include<stdio.h>

int main(){

char st[] = "This is our world";

int sz = sizeof(st)/sizeof(st[0]);

printf("%d\n",sz);

for(int i=0; i<sz; i++){

    printf("%c\n",st[i]);
}

printf("%c\n", st[3]);

st[6] = 0;
printf("%s\n",st);



return 0;
}
