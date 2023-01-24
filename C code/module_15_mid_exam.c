

// Proble-1;


//#include<stdio.h>
//#include<strings.h>
////#include<ctype.h>
//
//
//int main(){
//
// char name[101];
//
//scanf("%s",name);
//
//
//    int sz = strlen(name);
//
//        if(sz%2==0){
//
//             printf("CHAT WITH HER! \n");
//
//        }
//        else{
//            printf("IGNORE HIM! \n");
//        }
//
//return 0;
//}



//#include<stdio.h>
//
//
//int main(){
//
//    int n;
//
//    scanf("%d",&n);
//
//
//
//
//    scanf("%s",s);
//
//    printf("%s",s);
//    char s[n];
//    for(int i=0; i<n; i++){
//
//        scanf("%s",s);
//
//    }
//    printf("%s",s);
//
//     for(int i=0; i<n; i++){
//        printf("%s",s);
//     }
//        int count=0;
//    for(int i=0; i<n; i++){
//
//        if(s[i]==s[i+1]){
//
//                count++;
//
//          for(int j=i; j<n; j++){
//            if(s[j] == s[j+1]){
//                  count++;
//            }
//
//
//          }
//        }
//    }
//    printf("%d",count);
//
//
//
//return 0;
//}


//Problem: C; Not solve;

//#include<stdio.h>
//
//char* remove_no(char* s);
//
//int main(){
//
////int n;
////
////scanf("%d",&n);
//
//char s[]= "aabbccdaa";
//
////scanf("%s",s);
//
//printf("%s",remove_no(s));
//
//
//}
//
//
//char* remove_no(char* s){
//
//    int i,j;
//for( i=0; s[i]; i++){
//
//    if(s[i]==s[i+1]){
//
//        for( j=i; s[j]; j++)
//
//            s[j] == s[j+1];
//
//           i--;
//
//    }
//
//}
//
// return(s);
//
//}







// Solve--D;

//#include<stdio.h>
//#include<stdlib.h>
//
//int main(){
//
//char uper[1000];
//
//    gets(uper);
//    for(int i=0; uper[i]; i++){
//
//        if(i==0){
//            if(uper[i]>='a' && uper[i]<='z'){
//                uper[i] = uper[i] - 32;
//
//            }
//        }
//    }
//
//printf("%s",uper);
//
//return 0;
//}






//#include<stdio.h>
//#include<stdlib.h>
//
//int main(){
//
//int n;
//
//scanf("%d",&n);
//
//char ch[n];
//
//scanf("%s",ch);

//
//for(int i=0; spacial[i]; i++){
//
//    if(spacial[i]>='a' && spacial[i]<='z' ||spacial[i]>='A' && spacial[i]<='B'  ){
//
//        printf("Yes\n");
//    }
//    else{
//        printf("No \n");
//    }
//
//}
//
//
//    if((spacial>= && spacial<='z') || (spacial>='A' && spacial<='B') ){
//
//        printf("Yes\n");
//    }
//    else{
//        printf("No \n");
//    };

//    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)){
//
//        printf("Yes");
//
//    }
//    else{
//
//        printf("NO");
//    }
//
//
//
//
//
//return 0;
//}



//Solve--A;

//#include <stdio.h>
//#include<string.h>
//
//int main()
//{
//    int p=0,s=0;
//    char n[105];
//
//    scanf("%s", &n);
//
//  int len=strlen(n);
//
//    for( int i=0;i<len;i++){
//        for( int j=i+1;j<len;j++){
//            if(n[i]==n[j])
//            s=1;
//        }
//         if(s!=1){
//        p++;
//    }
//    s=0;
//
//    }
//    if(p%2==0)
//    printf("CHAT WITH HER!\n");
//    else
//    printf("IGNORE HIM!\n");
//
//    return 0;
//}


//solve--B;

//#include <stdio.h>
//
//int main(){
//    int n, a;
//    int s=0, maxVal=0;
//
//    scanf("%d", &n);
//
//    for (int i=0; i<n; i++){
//
//      scanf("%d", &a);
//
//        if (a>maxVal)
//          maxVal=a;
//          s += a;
//
//
// }
//
// int total =n*maxVal-s;
//
//    printf("%d", total );
//
//return 0;
//}



 //solve--C;
