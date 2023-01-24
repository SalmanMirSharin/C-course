
//strlen function:
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//
//   char ar[100];
//
//   scanf("%s",ar);
//    printf("%d \n",strlen(ar));
//  int index=0;
//
//  while(ar[index] !='\0'){
//    index++;
//  }
//
//    printf("%d",index);
//
//return 0;
//}


//strcpy:
//#include<stdio.h>
//
//int main(){
//    int a[100], b[100];
//
//    scanf("%s %s",&a,&b);
//
////    strcpy(a,b);
////    printf("%s %s",a,b);
//
//    int len =strlen(b);
//    int i;
//    for( i=0; i<len; i++){
//
//        a[i] = b[i];
//
//    }
//    a[len-1]='\0';
//     printf("%s %s",a[i],b[i]);
//
//return 0;
//}


//strcpm:
//#include<stdio.h>
//
//int main(){
//
//    int a[100],b[100];
//
//    scanf("%s %s",a,b);
//
//    int val = strcmp(a,b);
//    printf("%d",val);
//
//
//return 0;
//}


//Counter string:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    char ar[n];
//
//    scanf("%s",&ar);
//
////    for(int i=0; i<n; i++){
////        scanf("%s",&ar[i]);
////    }
//
//    int count[26] ={0};
//
//    for(int i=0; i<n; i++){
//            char val = ar[i]-'a';
////            printf("%c",val);
//        count[val]++;
//
//        }
//
//    for(char val='a'; val<='z'; val++){
//
//      if(count[val-'a']>0){
//          printf("Val->%c, Count->%d \n",val, count[val-'a']);
//      }
//    }
//
//return 0;
//}




//String Addition: it did'n work with big number: I have question about that:

//#include<stdio.h>
//#include<string.h>
////177,977, 780,810 sum number for test case:
//int main(){
//
//
//char a[5000],b[5000],jogfal[50001];
//
//
//scanf("%s %s",&a,&b);
//
//strrev(a);
//strrev(b);
//
//int i=0,j=0,k=0,hate=0;
//
//while(i<strlen(a) && j<strlen(b)){
//
//    int sum = (a[i]-'0') + (b[j]-'0')+hate;
//    printf("%d \n",sum);
//    jogfal[k] = (sum%10+'0');
//       printf("j %s \n",jogfal);
//    hate = sum/10;
//    i++;
//    j++;
//    k++;
//}
//
//while(i<strlen(a)){
//
//    int sum = (a[i]-'0')+hate;
//    printf("%d \n",sum);
//    jogfal[k] = (sum%10+'0');
//       printf(" j %s \n",jogfal);
//    hate = sum/10;
//    i++;
//    k++;
//}
//
//while(j<strlen(b)){
//    int sum = (b[j]-'0')+hate;
//     printf("%d \n",sum);
//    jogfal[k] = (sum%10+'0');
//    printf(" j %s \n",jogfal);
//    hate = sum/10;
//    j++;
//    k++;
//}
//
//strrev(jogfal);
//
//printf("%s",jogfal);
//
//
//return 0;
//}
//



//count space index:
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char string[100];
//    int str_lengths[100] = {0};
//    int count = 0, j = 0;
//
//    gets(string);
//
//    for (int i = 0; string[i] != '\0'; i++)
//    {
//        if (string[i] == ' ')
//        {
//            str_lengths[j] = count;
//            j++;
//        }
//        count++;
//    }
//
//    for (int i = 0; i < 100; i++)
//    {
//        if (str_lengths[i] != 0)
//        {
//            printf("%d ", str_lengths[i]);
//        }
//    }
//}



