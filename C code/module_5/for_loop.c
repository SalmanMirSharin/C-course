
#include<stdio.h>
#include<stdbool.h>


 /*int main(){

 /*int i = 1, j=9;
for(; i<=j; i++,j--){

    printf("%d %d\n", i, j);

}
printf(" At End: %d %d",i,j);


*/


/*int n;

scanf("%d",&n);
int sum =0;
for(int i=1; i<=n; i++){

    sum +=i;

}
  printf("%d \n",sum);

  */


/*int n;

scanf("%d",&n);

for(int i=n; i>=0; i--){

for(int j=1; j<=i; j++){
 printf("*");

 }

printf("\n");

}
*/


/*for (int i=0; i<3; i++) {
    	for (int j=0; j<5; j++) {
        	printf("* \n");
    	}
	}


return 0;
}

*/



//Rectangle pattern print code:

#include<stdio.h>


 int main(){

 /*
int row, col;

scanf("%d %d",&row, &col);

for(int i= 1; i<=row; i++){
    for(int j =1; j<=col; j++){
        printf("* ");
    }
    printf("\n");
}

*/

//Holo Rectangle:
/*
int row, col;

scanf("%d %d",&row, &col);

for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
        if(i==1 || i==row || j==1 || j==col){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }

    printf("\n");
}
*/



/* int n;

scanf("%d",&n);

for(int i=n; i>=1; i--){
    for(int j=1; j<=i; j++){
        printf("*");
    }
    printf("\n");
}

*/



/*int n;

scanf("%d",&n);

for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
       if(j<=n-i){
        printf("  ");
       }
       else{
        printf("* ");
       }
    }
printf("\n");


}

*/



/*int n;

scanf("%d",&n);

for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        printf("%d ",i);
    }
    printf("\n");
}

*/


/*int n;

scanf("%d",&n);
int count=1;
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        printf("%d ",count);
          count++;
    }
    printf("\n");
}

*/


/*int n;

scanf("%d",&n);

for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        printf("* ");
    }

    int space = 2*n-2*i;
    for(int j=1; j<=space; j++){
        printf("  ");
    }

    for(int j=1; j<=i; j++){
        printf("* ");
    }
printf("\n");
}

//Back part:

for(int i=n; i>=1; i--){
    for(int j=1; j<=i; j++){
        printf("* ");
    }

    int space = 2*n-2*i;
    for(int j=1; j<=space; j++){
        printf("  ");
    }

    for(int j=1; j<=i; j++){
        printf("* ");
    }
printf("\n");
}
*/


//I couldn't solve this:
/*
bool n;


scanf("%d",&n);

//int com = n>0;

if(n>0){
   //printf("%d",com);
   printf("1");
}
else{
    if(n==0){
        printf("0");
    }else{
        printf("-1");
    }
}


*/

/*
int a, b;

scanf("%d %d",&a, &b);
/*
if(a>b){
    printf("Biggest NO: %d",a);

}else if(b>a){
    printf("Biggest No: %d",b);
}

//Ternary operator:

int abs = (a>b)? (a) : ((b>a)?(b):"");

printf("%d",abs);
*/

/*
int n;

scanf("%d",&n);

int sum = 0;
for(int i= 50; i>=n; i--){

printf("%d\n",i);
    sum+=i;

}
printf("\n");
printf("%d",sum);
*/

/*
int n;

scanf("%d",&n);

int sum = 0;
for(int i=1; i<=n; i++){

printf("%d\n",i);
    sum+=i;

}
printf("\n");
printf("%d",sum);

*/

/*
int n;

scanf("%d",&n);

int sum = 0;
for(int i= 2; i<=n; i=i+3){

printf("%d\n",i);
    sum+=i;

}
printf("\n");
printf("%d",sum);
*/

/*
int n;

scanf("%d",&n);

int sum = 0;
for(int i= n; i>=1; i=i-3){

printf("%d\n",i);
    sum+=i;

}
printf("\n");
printf("%d",sum);
*/


//Pramid print:

/*
int n;
scanf("%d",&n);

int count =1;
for(int i =1; i<=n; i++){
    for(int j=1; j<=i; j++){
    printf("%d ",count);
        count++;
    }

    printf("\n");
}
*/

//positive and nagative:

/*
int n;

scanf("%d",&n);

if(n<0){
    printf("-1");
}
else if(n>0){
    printf("1");
}
else{
    printf("0");
}

*/

// Extract max_number:
/*
int a,b;
scanf("%d %d",&a, &b);
int max_ab;

//Use if else:
if(a>b){
   max_ab=a;
}
else{
   max_ab=b;
}

printf("%d",max_ab);


//Use Ternary oparetor:
max_ab = a>b? a:b;
printf("%d",max_ab);

*/


//water contain programm:

/*
int a,b,c;

scanf("%d %d %d",&a,&b,&c);

int water_left = a-b;

if(water_left>=c){
printf("0");

}
else{
    c -= water_left;
    printf("%d",c);
}

*/

//other way can write:

int a,b,c;

scanf("%d %d %d",&a,&b,&c);

int water_left = a-b;

int water_pured = water_left<c ? water_left : c;

c -= water_pured;

printf("%d",c);



return 0;
}