//#include<stdio.h>
//int main(){
//    int n,i;
//
//    int a=0,b=0,c=0;
//
//    scanf("%d\n",&n);
//
//    char s[n];
//
//    scanf("%s",s);
//
//    for (i=0; i<n;i++ )
//    {
//        if ( s[i]=='R'){
//
//    while(s[i+1]=='R'){
//
//            a++;
//            i++;
//        }
//       }
//         if ( s[i]=='G'){
//
//    while(s[i+1]=='G'){
//
//            b++;
//            i++;
//        }
//       }
//         if ( s[i]=='B'){
//    while(s[i+1]=='B'){
//
//            c++;
//            i++;
//        }
//    }
//  }
//    printf("%d",a+b+c);
//    return 0;
//}







  //char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

//#include<stdio.h>
//
//int main(){
//
//
//
////
////for( char ch='A'; ch<='Z'; ch++){
////
////    printf("%c",ch);
////}
//
//char abc[26];
//char index;
//for(index="a", abc[0]; index<="z"; index++, abc[0]++){
//    abc[]=abc[index]
//}
//printf("%s", abc);
//
//
//return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//    char arr[27];
//    int i;
//
//    for(i=0; i<26; i++)
//    {
//        arr[i] = 'A'+i;
//    }
//
//    arr[i]='\0';
//
//
//}



//Solve--E;

//#include<stdio.h>
//int main()
// {
//    int n,alLetter=0;
//    scanf("%d", &n);
//    char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M',
//    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//
//    char a[n];
//
//     scanf("%s", &a);
//
//
//      for ( int j=0; j<n; j++)
//
//               if ( 'a'<=a[j] && a[j] <= 'z' ) a[j]=a[j] - 'a'+'A';
//
//
//
//      for ( int i=0; i<26; i++ ){
//        for ( int j=0; j<n; j++){
//
//               if ( b[i]==a[j]){
//                   alLetter++;
//                   break;
//               }
//            }
//      }
//        if ( alLetter==26){
//
//             printf("YES");
//        }
//    else{
//           printf("NO");
//    }
//
//return 0;
//}



//Solve--F;

//#include <stdio.h>
//
//int main()
//{
//    long long int n, c = 0;
//
//    scanf("%lld", &n);
//
//    while (n != 0){
//        if ((n % 10 == 4) || (n % 10 == 7))
//        {
//            c++;
//        }
//        n = n / 10;
//    }
//    if (c == 4 || c == 7){
//
//         printf("YES");
//    }
//    else{
//           printf("NO");
//    }
//
// return 0;
// }


//Solve--G;

//#include <stdio.h>
//#include<string.h>
//
//int main()
//{
//    int t;
//
//    scanf("%d", &t);
//
//    char s[100];
//
//    for( int i=0;i<t;i++){
//
//        scanf("%s", &s);
//
//       int  len = strlen(s);
//
//        for( int j=0;j<len;j++){
//
//            if(j==0 || j%2==0 || j==len-1)
//
//            printf("%c", s[j]);
//
//
//        }
//        printf("\n");
//
//    }
//
//
//    return 0;
//}







//Module::15: Mid term Exam papper:



//#include<stdio.h>
//#include<strings.h>
//
//int main(){



//Question 2 answer:

//char s[] = "banana";
//
//
//    int sz = sizeof(s);
//
//
//    printf("%d",sz);




//Question 3 answer;

//int arr[] = {1, 4, 7, 10, 15, 18, 5, 10};
//
// int len = sizeof(arr)/sizeof(arr[0]);
//
// //printf("%d",len);
//
// for(int i=0; i<len; i++){
//
//    printf("%d \n",arr[i]);
// }



//char a[7];
//a[0] = 'b';
//a[1] = 'a';
//a[2] = 'n';
//a[3] = 'a';
//a[4] = 'n';
//a[5] = 'a';


//Question--4 answer;

//char a[10] ="banana";
//
//printf("%s",a);


//char a[10];
//gets(a);
//
//printf("%s",a);


//int arr[100];
//
//printf("%d",sizeof(arr));
//
//
//
//
//
//return 0;
//}


















