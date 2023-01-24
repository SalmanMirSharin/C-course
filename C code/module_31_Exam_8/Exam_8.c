//
//Problem-A:- Solve:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//    int arr[n];
//
//    int sum =0;
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&arr[i]);
//    }
//
//    for(int i=0; i<n; i++){
//        sum+= arr[i];
//    }
//    printf("%d",sum);
//
//return 0;
//}




//Problem-B:-Solve:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    int arr[n];
//
//    for(int i=0; i<n; i++){
//        scanf("%d",&arr[i]);
//    }
//
//    int i=0, j=n-1;
//
//    while(i<j){
//        int temp =arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//        i++;
//        j--;
//    }
//
//    for(int i=0; i<n; i++){
//        printf("%d ",arr[i]);
//    }
//
//return 0;
//}


//Problem-C: Solve:
//#include<stdio.h>
//
//int main()
//{
//
//    int num=1001;
//
//
//    char s[num];
//
//    scanf("%s",&s);
//
//    int count[10]= {0};
//
//    for(int i=0; i<strlen(s); i++)
//    {
//
//        count[s[i]-'0']++;
//    }
//
//    for(int i=0; i<=9; i++)
//    {
//        printf("%d ",count[i]);
//    }
//    //djdk
//
//    return 0;
//}



//Problem: D: Solve But it was before:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    int marks[n];
//
//    int sum=0;
//
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&marks[i]);
//    }
//    char gender;
//
//     scanf(" %c",&gender);
//
//     for(int i=0; i<n; i++){
//
//
//    if(i%2==0 && gender=='b'){
//        sum +=marks[i];
//        }
//        else if(i%2!=0 && gender=='g'){
//        sum +=marks[i];
//        }
//    }
//
//     printf("%d",sum);
//
//return 0;
//}



//Problem D: Not Solve:
//#include<stdio.h>
//
//int main(){
//
//    int t;
//    scanf("%d",&t);
//
//    int n;
//
//     int ar[200000];
//
//
//    for(int i=0; i<t; i++){
//        scanf("%d",&n);
//
//    }
//    for(int i=0; i<n; i++){
//        scanf("%d",&ar[i]);
//    }
//
//
//return 0;
//}




//Problem-E: Solve:
//#include<stdio.h>
//
//int main()
//{
//
//    int n;
//    scanf("%d",&n);
//
//    int sum =0;
//
//    while(n>0)
//    {
//        int digit = n%10;
//        n = n/10;
//        sum +=digit;
//    }
//
//    printf("%d",sum);
//    return 0;
//}








//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//
//    char str[101];
//
//
//    scanf("%s",&str);
//
//    for(int i=0; i<strlen(str); i++)
//    {
//
//       if(( (strlen(str)<1) && str[0]>='a' && str[0]<='z') )
//        {
//
//            str[i] =str[i]-32;
//        }
//        else if(str[i]=='z')
//        {
//
//            str[i] = str[i]-32;
//        }
//
//
//    }
//
//    printf("%s",str);
//
//    return 0;
//}
//



//Problem-D: Solve:
//#include<stdio.h>
//
//int main()
//{
//    int t;
//
//    scanf("%d",&t);
//
//    for(int j=0; j<t; j++)
//    {
//
//        int n,c=0;
//        scanf("%d",&n);
//        int count[200001]= {0};
//        int ar[n];
//
//        for(int i=0; i<n; i++)
//        {
//
//            scanf("%d",&ar[i]);
//        }
//
//        for(int i=0; i<n; i++)
//        {
//
//            ar[i];
//            count[ar[i]]++;
//        }
//
//
//        for(int i=n; i>0; i--)
//        {
//
//            if(count[i]>=3)
//            {
//                printf("%d \n",i);
//                c=1;
//               break;
//
//            }
//        }
//        if(c==0)
//        {
//            printf("-1 \n");
//        }
//
//    }
//
//
//    return 0;
//}




//proble-F: Not solve:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    char ar[n];
//
//
//
//
//    scanf("%s",&ar);
//
//        ar[0] = '8' -'0';
//
//    for(int i=1; i<n; i++){
//
//          ar[i] = ar[i]-'0';
//
//    }
//
//    for(int i=0; i<n; i++){
//
//        printf("%d \n", ar[i]);
//    }
//
//
//
//return 0;
//}




//Problem H: not Solve:

//#include<stdio.h>
//#include<string.h>
////
//
//int main()
//{
//    int n =101;
//    char str[n];
//
//    int count[2]= {0};
//
//    scanf("%s",&str);
//
//    for(int i=0; i<strlen(str); i++)
//    {
//
//        for(int j=i+1; j<strlen(str)-1; j++){
//
//            if(str[i]==str[j]){
//
//        //char val = str[j];
//
//        count[str[i]-'0']++;
//            }
//        }
//
//
//    }
//
//    for(int i=0; i<2; i++)
//    {
//
//        if(count[i]>=7)
//        {
//            printf("YES");
//            return 0;
//        }
//    }
//
//
//    printf("NO");
//
//    return 0;
//}




//Problem:I : Not Solve:
//#include<stdio.h>
//
//int main()
//{
//
//    int n;
//    scanf("%d",&n);
//
//
//    char st[n];
//
//    int count[100002]= {0};
//
//    for(int i=0; i<=n; i++)
//    {
//
//        scanf("%c",&st[i]);
//    }
//
//    for(int i=0; i<=n; i++)
//    {
//
//        if(st[i]=='n')
//        {
//
//            count[i]++;
//        }
//
//    }
//
//    for(int i=0; i<=n; i++)
//    {
//
//        if(count[i] != 0)
//        {
//            printf("%d ",count[i]);
//        }
//    }
//
//    for(int i=0; i<n; i++)
//    {
//
//        if(st[i]=='z')
//        {
//            printf("0 ");
//        }
//    }
//
//////
//    return 0;
//}
//









//Problem j: Solve : but Not my self.
//#include <stdio.h>
//
//int main()
//
//{
//
//      char ch[106];
//
//      int i,j,ck=1;
//
//      scanf("%s",ch);
//
//      for(i=1;ch[i]!='\0';i++)
//
//      {
//
//            if(ch[i]>=97&&ch[i]<=122)
//
//            {
//
//                  ck=0;
//
//                  break;
//
//            }
//
//      }
//
//      if(ck==1)
//
//      {
//
//            if(ch[0]>=65&&ch[0]<=90)
//
//            ch[0]=ch[0]+32;
//
//            else
//
//            ch[0]=ch[0]-32;
//
//            for(j=1;ch[j]!='\0';j++)
//
//            {
//
//                  ch[j]=ch[j]+32;
//
//            }
//
//      }
//
//      printf("%s\n",ch);
//
//      return 0;
//
//}


