
#include<stdio.h>
#include<stdbool.h>

struct Date {
    int day;
    int month;
    int year;

};

//bool isFirstDay(struct Date date){
//
//        return date.day == 1 && date.month == 1;
//}

struct Date getFirstDay(int year){

    struct Date ans = {1,1,year};

    return ans;
};

void printDate (struct Date d){

     printf("%d-%d-%d",d.day,d.month,d.year);

}

int main(){

    struct Date date =getFirstDay(2023);

    printDate(date);


//    if(isFirstDay(date)){
//
//        printf("Happy new year!");
//    }
//    else{
//        printf("It's not first day");
//    }

return 0;
}
