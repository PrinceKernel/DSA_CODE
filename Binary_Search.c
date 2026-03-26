#include<stdio.h>
int main(){
int n;
printf("enter the digit of number in this array -> ");
scanf("%d",&n);
int arr[n];
printf("enter the number  %d number in this array -> ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int search ;
printf("enter the number you want to search -> ");
scanf("%d",&search);
int l,r,m;
l=0;
r=n-1;
while(l<=r){
        m=(l+r)/2;
if(arr[m]==search){
        printf("number is found its index %d",m+1);
break;
}
else if(arr[m]>search){
    r=m-1;
}
else if(arr[m]<search){
    l=m+1;
}
}
if(l>r){
    printf("number is not found");
}
return 0;
}
