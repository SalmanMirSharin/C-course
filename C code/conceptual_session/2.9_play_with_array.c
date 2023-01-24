
#include<stdio.h>

//Array;
//
//int main(){
//
//    int size;
//
//    scanf("%d",&size);
//
//    int ar[size];
//
//    for(int i=0; i<size; i++){
//
//        scanf("%d",&ar[i]);
//    }
//
//
//    for(int i=0; i<size; i++){
//
//        printf("%d \n",ar[i]);
//    }
//
//return 0;
//}



//#include<stdio.h>
//
//int main(){
//
//    char str[100];
//
//    gets(str);
//
//    printf("%s",str);
//
//
//return 0;
//}

  //plandram world:
//
//#include<stdio.h>
//
//int main(){
//
//    char str[100];
//
//    scanf("%s",str);
//
//    int i = 0, j = strlen(str)-1;
//
//    while(i<j){
//
//        if(str[i] != str[j]){
//
//            printf("No \n");
//            return 0;
//        }
//
//        i++;
//        j--;
//
//    }
//    printf("Yes \n");
//
//
//return 0;
//}


//Count A-Z which one is most input:

//#include<stdio.h>
//
//int main(){
//
//    char ar[100];
//
//    scanf("%s",ar);
//    strupr(ar);
//
//    int count[26]={0};
//
//    for(int i=0; i<strlen(ar); i++){
//
//        count[ar[i]-'A']++;
//    }
//
//    char ans1;
//    int ans2=0;
//
//    for(int i=0; i<26; i++){
//
//        if(count[i]>ans2){
//
//            ans2 = count[i];
//            ans1 = i+'A';
//        }
//    }
//    printf("Maximum valu : %c -> %d",ans1,ans2);
//
//return 0;
//}



#include<stdio.h>

int main(){

    char st[100];

    scanf("%s",&st);

    strrev(st);

    printf("%s",st);

return 0;
}












































