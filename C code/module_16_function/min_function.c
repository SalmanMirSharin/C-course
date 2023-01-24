
#include<stdio.h>

int getMin(int a, int b){

    if(a<b)     return a;
    else        return b;

}


int main(){


    int n;

    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++){

        scanf("%d", &a[i]);
    }


    int ans =a[0];

    for(int i=0; i<n; i++){

    //I HAVE A QUESTION HERE , HOW ARRAY SEARCH ALL NUMBER;
        ans = getMin(ans,a[i]);
    }

    printf("Min Value is %d",ans);


    // get integer minimum;

//    int a, b, c;
//
//    scanf("%d %d %d",&a,&b,&c);
//
//    int temp = getMin(a,b);
//    int temp2 = getMin(temp,c);
//
//    printf("%d",temp2);


//  get out minimmum lengthy process;

//    int temp;
//
//    if(a<b){
//        temp =a;
//    }
//    else{
//        temp =b;
//    }
//
//    int temp2;
//
//    if(temp < c){
//        temp2 = temp;
//    }
//    else{
//        temp2 = c;
//    }
//
//    printf("%d",temp2);


return 0;
}
