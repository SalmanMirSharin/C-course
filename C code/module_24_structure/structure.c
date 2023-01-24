
//#include<stdio.h>
//
//struct student {
//
//    int roll;
//
//    float cgpa;
//
//    char name[100];
//
//};
//
//void studentInfo(struct student s1);
//
//int main(){
//
////    struct student s1;
////
////    s1.roll= 1664;
////    s1.cgpa = 9.2;
////    strcpy(s1.name,"Mehedi");
////
////    printf("Name: %s \nRoll: %d \ncgpa: %f \n",s1.name,s1.roll,s1.cgpa);
////
////    printf("\n");
////    struct student s2;
////
////    s2.roll = 1660;
////    s2.cgpa = 8.7;
////    strcpy(s2.name,"Abir");
////
////    printf("Mane: %s \nRoll: %d \ncgpa: %f \n",s2.name,s2.roll,s2.cgpa);
////
////    printf("\n");
////
////    struct student s3;
////
////    s3.roll =16663;
////    s3.cgpa = 8.6;
////    strcpy(s3.name,"Ranbir");
////
////    printf("Name: %s \nRoll: %d \ncgpa: %f \n",s3.name,s3.roll,s3.cgpa);
//
//
//
//
//
////Array of structure:
//
////
////  struct student ece[100];
////
////  ece[0].roll = 1664;
////  ece[0].cgpa = 9.2;
////  strcpy(ece[0].name,"Mehedi");
////
////  printf("Name: %s \nRoll: %d \ncgpa: %f \n",ece[0].name,ece[0].roll,ece[0].cgpa);
//
//
////structure Initialisation:
//
// struct student s1= {1664, 9.2, "Mehedi"};
//
//    studentInfo(s1);
//
//    printf("Roll: %d \n",s1.roll);
//
//// printf("Roll: %d \ncgpa: %f \nName: %s \n",s1.roll,s1.cgpa,s1.name);
////
//// printf("\n");
//// struct student *ptr = &s1;
////
//// printf("Roll: %d \ncgpa: %f \nName: %s \n",(*ptr).roll,(*ptr).cgpa,(*ptr).name);
////
//// printf("\n");
//
//
//
//
//
//
//return 0;
//}
//
//
//void studentInfo(struct student s1){
//
//     printf("Roll: %d \nName: %s \ncgpa: %f \n",s1.roll,s1.name,s1.cgpa);
//
//    s1.roll = 1660;
//}






//
//#include<stdio.h>
//
//  typedef struct student{
//
//    int roll;
//    float cgpa;
//    char name[100];
//
//
//}stu;
//
//int main(){
//
//    stu s1;
//
//    s1.roll = 1770;
//    s1.cgpa = 9.4;
//    strcpy(s1.name,"Mehedi");
//
//    printf("Roll: %d \ncgpa: %f \nname: %s \n",s1.roll, s1.cgpa, s1.name);
//
//
//return 0;
//}


//Five person Address store:
//#include<stdio.h>
//
//struct address {
//
//    int house;
//    int block;
//    char city[100];
//    char state[100];
//
//
//};
//
//void addressInfo(struct address s1);
//
//int main(){
//
//    struct address adds[5];
//
//    printf("Person 1 Address: ");
//    scanf("%d",&adds[0].house);
//    scanf("%d",&adds[0].block);
//    scanf("%s",adds[0].city);
//    scanf("%s",adds[0].state);
//
//
//    printf("Person 2 Address: ");
//    scanf("%d",&adds[1].house);
//    scanf("%d",&adds[1].block);
//    scanf("%s",adds[1].city);
//    scanf("%s",adds[1].state);
//
//
//    printf("Person 3 Address: ");
//    scanf("%d",&adds[2].house);
//    scanf("%d",&adds[2].block);
//    scanf("%s",adds[2].city);
//    scanf("%s",adds[2].state);
//
//
//
//    printf("Person 4 Address: ");
//    scanf("%d",&adds[3].house);
//    scanf("%d",&adds[3].block);
//    scanf("%s",adds[3].city);
//    scanf("%s",adds[3].state);
//
//
//
//    printf("Person 5 Address: ");
//    scanf("%d",&adds[4].house);
//    scanf("%d",&adds[4].block);
//    scanf("%s",adds[4].city);
//    scanf("%s",adds[4].state);
//
//    addressInfo(adds[0]);
//    addressInfo(adds[1]);
//    addressInfo(adds[2]);
//    addressInfo(adds[3]);
//    addressInfo(adds[4]);
//
//
//return 0;
//}
//
//void addressInfo(struct address add){
//
//printf("Address is: %d, %d, %s, %s \n",add.house, add.block, add.city, add.state);
//
//}


//Two vector calculate:
//#include<stdio.h>
//
//struct vector {
//
//    int x;
//    int y;
//
//
//};
//
//void calSum(struct vector v1,struct vector v2, struct vector sum);
//
//
//int main(){
//
//    struct vector v1 = {5,10};
//    struct vector v2 = {3,7};
//
//    struct vector sum ={0};
//
//    calSum(v1,v2,sum);
//
//}
//
//void calSum(struct vector v1,struct vector v2, struct vector sum){
//
//    sum.x = v1.x + v2.x;
//    sum.y = v1.y + v2.y;
//
//    printf("Sum of x is: %d \n",sum.x);
//    printf("Sum of y is: %d \n",sum.y);
//
//}

//complex number stor:
//#include<stdio.h>
//
//struct complex {
//    int real;
//    int img;
//};
//
//int main(){
//
//struct complex number1 = {7,9};;
//struct complex *ptr = &number1;
//
//printf("Real: %d \n",ptr->real);
//printf("Imgi: %d \n",ptr->img);
//
//
//}


//struct vector:
//#include<stdio.h>
//
// typedef struct accountAdd {
//
//    int accou;
//    char name[100];
//
//}acc;
//
//int main(){
//    acc acc1 ={123,"Mehedi"};
//    acc acc2 ={124,"Saradda"};
//    acc acc3 ={125,"Orpi"};
//
//    printf("Account: %d \n",acc1.accou);
//    printf("Name: %s \n",acc1.name);
//
//
//return 0;
//}




#include<stdio.h>

struct Date {

    int day;
    int month;
    int year;

};

int main(){

    struct Date date1 = {1,3,2022};

    date1 = (struct Date){6,1,2022};

    date1.day =2;

    printf("%d %d %d",date1.day, date1.month,date1.year);

return 0;
}













