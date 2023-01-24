

//#include<stdio.h>
//
//struct student {
//
//    char name[100];
//    int roll;
//    int mark;
//    int last_mark[100];
//
//};
//
//int main(){
//    struct student s1={"Mehedi",.mark=80,.roll=40};
//    struct student s2={"Mehedi",.mark=70,.roll=30};
//
//
//
//    if(s1.mark<s2.mark){
//         printf("Name->%s Roll->%d mark->%d",s1.name,s1.roll,s1.mark);
//
//    }
//    else{
//         printf("Name->%s Roll->%d mark->%d \n",s2.name,s2.roll,s2.mark);
//    }
//
//
//    for(int i=0; i<5; i++){
//
//        scanf("%d",&s1.last_mark[i]);
//    }
//
//
//    for(int i=0; i<5; i++){
//
//        printf("%d ",s1.last_mark[i]);
//    }

//
//
//return 0;
//}


//Video 3:
//#include<stdio.h>
//
//struct student{
//
//    char name[100];
//    int roll;
//    int mark;
//
//};
//
//
//int main(){
//
//    int n;
//    scanf("%d",&n);
//
//    struct student height={.mark=0};
//
//    for(int i=0; i<n; i++){
//
//       struct student a;
//       scanf("%s %d %d",&a.name,&a.roll,&a.mark);
//
//       if(a.mark>height.mark){
//
//            height =a;
//       }
//
//    }
//
//    printf("%s %d %d",height.name,height.roll,height.mark);
//
//
//return 0;
//}




//#include<stdio.h>
//
//struct student{
//
//    char name[100];
//    int roll;
//    int mark;
//
//};
//
//void print_struct(struct student a){
//
//     printf("%s %d %d",a.name,a.roll,a.mark);
//}
//
//
////void fun(struct student *st){
////
////        st->mark = 96;
//
//}
//
//int main(){
//
//    struct student a={"Mehedi",40,95};
//
//        fun(&a);
//
//        print_struct(a);
//
//
//return 0;
//}
//



#include<stdio.h>

struct student{

    char name[100];
    int roll;
    int mark;

};

void print_struct(struct student a){

     printf("%s %d %d \n",a.name,a.roll,a.mark);
}

void fun(struct student *st){

    st[0].mark = 100;
}

int main(){


      struct student a[5];

      for(int i=0; i<5; i++){

            scanf("%s %d %d",&a[i].name,&a[i].roll,&a[i].mark);

      }

      fun(a);

      for(int i=0; i<5; i++){

        print_struct(a[i]);
      }


return 0;
}

















