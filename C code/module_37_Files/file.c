
//First Video:
//#include<stdio.h>
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    int ar[n];
//    int sum=0;
//
//    for(int i=1; i<=n; i++){
//
//       scanf("%d",&ar[i]);
//       sum+=ar[i];
//    }
//
//    printf("%d",sum);
//
//
//return 0;
//}




//Second Video:
//#include<stdio.h>
//#include<stdbool.h>
//
//int main(){
//
//    FILE *inputFile;
//
//    inputFile = fopen("in2.txt","r");
//
//    if(inputFile == NULL){
//        printf("NO File found!");
//        return 0;
//    }
//
//    FILE *outputFile;
//    outputFile = fopen("out.txt","w");
//
//    while(true){
//
//          char ch =  fgetc(inputFile);
//
//          if(ch==EOF){
//            break;
//          }
//          fputc(ch,outputFile);
//    }
//
//return 0;
//}



//Third Video:
//#include<stdio.h>
//
//int main(){
//
//    FILE *inputFile;
//    FILE *outputFile;
//
//    inputFile = fopen("in3.txt","r");
//
//        if(inputFile==NULL){
//
//            printf("Not Found");
//            return 0;
//        }
//
//          outputFile = fopen("out.txt","w");
//
//
//    int n;
//    fscanf(inputFile,"%d",&n);
//    int sum =0;
//    for(int i=0; i<n; i++){
//        int a;
//        fscanf(inputFile,"%d",&a);
//
//        sum +=a;
//    }
//
//    fprintf(outputFile,"Sum->%d",sum);
//
//
//return 0;
//}
//



//Fourth Video:
//#include<stdio.h>
//
//int main(){
//
//    FILE *logFile = fopen("log.txt","a");
//    FILE *inputFile = fopen("file.txt","r");
//
//    if(inputFile==NULL){
//
//        fprintf(logFile,"Input File Not Found at 12:30\n");
//        return 0;
//    }
//
//return 0;
//}




#include<stdio.h>

int main(){

    FILE *inputFile = fopen("input.txt","r");
    if(inputFile==NULL){

        printf("Not Found");
        return 0;

    }
    FILE *outputFile = fopen("output.txt","w");

    int n;

    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"%d \n",n);

    fclose(inputFile);
    fclose(outputFile);
return 0;
}





















