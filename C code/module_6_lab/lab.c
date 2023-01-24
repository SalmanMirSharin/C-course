
#include<stdio.h>

int main(){

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






//GPA Calculating:


int subjects;

scanf("%d",&subjects);
int total_grade_point = 0;
for(int i=1; i<=subjects; i++){
 printf("Enter marks: ");

int marks, grade_point;

scanf("%d",&marks);

if(marks>=80){
    printf("Grade: A+ \n");
    grade_point = 5;
}
else if(marks>=70){
    printf("Grade: A \n");
    grade_point =4;
}
else if(marks>=60){
    printf("Grade: B \n");
    grade_point = 3;
}
else if(marks>=50){
    printf("Grade: C \n");
    grade_point = 2;
}
else if(marks>=40){
    printf("Grade: D \n");
    grade_point = 1;
}
else{
    printf(" Grade: F \n");
    grade_point = 0;
}
 total_grade_point+= grade_point;
printf("Grade point: %d \n",grade_point);


}

double gpa = (double)total_grade_point/subjects;

printf("GPA: %0.2lf",gpa);

return 0;
}
