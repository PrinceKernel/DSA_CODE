#include<stdio.h>
struct node{
    struct node *prev;
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
h1->prev=0;
return h1;
}

void insertstart(){
    struct node *c1;
c1=createnode();
if(start==0){
    start=c1;
}
else{
   c1->next=start;
   start->prev=c1;
   start=c1;
}

}
insertend(){
    struct node *dl,*y1;
    dl=createnode();
    if(start==0){
        start=dl;
    }
    else{

      y1=start;
      while(y1->next!=0){
        y1=y1->next;
      }
      y1->next=dl;
      dl->prev=y1;
    }

}

 insertmiddle(){
//ye nhi hua h
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
    j->next->prev=h1;
    h1->prev=j;
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
        start->prev=0;
        p1->next=0;
        free(p1); // free keyboard se ye node delete ho jayega esliye free use kiya jada h
    }

}
deleteend(){
struct node *k,*pr;
if(start==0){
    printf("No element in this list");
}
else
{

    if(start->next==0){
        free(start);
        start=0;
    }
    else{

    k=start;
while(k->next->next!=0){
    k=k->next;
}
  pr=k->next;
  pr->prev=0;
  k->next=0;
    free(pr);


    }
}

}
deletemiddle(){
    //ye nhi hua h
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
   p=g->next;
   h=g->next->next;
   g->next=h;
   h->prev=g;
   p->next=0;
   free(p);
}



}
display(){
struct node *p;
p=start;
if(start==0){
    printf("there is no any node to display");
}
else{
    while(p!=0){
    printf("%d ",p->data);
     p= p->next;
}
}


//while(p->prev!=0){
//    printf("%d ",p->data);
//    p=p->prev;
//}


}

int main(){

    printf("\nn1.Insert from Start");
    printf("\nn2.Insert from End");
    printf("\nn3.Insert from Middle");
    printf("\nn4.Delete from Start");
    printf("\nn5.Delete from End");
    printf("\nn6.Delete from Middle");
    printf("\nn7.Desplay");
    printf("\nn8.Exit");
while(1){
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

