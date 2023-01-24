
/*
Problem 1;

#include<stdio.h>


int main(){

printf("Hello World");


return 0;
}
*/



/*
Problem 2;


#include<stdio.h>
int x,y,z;
int main(){

int harry,larry;

scanf("%d %d",&harry,&larry);

if(harry<=10){
   larry = larry-1;
    printf("%d ",larry);
}

if(larry<=10){

harry = harry-1;
printf("%d\n",harry);
}

return 0;
}
*/


/*
Problem 3;

#include<stdio.h>

int main(){

int n,a,b;

scanf("%d %d %d",&n,&a,&b);

int area = 2*n*a*b;
//needed sulphide
printf("%d \n",area);
return 0;
}

*/


/*#include<stdio.h>


int main(){

int a, b, h;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&h);

int trapezoid_area = (a+b)*h/2;
printf("%d",trapezoid_area);

return 0;
}
*/

/*#include<stdio.h>

int main(){

double T,X;

scanf("%lf %lf",&T,&X);

double A_world = T/X;

printf("%.10lf",A_world);


return 0;
}
*/


/*#include<stdio.h>


int main(){

int abul_age,avarage,babul_age ;

scanf("%d %d",&abul_age,&avarage);


babul_age = (avarage*2)-abul_age;

printf("%d",babul_age);


return 0;
}
*/


#include<stdio.h>


int main(){

int H,W,h,w;

scanf("%d %d",&H,&W);
scanf("%d %d",&h,&w);

int row = H -h;
int col = W-w;

int total = row*col;

printf("%d",total);





return 0;
}












