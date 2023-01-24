
//First proble- not solve:

#include<stdio.h>
#include<string.h>
//177,977, 780,810 sum number for test case:
int main(){


char a[5000],b[5000],jogfal[50001];


scanf("%s %s",&a,&b);

strrev(a);
strrev(b);

int i=0,j=0,k=0,hate=0;

while(i<strlen(a) && j<strlen(b)){
    int sum = (a[i]-'0') + (b[j]-'0')+hate;
    jogfal[k] = (sum%10+'0');
    hate = sum/10;
    i++;
    j++;
    k++;
}

while(i<strlen(a)){

    int sum = (a[i]-'0')+hate;
    jogfal[k] = (sum%10+'0');
    hate = sum/10;
    i++;
    k++;
}

while(j<strlen(b)){
    int sum = (b[j]-'0')+hate;
    jogfal[k] = (sum%10+'0');
    hate = sum/10;
    j++;
    k++;
}
if(hate>0){
    jogfal[k] = hate+'0';
}

strrev(jogfal);

printf("%s",jogfal);


return 0;
}



//Second problem solve:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    int ar[n];
//    int count[100]={0};
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&ar[i]);
//    }
//
//
//
//    for(int i=0; i<n; i++){
//
//        int val = ar[i];
//
//        if(i%2==0){
//            printf("%d ",val);
//        }
//
//    }
//
//return 0;
//}



//Third Problem Solve:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//
//    scanf("%d",&n);
//
//    int ar[100];
//
//    for(int i=1; i<=n; i++){
//
//        scanf("%d",&ar[i]);
//    }
//
//    for(int i=1; i<=n; i++){
//
//        int val = ar[i];
//
//        if(i%2==0){
//            printf("%d \n",val);
//        }
//    }
//
//return 0;
//}



//Fourth Problem Solve:
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    int ar[100];
//    int original[100];
//    int rev[100];
//    int deff[100];
//
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&ar[i]);
//    }
//
//    for(int i=0; i<n; i++){
//          original[i] = ar[i];
//
//    }
//
//    int i=0, j=n-1;
//
//    while(i<j){
//
//        int temp =ar[i];
//        ar[i] = ar[j];
//        ar[j] = temp;
//        i++;
//        j--;
//    }
//
//    for(int i=0; i<n; i++){
//
//        rev[i] = ar[i];
//    }
//
//    for(int i=0; i<n; i++){
//
//        deff[i] = abs(original[i] - rev[i]);
//
//    }
//
//    for(int i=0; i<n; i++){
//
//        printf("total: %d \n",deff[i]);
//    }
//
//return 0;
//}


//Fifth Problem Solve:
//#include<stdio.h>
//
//int main(){
//
//    char ar[100];
//
//    scanf("%s",&ar);
//
//    for(int i=0; i<strlen(ar); i++){
//
//    if(ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u'){
//
//         printf("%d ",i);
//
//        }
//    }
//
//return 0;
//}


//Fixth Problem Solve:
//#include<stdio.h>
//
//int main(){
//
//    char name[100];
//
//    scanf("%s",name);
//
//    printf("Phitron Member %s",name);
//
//return 0;
//}




