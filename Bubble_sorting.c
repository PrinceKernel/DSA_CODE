#include<stdio.h>
void bubble_short(int arr[] ,int n){
    int temp;
       for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
printf("after the short array : ");
for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[10];
    int n;
    printf("enter a range:");
    scanf("%d",&n);
    printf("enter %d number:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }   
   bubble_short(arr,n);
    return 0;
}
 