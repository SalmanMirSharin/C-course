
//Solve-D:
//#include <stdio.h>
//
//void n_set(int a[], int n){
//
//    for (int i=0; i<n; i++) {
//        for (int j = i+1; j<n; j++) {
//           if(a[i] > a[j]) {
//              int temp = a[i];
//               a[i] = a[j];
//               a[j] = temp;
//           }
//        }
//    }
//
//}
//
//int main()
//{
//    int n,m;
//    scanf("%d%d",&n,&m);
//
//    int a[n];
//    for (int i=0; i<n; i++)
//    {
//        scanf("%d",&a[i]);
//    }
//
//        n_set(a,n);
//
//    int sum=0;
//    for (int i = 0; i<m; i++)
//    {
//        if (a[i]>=0)
//        {
//            break;
//        }
//        sum+= a[i];
//    }
//    printf("%d\n",-sum);
//
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//
//
//int main(){
//	int n;
//	scanf("%d ",&n);
//	char str[n][50];
//
//	bool val = 0;
//	for(int i=0; i<n; i++){
//
//		scanf("%[^\n]%*c",&str[i]);
//
//		for(int j=0; j<i; j++){
//			if(strcmp(str[j],str[i])==0){
//				val = 1;
//			}
//		}
//	}
//	if(val){
//		printf("Yes\n");
//	}
//	else{
//		printf("No\n");
//	}
//
//	return 0;
//}




//Solve-I:
//#include<stdio.h>
//
//int main(){
//
//  long long int n;
//    scanf("%d",&n);
//
//     int val=1;
//    for(int i=0; i<n; i++){
//
//      printf("25");
//      return 0;
//
//    }
//
//    //int digit = val%100;
//
//    //printf("%d",val);
//
//return 0;
//}



//Solve-H:
//#include<stdio.h>
//
//int main(){
//
//        char ar[100];
//        scanf("%s",&ar);
//        int n = strlen(ar);
//
//    for(int i=0; i<n; i++){
//
//        for(int j=i+1; j<n; j++){
//
//            if(ar[j]<ar[i]){
//                int temp = ar[i];
//                ar[i] = ar[j];
//                ar[j] = temp;
//            }
//        }
//    }
//    int i;
//    for( i=0; i<n; i++){
//       if(ar[i]=='+'){
//        continue;
//       }
//       else{
//       printf("%c",ar[i]);
//            if(i==n-1){
//                break;
//            }
//            printf("+");
//       }
//
//    }
//
//return 0;
//}




//Solve-G:
//#include<stdio.h>
//
//int main(){
//
//    int l,r;
//    scanf("%d %d",&l,&r);
//
//    char ar[100000];
//
//
//    scanf("%s",ar);
//
//    int i=l-1, j=r-1;
//
//    while(i<j){
//        int temp = ar[i];
//        ar[i] = ar[j];
//        ar[j] = temp;
//
//        i++;
//        j--;
//    }
//
//   for(int i=0; i<strlen(ar); i++){
//
//        printf("%c",ar[i]);
//   }
//
//return 0;
//}


// F number proble N & K:
//#include<stdio.h>
//#include<math.h>
//
//int main(){
//
//    int n,k;
//
//    scanf("%d %d",&n,&k);
//    int val=1;
//    int sum =0;
//    int count=0;
//    for(int i=0; i<=n; i++){
//
//    val= val*2;
//        printf("%d \n",val);
//        count++;
//   // I will check again:
//        if(val>=k){
//                break;
//        }
//    }
//    //printf("%d \n",count);
//
//    int ks = abs(count-n);
//    //printf("%d \n",ks);
//
//        int total=0;
//    for(int j=0; j<ks; j++){
//
//        val+=k;
//    }
//
//    printf("%d",val);
//
//return 0;
//}



////Solve-F:
//#include<stdio.h>
//#include<math.h>
//
//int main(){
//
//    int N,K;
//
//    scanf("%d %d",&N,&K);
//
//    int val=1;
//    int count=0;
//
//    for(int i=1; i<=N; i++){
//
//        val= val*2;
//
//        count++;
//        if(val>=K){
//            break;
//        }
//    }
//
//    int ks = abs(count-N);
//
//        int total=0;
//    for(int j=1; j<=ks; j++){
//
//        val+=K;
//    }
////
//    printf("%d",val);
//
//return 0;
//}





//Solve-E:
//#include<stdio.h>
//
//void test_case(int n)
//{
//
//    scanf("%d",&n);
//
//    int a[n];
//    int arr[1001];
//    for(int i=0; i<n; i++){
//
//        scanf("%d",&a[i]);
//    }
//
//    for(int i=0; i<n-1; i++){
//        for(int j=i+1; j<n; j++){
//            if(a[j]<a[i]){
//                int temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//    }
//
//    for(int i=0; i<n; i++){
//
//        arr[i] = a[i+1]-a[i];
//    }
//
//
//    int min = arr[0];
//    for(int i=0; i<n; i++){
//
//        if(arr[i]<min){
//            int temp = arr[i];
//             arr[i] = min;
//            min = temp;
//
//        }
//    }
//
//    printf("%d \n",min);
//}
//
//int main(){
//
//    int t;
//    scanf("%d",&t);
//
//    for(int i=1; i<=t; i++){
//
//        int n;
//        test_case(n);
//
//    }
//
//    return 0;
//}



////Solve-A:
//#include<stdio.h>
//#include<stdbool.h>
//
//int main(){
//
//
//   while(true){
//        int n;
//        int c=0;
//      scanf("%d",&n);
//
//        c=n;
//
//        if(n==42){
//           break;
//        }
//
//
//       printf("%d ",c);
//      }
//
//return 0;
//}



//
////Solve-B:
//#include <stdio.h>
//#include<string.h>
//#include<stdbool.h>
//
//int main(){
//
//    char str[100];
//
//    scanf("%s", &str);
//    int count=0;
//    for(int i = 0; i <strlen(str); i++)
//    {
//        if(str[i] == 'a')
//            count++;
//    }
//    int len = strlen(str);
//    while(true)
//    {
//       int val = len/2 + 1;
//
//        if(count>=val) break;
//        len--;
//    }
//
//    printf("%d",len);
//
//    return 0;
//}





//
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//
//struct person{
//
//    char str[41];
//
//
//};
//
//int main(){
//    int n;
//	scanf("%d ",&n);
//
//    struct person ar[n];
//
//    for(int i=0; i<n; i++){
//
//        gets(ar[i].str);
//    }
//
//
//    for(int i=0; i<n; i++){
//
//        for(int j=i+1; j<n; j++){
//
//            if(strcmp(ar[i].str,ar[j].str)==0){
//                printf("Yes\n");
//                return 0;
//            }
//        }
//    }
//    printf("No\n");
//
//
//
//		return 0;
//}
//
//




























