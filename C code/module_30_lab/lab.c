
//Plendrom:
//#include<stdio.h>
//
//int main(){
//
//    char a[100],b[100];
//    scanf("%s",a);
//
//    strcpy(b,a);
//    strrev(b);
//
//    for(int i=0; i<strlen(a); i++){
//
//        if(a[i] != b[i]){
//            printf("No");
//            return 0;
//
//        }
//    }
//    printf("Yes");
//
//return 0;
//}


//Tow pointer technique for Plendrom:

//
//    #include<stdio.h>
//
//    int main(){
//
//    char a[100];
//    scanf("%s",&a);
//
//    int i=0, j=strlen(a)-1;
//
//    while(i<j){
//        if(a[i] !=a[j]){
//            printf("No");
//            return 0;
//        }
//        i++;
//        j--;
//    }
//     printf("Yes");
//
//
//    return 0;
//    }




//Check All alphabet exist or not:
//#include<stdio.h>
//
//int main(){
//
//    char a[100];
//    scanf("%s",&a);
//    int count[26]={0};
//
//    for(int i=0; i<strlen(a); i++){
//
//            char value = a[i];
//
//            count[value-'a']=1;
//    }
//
//    for(char value='a'; value<='z'; value++){
//
//            if(count[value-'a'] ==0){
//                printf("No");
//                return 0;
//            }
//    }
//    printf("Yes");
//
//
//return 0;
//}



//This code has a proble: it count extra space:
//Word count:
#include<stdio.h>
#include<stdbool.h>


int main(){

    char a[200];

    fgets(a,200,stdin);

    a[strlen(a)-1] = '\n';
    int ans =0;

    bool word = false;

    for(int i=0; i<strlen(a); i++){



        char value = a[i];

        if(value !=' ' || value =='\0'){
            word = true;
        }

        if(value == ' '){

                if(a[i-1]==' '){
                    word =false;
                    continue;
                }
         else if(word == true){
            ans++;
            printf(" i -<%d ans-> %d \n",i,ans);
            word = false;
          }
        }

        if(a[i]==' ' && a[strlen(a)-1]==' '){

            ans--;
            printf( "128 ->%d \n",ans);
        }
    }


    if(word == true){
        ans++;


    }
       printf("%d",ans);



return 0;
}

