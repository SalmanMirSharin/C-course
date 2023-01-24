

#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

int mark[n];

for(int i=0; i<n; i++){
    printf("Enter mark: ");
   scanf("%d",&mark[i]);
}

for(int i=0; i<n; i++){
    mark[i] += 5;
}

printf("\n");

for(int i=0; i<n; i++){
    printf("mark %d is %d \n",i+1, mark[i]);
}


return 0;
}
