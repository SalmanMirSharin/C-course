




//contest-A; Solve;

//#include<stdio.h>
//
//int a,b,c;
//int main(){
//
//    int N,K,A;
//
//    scanf("%d %d %d",&N,&K,&A);
//
//
//    int s_person = A-1;
//
//    for(int i=1; i<=K; i++){
//
//        s_person++;
//
//        if(s_person > N){
//
//            s_person =1;
//        }
//
//    }
//    printf("%d",s_person);
//
//return 0;
//}










//contest-B  face run time error;
//
//#include<stdio.h>
//
//    int main(){
//
//        int n;
//        scanf("%d",&n);
//
//        int sum = 0;
//        for(int i=1; i<=n; i++){
//               int p, q;
//
//            scanf("%d %d",&p,&q);
//
//            if(p+1<q){
//
//                sum++;
//
//            }
//            else{
//               sum;
//
//            }
//
//
//        }
//        //it's print room value;
//        printf("%d",sum);
//
//
//    return 0;
//    }
//

//contest-C; Solve;

//    #include<stdio.h>
//
//    int main(){
//
//    int S,T,X;
//
//    scanf("%d %d %d",&S,&T,&X);
//
//    if(T>S){
//        if(X<S){
//            printf("No");
//        }
//        else if(X<T){
//            printf("Yes");
//        }
//        else{
//            printf("No");
//        }
//    }
//    else{
//        if(X>=S){
//            printf("Yes");
//        }
//        else if(X<T){
//            printf("Yes");
//        }
//        else{
//            printf("No");
//        }
//    }
//
//    return 0;
//    }


//Contest-D solve;
//#include<stdio.h>
//
//int main(){
//
//int n;
//
//scanf("%d",&n);
// int a=0, d=0;
//for(int i=1; i<=n; i++){
//    char s;
//
//
//    scanf(" %c ",&s);
//
//
//    if(s=='A'){
//        a++;
//    }
//
//    if(s=='D'){
//        d++;
//    }
//
//}
//
//if(a>d){
//        printf("Anton \n");
//    }
//    else if(d>a){
//        printf("Danik \n");
//    }
//    else if(a==d){
//        printf("Friendship \n");
//    }
//
//return 0;
//}


//Contest-E solve;

//#include<stdio.h>
// int main(){
//
//int A,B,C,D,E,F,X;
//
// scanf("%d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&X);
//
//    int takahashi =0, aoki=0;
//
// for(int i=0; i<X; i++){
//
//        int takahashi_sum = (A+C);
//        int aoki_sum = (D+F);
//
//        if(i % takahashi_sum< A){
//            takahashi +=B;
//        }
//        if(i % aoki_sum < D){
//
//            aoki +=E;
//        }
//     }
//     if(takahashi > aoki){
//        printf("Takahashi");
//     }
//     else if(takahashi < aoki){
//        printf("Aoki");
//     }
//     else{
//        printf("Draw");
//     }
//
//return 0;
//}


//contest-F; Not solve:

//#include<stdio.h>
//
//int main(){
//
//    int n,m;
//
//    scanf("%d %d",&n,&m);
//
//    for(int i=1; i<=n; i++){
//
//        for(int j=1; j<=m; j++){
//
//            //printf("#");
//            if(i/2==0){
//
//                 printf(".",j-1);
//
//            }
//
//            else{
//                printf("#");
//            }
//
//        }
//        printf("\n");
//    }
//
//
//return 0;
//}


//Contest-G -- solve;
//
//#include<stdio.h>
//
//int main(){
//
//    int A,B;
//
//    scanf("%d %d",&A,&B);
//
//    int more_than = (B+1)-A;
//
//    if(B>A){
//        printf("%d",more_than);
//    }
//    else{
//        printf("0");
//    }
//
//
//return 0;
//}


//Contest- H; Not solve;

//#include<stdio.h>
//
//int main(){
//
//    int n;
//
//    scanf("%d",&n);
//
//    int hate = "I hate it";
//
//
//   for(int i=1; i<=n; i++){
//
////        printf("I hate it ");
////        printf("I hate that I love it");
//
//    printf("%d",hate);
//
//
//   }
//
//
//
//return 0;
//}




