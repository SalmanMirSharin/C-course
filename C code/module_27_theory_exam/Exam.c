//
////Exam-6:
//
//
//Solve-2:
//#include<stdio.h>
//
//struct Time{
//
//    int hour;
//    int minute;
//    int second;
//
//};
//
//struct Interval {
//
//    struct Time start;
//    struct Time end;
//
//};
//
//
//int main(){
//
//    struct Time time ={.hour =5, .minute =29};
//
//    struct Time nextTime = time;
//
//        for(int i=0; i<286; i++){
//
//              if(nextTime.minute==59){
//             nextTime.hour++;
//        }
//
//        if(nextTime.minute!=59){
//            nextTime.minute++;
//        }
//        else{
//            nextTime.minute =0;
//        }
//        printf("%d:%d \n",nextTime.hour,nextTime.minute);
//
//        }
//
//
//return 0;
//}



//Solve-3:
//#include<stdio.h>
//
//struct arra {
//
//    char* name[100];
//
//    int ar[100];
//
//};
//
//int main(){
//
//    struct arra s1;
//
//
//    //String Array:
//    char name [] = "Chirs Hemsworth";
//
//    strcpy(s1.name,name);
//
//    printf("%s \n",s1.name);
//
//
//    printf("\n");
//
//
//    //Integer Array:
//    for(int i=0; i<100; i++){
//
//        s1.ar[i] =i;
//    }
//
//    for(int i=1; i<=50; i++){
//
//        printf(" %d",s1.ar[i]);
//    }
//
//return 0;
//}





//Solve-4:
//#include<stdio.h>
//
//struct fraction {
//
//    int num;
//    int dmen;
//
//};
//
//void fractionInverse( struct fraction f){
//
//    printf("%d/%d",f.dmen,f.num);
//
//}
//
//int main(){
//
//    struct fraction half;
//
//    scanf("%d %d",&half.num,&half.dmen);
//
//    fractionInverse(half);
//
//return 0;
//}




//Solve-5: But I have a question:
//#include<stdio.h>
//
//struct Date {
//
//    int day;
//    int month;
//    int year;
//
//};
//
//struct student {
//
//    char* name[100];
//    int roll;
//    int class;
//
//    struct Date dob;
//
//};
//
//int main(){
//
//    struct student st1;
//
//   char name[] = "Emma Watson";
//
//    strcpy(st1.name,name);
//
//    st1.roll = 1;
//
//    printf("Name: %s \n",st1.name);
//    printf("Roll: %d \n",st1.roll);
//
//
//return 0;
//}





//Solve-6:
//#include<stdio.h>
//
//struct Value {
//
//    int first;
//    int second;
//
//};
//
//struct Value reverseValue(int x, int y){
//
//    struct Value ans;
//
//    ans.first = y;
//    ans.second = x;
//
//    return ans;
//
//};
//
//int main(){
//
//    struct Value result = reverseValue(5,2);
//
//    printf("%d %d",result.first,result.second);
//
//}



//Solve-8:
//#include<stdio.h>
//
//int main(){
//
//    int n =23;
//
//    char ar[100];
//    int idx = 0;
//
//    while(n>0){
//
//        int digit = n%2;
//        n/=2;
//
//        ar[idx] = digit + '0';
//
//        idx++;
//
//    }
//    ar[idx] = '\0';
//
//   int i =0, j = strlen(ar)-1;
//
//   while(i<j){
//
//    char temp = ar[i];
//    ar[i] = ar[j];
//    ar[j] =temp;
//
//    i++;
//    j--;
//   }
//
//   printf("%s",ar);
//
//
//return 0;
//}



//Solve-8:
//#include<stdio.h>
//
//int main(){
//
//    int l,r;
//
//    scanf("%d %d",&l,&r);
//
//        //int sum;
//    for(int i=l; i<=r; i++){
//
//        for(int j=i; j<=r; j++){
//
//            printf("i=%d j=%d i^j=%d \n",i,j,i^j);
//        }
//
//    }
//
//return 0;
//}





//#include<stdio.h>
//
//int main(){
//
//int n ;
//
//scanf("%d",&n);
//
//    char ar[100];
//    int index =0;
// while(n>0){
//    int digit = n%2;
//    n/=2;
//    ar[index] = digit + '0';
//    index++;
//
//    //printf("%d",digit);
//}
//
//ar[index] = '\0';
//
////printf("%s \n",ar);
//
// int i=0, j=strlen(ar)-1;
//
// printf("%d \n",j);
//
// while(i<j){
//    char temp = ar[i];
//    ar[i] = ar[j];
//    ar[j] = temp;
//
//    i++;
//    j--;
// }
//
//
//printf("%s \n",ar);





