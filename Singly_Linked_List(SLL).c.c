#include<stdio.h>
struct node{
int data;
struct node *next;

};
struct node *start=0;

struct node *createnode(){
struct node *h1;
h1=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the data:");
scanf("%d",&h1->data);
h1->next=0;

return h1;
}

void insertstart(){
    struct node *kl;
kl=createnode();
if(start==0){
    start=kl;
}
else{
    kl->next=start;
    start=kl;
}


}
insertend(){
    struct node *c1,*g;
    c1=createnode();
    if(start==0){
        start=c1;
    }
    else{
        g=start;
        while(g->next!=0){
            g=g->next;
        }
        g->next=c1;
    }



}

 insertmiddle(){

 struct node *h1,*j,*f;
 h1=createnode();

 if(start==0){
    start=h1;
 }
 else{
    int d;
    printf("enter the element you want to add:");
    scanf("%d",&d);
    f=start;
    while(f->next->data!=d){
        f=f->next;
    }
    j=f->next;
    f->next=h1;
    h1->next=j;
 }

 }
void deletestart(){
    struct node *p1;
    if(start==0){
        printf("there is no any node to delete");
    }
    else{
        p1=start;
        start=start->next;
        p1->next=0;
        free(p1); // free keyboard se ye node delete ho jayega esliye free use kiya jada h
    }

}
deleteend(){
struct node *k,*pr;
if(start==0){
    printf("No element in this list");
}
else{
    k=start;
while(k->next->next!=0){
    k=k->next;
}
  pr=k->next;
    k->next=0;
    free(pr);

}
}
deletemiddle(){
    struct node *g,*h,*p;

if(start==0){
    start=("no any node are present in this list: ");

}
else{
    int d;
    g=start;
    printf("Enter a data that you want to delete: ");
    scanf("%d",&d);
    while(g->next->data!=d){
        g=g->next;
    }
    p=g->next->next;
    g->next->next=0;
    h=g->next;
    g->next=p;
    free(h);
}



}
display(){
struct node *p;
p=start;
while(p!=0){
    printf("%d ",p->data);
     p= p->next;
}


}

int main(){
while(1){
    printf("\nn1.Insert from Start");
    printf("\nn2.Insert from End");
    printf("\nn3.Insert from Middle");
    printf("\nn4.Delete from Start");
    printf("\nn5.Delete from End");
    printf("\nn6.Delete from Middle");
    printf("\nn7.Desplay");
    printf("\nn8.Exit");

    int choise;
    printf("\nEnter You Choise:");
    scanf("%d",&choise);
    switch(choise){
    case 1:{
        insertstart();
        break;

    }

    case 2:{
        insertend();
        break;

    }
    case 3:{
        insertmiddle();
        break;
    }

    case 4:{
        deletestart();
        break;

    }

    case 5:{
        deleteend();
        break;
    }

    case 6:{
        deletemiddle();
        break;

    }

    case 7:{
        display();
        break;
    }

    case 8:{
        exit(0);

    }
    default:
     printf("wrong input");


    }
    }
return 0;
}

