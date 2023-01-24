
//Problem - A: didn't Solve:
//#include<stdio.h>
//
//int main()
//{
//
//    int n;
//    scanf("%d",&n);
//    int count[101]= {0};
//    int p=0;
//    scanf("%d",&p);
//
//    int x=0;
//    for(int i=0; i<p; i++)
//    {
//        scanf("%d",&x);
//
//        count[x]++;
//    }
//
//
//
//    int q=0;
//    scanf("%d",&q);
//    int y=0;
//
//    for(int i=0; i<q; i++)
//    {
//        scanf("%d",&y);
//
//        count[y]++;
//    }
//
//    for(int i=1; i<=n; i++)
//
//    {
//        //printf(" i %d count ->  %d \n",i,count[i]);
//        if(count[i]==0){
//            printf("Oh, my keyboard!");
//             return 0;
//        }
//
//    }
//     printf("I become the guy.");
//
//}


//    for(int i=0; i<p || i<q; i++)
//    {
//
//        if(x==n || y==n )
//        {
//            printf("I become the guy.");
//            return 0;
//        }
//
//    }
//    printf("Oh, my keyboard!");
//
//    return 0;
//}






//Module 30 problem solution:
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//
//    char a[200];
//
//    fgets(a, 200, stdin);
//
//    a[strlen(a) - 1] = '\0';
//    int ans = 0;
//
//    for (int i = 0; i < strlen(a); i++)
//    {
//        printf("char[%d] = %c \n", i, a[i]);
//        char value = a[i];
//        if (((value == ' ') && (a[i + 1] != ' ') && (a[i + 1]) != '.') || a[i + 1] == '\0')
//        {
//            ans++;
//        }
//    }
//
//    printf("%d", ans);
//
//    return 0;
//}



//Problem->B: Not solve:
#include<stdio.h>
#include<string.h>

int main(){

    char ar[1001];




    gets(ar);
  int count[26]={0};
    int sum=0;
//    for(int i=0; ar[i] !='\0'; i++){
//
//
//            if((ar[i] >='a') && (ar[i] <='z')){
//                count[ar[i]-'a']++;
//
//            }
//    }

    for(int i=0; i<strlen(ar); i++){

            int val = ar[i];

            count[val-'a']=1;


    }


    for(int i=0; i<26; i++){

        if(count[i] == 1){
            //sum++;
            sum += count[i];
        }

    }
    printf("%d",sum);

return 0;
}





//Problem->C: Solve:
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//    int n;
//    scanf("%d",&n);
//    char ar[100];
//
//    scanf("%s",&ar);
//
//
//   for (int i = 0; ar[i]!='\0'; i++) {
//      if(ar[i] >= 'A' && ar[i] <= 'Z') {
//         ar[i] = ar[i] + 32;
//      }
//   }
//
//    int count[26]={0};
//
//    for(int i=0; i<n; i++){
//
//        char val =  ar[i]-'a';
//        count[val]++;
//
//    }
//
//    for(char val='a'; val<='z'; val++){
//
//        if(count[val-'a']==0){
//            printf("No");
//            return 0;
//        }
//    }
//    printf("Yes");
//
//return 0;
//}




//Problem->D: Not solve:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//    int ar[100];
//
//    int Tetrahedron = 4;
//    int Cube = 6;
//    int Octahedron = 8;
//    int Dodecahedron = 12;
//    int Icosahedron = 20;
//    int count[100]={0};
//    for(int i=0; i<n; i++){
//
//        scanf("%s",&ar);
//    }
//
//    for(int i=0; i<n; i++){
//
//        if(ar[i]== "Tetrahedron"){
//            count[i]=1;
//        }
//
//          if(ar[i]== "Cube"){
//            count[i]=1;
//        }
//
//            if(ar[i]== "Dodecahedron"){
//            count[i]=1;
//        }
//
//              if(ar[i]== "Octahedron"){
//            count[i]=1;
//        }
//
//                if(ar[i]== "Icosahedron"){
//            count[i]=1;
//        }
//    }
//
//    for(int i=0; i<n; i++){
//
//        printf("%d",count[i]);
//    }
//
//
//return 0;
//}



//Problem->F: Not solve:
//#include<stdio.h>
//
//int main(){
//
//    int n,a,b;
//
//    scanf("%d",&n);
//
//    int m =0;
//    int c =0;
//
//
//    for(int i=0; i<n; i++){
//        scanf("%d %d",&a,&b);
//
//    }
//
//    for(int i=0; i<n; i++){
//
//        if(a>b){
//            m++;
//        }
//
//    }
//     printf("%d",m);
//
//}








//#include<stdio.h>
//
//int main(){
//
//
//
//
//return 0;
//}
//