//#include<stdio.h>
//#include<string.h>
//
//void decToBin(int n){
//
//
//    char ar[100];
//    int index =0;
// while(n>0){
//    int digit = n%2;
//    n/=2;
//    ar[index] = digit + '0';
//    index++;
//
//    //printf("%d",digit);
//}
//
//ar[index] = '\0';
//
////printf("%s \n",ar);
//
// int i=0, j=strlen(ar)-1;
//
// printf("%d \n",j);
//
// while(i<j){
//    char temp = ar[i];
//    ar[i] = ar[j];
//    ar[j] = temp;
//
//    i++;
//    j--;
// }
//
//printf("%s \n",ar);
//
//
//}
//
//
//int main(){
//
//    int a, b;
//
//    scanf("%d %d",&a,&b);
//
//    decToBin(a);
//
//    int x = a^(1<<b);
//
//    decToBin(x);
//
//    if(x){
//        printf("1 \n");
//    }
//    else{
//        printf("0 \n");
//    }
//
//return 0;
//}



//Question 9 practice code:
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//
//char *strrev(char *str){
//
//    if(!str || !*str){
//        return str;
//    }
//
//int i=strlen(str)-1, j =0;
//
//char ch;
//    while(i>j){
//
//        ch = str[i];
//        str[i] = str[j];
//        str[j] = ch;
//
//        i--;
//        j++;
//    }
//    return str;
//}
//
//struct Binary {
//
//char str[50];
//
//};
//
//struct Binary toBinary(unsigned int val, int k){
//  struct Binary ans;
//
//    int idx =0;
//
//    while(val>0){
//
//        int d = val%2;
//        val = val/2;
//        ans.str[idx] = '0' + d;
//
//        idx++;
//    }
//
//    for(int i=idx; i<k; i++) ans.str[i] = '0';
//    ans.str[k] = 0;
//    strrev(ans.str);
//
//    return ans;
//}
//
//bool getBit(unsigned int mask, int k){
//
//    return (mask & (1<<k)) != 0;
//}
//
////unsigned int setBit(unsigned int mask, int k){
////
////        return mask | (1<<k);
////}
////
////unsigned int clearBit(unsigned int mask, int k){
////
////        return mask & ~(1<<k);
////}
//
//unsigned int flipBit(unsigned int mask, int k){
//
//        return mask ^ (1<<k);
//}
//
//int main(){
//
//    int x,n;
//    scanf("%d %d",&x,&n);
//
//    printf("%s \n",toBinary(x,n).str);
//
//    for(int i=n; i>0; i--){
//
//        //printf("%d \n",getBit(x,i));
//
////        printf("Clear: %s \n",toBinary(clearBit(x,i),8).str);
////         printf("Set: %s \n",toBinary(setBit(x,i),8).str);
//          //printf("Flip: %d = %s \n",i,toBinary(flipBit(x,i),8).str);
//
//          if(getBit(x,i)==1){
//
//            printf("Flip: %d = %s \n",i,toBinary(flipBit(x,i),n).str);
//            break;
//
//          }
//
//    }
//
//return 0;
//}







//Solve-9:
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//
//char *strrev(char *str){
//
//    if(!str || !*str){
//        return str;
//    }
//
//int i=strlen(str)-1, j =0;
//
//char ch;
//    while(i>j){
//
//        ch = str[i];
//        str[i] = str[j];
//        str[j] = ch;
//
//        i--;
//        j++;
//    }
//    return str;
//}
//
//struct Binary {
//
//char str[50];
//
//};
//
//struct Binary toBinary(unsigned int val, int k){
//  struct Binary ans;
//
//    int idx =0;
//
//    while(val>0){
//
//        int d = val%2;
//        val = val/2;
//        ans.str[idx] = '0' + d;
//
//        idx++;
//    }
//
//    for(int i=idx; i<k; i++) ans.str[i] = '0';
//    ans.str[k] = 0;
//    strrev(ans.str);
//
//    return ans;
//}
//
//bool getBit(unsigned int mask, int k){
//
//    return (mask & (1<<k)) != 0;
//}
//
//unsigned int flipBit(unsigned int mask, int k){
//
//        return mask ^ (1<<k);
//}
//
//int main(){
//
//    int x,n;
//    scanf("%d %d",&x,&n);
//
//    printf("Original: %s \n",toBinary(x,n).str);
//
//    for(int i=n; i>0; i--){
//
//
//          if(getBit(x,i)==1){
//
//            printf("Flip dig: %s \n",toBinary(flipBit(x,i),n).str);
//            break;
//
//          }
//    }
//
//return 0;
//}





#include<stdio.h>

struct Binary {

char str[50];

};

struct Binary toBinary(unsigned int val, int k){
  struct Binary ans;

    int idx =0;

    while(val>0){

        int d = val%2;
        val = val/2;
        ans.str[idx] = '0' + d;

        idx++;
    }

    for(int i=idx; i<k; i++) ans.str[i] = '0';
    ans.str[k] = 0;
    strrev(ans.str);

    return ans;
}

int main(){

    int a = 220;

   printf("%s \n", toBinary(a,8).str);
    // int x = a<<2;



    printf("%s \n", toBinary(x,8).str);


return 0;
}


