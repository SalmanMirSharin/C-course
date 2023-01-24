
#include<stdio.h>

int main(){

int students;

printf("Enter number of student: ");

    scanf("%d",&students);

    int mark[students];

    for(int i=0; i<students; i++){

        printf("Enter student %d mark: ",i+1);
        scanf("%d",&mark[i]);
    }

    for(int i=0; i<students; i++){

        printf("%d student mark: %d \n",i+1, mark[i] );
    }

return 0;
}
