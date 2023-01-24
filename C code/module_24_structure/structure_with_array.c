
#include<stdio.h>

struct Date {

    int day;
    int month;
    int year;

};

struct student {

    char* name[100];
    int class;
    int roll;

    struct Date dob;
};

void getDate(struct Date date){

    printf("%d-%d-%d",date.day,date.month,date.year);

}

void printStudent(struct student st){

        printf("Name: %s\n",st.name);
        printf("Class: %d \n",st.class);
        printf("Roll: %d \n",st.roll);
        printf("DOB: ");
        getDate(st.dob);


}

int main(){

    struct student s1 ={.class =9,.roll = 10,.dob ={1,1,2022}};

    char name[] ="Mehedi Hasan";

    strcpy(s1.name,name);

    printStudent(s1);

return 0;
}
