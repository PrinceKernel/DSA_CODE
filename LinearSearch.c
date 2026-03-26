#include<stdio.h>
int main(){
   int r,a[100],search,k=0;
   printf("enter the range -> ");
   scanf("%d",&r);
   printf("enter the number -> ");
   for(int i=0;i<r;i++){
    scanf("%d",&a[i]);
   }
   printf("enter the number you want to search -> ");
   scanf("%d",&search);
  for(int i=0;i<r;i++){
    if(a[i]==search){
        printf("number is found its index =%d",i+1);
        k++;
        break;
    }
  }
  if(k==0){
    printf("number is not found");
  }
return 0;
}
