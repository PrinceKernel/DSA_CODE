#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=0;
struct node *createnode(){
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
printf("Enter the data : ");
scanf("%d",&p->data);
p->next=0;
return p;
}
insertfrist(){
   struct node *k;
   k=createnode();
   if(head==0){
    head=k;
   }
else{
    k->next=head;
    head=k;
}
}
insertmiddle(){
struct node *p,*f,*j;
p=createnode();
if(head==0){
    head=p;
}
else{
    int d;
    printf("\nEnter you data before add : ");
    scanf("%d",&d);
f=head;

while(f->next->data!=d){
    f=f->next;
}

j=f->next;
f->next=p;
p->next=j;

}
}
insertlast(){
struct node *h,*l;
h=createnode();
if(head==0){
    head=h;
}
else{
    l=head;
    while(l->next!=0){
        l=l->next;
    }
    l->next=h;
}
}
deletefrist(){
    struct node *p;
if(head==0){
    printf("any no node present don't delete : ");
}
else{
    p=head;
    head=head->next;
    p->next=0;
    free(p);
}

}
deletemiddle(){
    struct node *k,*p,*h;
if(head==0){
printf("any no node present don't delete : ");

}
else{
    int d;
    printf("enter the data before deleting node\n");
    scanf("%d",&d);
    p=head;
    while(p->next->data!=d){
        p=p->next;
    }
    k=p->next->next;
    p->next->next=0;
    h=p->next;
    p->next=k;
    free(h);
}

}
deletelast(){
    struct node *p,*k;
if(head==0){
    printf("any no node present don't delete : ");
}
p=head;

while(p->next->next!=0){
    p=p->next;
}
k=p->next;
p->next=0;
free(k);

}
void display(){
struct node *p;
p=head;
if(head==0){
    printf("\nno node are created : \n");

}
while(p!=0){
    printf("%d ",p->data);
    p=p->next;
}
}
int main(){
    printf("\n1. insert node at frist position : ");
    printf("\n2.insert node at middle position : ");
    printf("\n3.insert node at last position : ");
    printf("\n4. delete node at frist position : ");
    printf("\n5.delete node at middle position : ");
    printf("\n6.delete node at last position : ");
    printf("\n7.display list : ");
    printf("\n8.exit : ");
    while(1){
    int d;
    printf("\nEnter your choise : ");
    scanf("%d",&d);

switch(d){
    case 1:{
            insertfrist();
            break;
    }
    case 2:{
        insertmiddle();
        break;
    }
    case 3:{
        insertlast();
        break;
    }
    case 4:{
        deletefrist();
        break;
    }
    case 5:{
        deletemiddle();
        break;
    }
    case 6:{
        deletelast();
        break;
    }
    case 7:{
        display();
        break;
    }
    case 8:{
        exit(0);
    }
    default :{
        printf("\nwrong input : \n");
    }
}
    }
    return 0;
}
