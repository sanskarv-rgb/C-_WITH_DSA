// #include<stdio.h>
// int main(){
//     int a[]={1,2,3,4,5};
//     int add=0;
//     for(int i=0;i<5;i++){
//         add+=a[i];
//     }
//     printf("%d",add);
// }

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("max=%d min=%d",max,min);
}