//#include<stdio.h>
//
//int main(){
//
//int x;
//
//
//scanf("%d",&x);
//
//int container=0;
//while(x>0){
//    int digit = x%10;
//
//    x/=10;
//
//    container = container*1 + digit;
//    break;
//    printf("%d",digit);
//}
//printf("%d",container);
//
//
//
//
//
//return 0;
//}



//Contest-I; Solve;

//#include<stdio.h>
//
//int main(){
//
//int x;
//
//scanf("%d",&x);
//
//if(90<=x){
//    printf("expert");
//}
//else if(x>=70 && x<90){
//    printf("%d",(90-x));
//}
//else if(x>=40 && x<70){
//    printf("%d",(70-x));
//}
//else if(0<=x && x<40){
//    printf("%d",(40-x));
//}
//return 0;
//}


//Contest-H; solve;

//#include<stdio.h>
//
//int main(){
//
//int n;
//
//scanf("%d",&n);
//
//int layer =1;
//
//while(layer<=n){
//
//    if(layer & 1){
//        printf("I hate ");
//    }
//    else{
//        printf("I love ");
//    }
//
//    if(layer<n){
//        printf("that ");
//    }
//    ++layer;
//}
//printf("it ");
//
//return 0;
//}




//#include<stdio.h>
//
//int main(){
//
//int height, width;
//
//scanf("%d %d",&height,&width);
//
//for(int i=1; i<=height; i++){
//
//    for(int j=1; j<=width; j++){
//
//        if(i%4==0){
//            if(j==1){
//                printf("#");
//            }
//            else{
//                printf(".");
//            }
//        }
//        else{
//            if(j==1){
//                printf(".");
//            }
//            else{
//                printf("#");
//            }
//        }
//
//    }
//    printf("\n");
//}
//
//
//
//return 0;
//}
//
//
//      else{
//            if(j==1){
//                printf(".");
//            }
//            else{
//                printf("#");
//            }
//        }



//Contest-F; Solve;
//#include<stdio.h>
//
//int main(){
//
//int n,m;
//
//scanf("%d %d",&n,&m);
//
//for(int i=1; i<=n; i++){
//
//    for(int j=1; j<=m; j++){
//
//      if(i%4==0){
//          if(j==1){
//             printf("#");
//          }
//           else{
//            printf(".");
//           }
//        }
//       else if(i%2==0){
//          if(j==m){
//             printf("#");
//          }
//           else{
//            printf(".");
//           }
//        }
//         else{
//            printf("#");
//         }
//    }
//    printf("\n");
//}
//return 0;
//}

//
//
//#include<stdio.h>
//
//int main(){
//
//int A;
//int K;
//
//scanf("%d %d",&K,&A);
//
//for(int i=A; i<=K; i++){
//
//    printf("%d",i);
//}
//
//return 0;
//}


//Contest-J; solve;

//#include<stdalign.h>
//
//int main(){
//
//int a,b,c,x,y;
//
//scanf("%d",&a);
//int remi, number,securence;
//
//if(a>99 && a<1000){
//
//    remi = a%10;
//    securence = remi;
//    number = a/10;
//    x =securence*100+number;
//
//    if(a>99 && a<1000){
//
//        remi =x%10;
//        securence = remi;
//        number = x/10;
//         y = securence*100+number;
//
//    }
//}
//int sum = a+x+y;
//printf("%d",sum);
//
//return 0;
//}




//Contest-B; Solve;

//#include<stdio.h>
//int main(){
//
//int n,p,q;
//int j,k=0;
//
//scanf("%d",&n);
//
//for(int i=1; i<=n; i++){
//
//    scanf("%d %d",&p,&q);
//
//     j =q-p;
//
//    if(j>=2){
//        k+=1;
//
//    }
//}
//printf("%d",k);
//
//return 0;
//}



//#include<stdio.h>
//
//int main(){
//
//int S,T,X;
//
//scanf("%d %d %d",&S,&T,&X);
//
//
//
//
//return 0;
//}






