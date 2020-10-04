#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
}*start=NULL,*temp=NULL;
void creation(int item)
{
struct node*p;
p=(struct node*)malloc(sizeof(struct node));
p->data=item;
p->link=NULL;
if(start==NULL)
{
start=p;
}
else
{
temp=start;
while(temp->link!=NULL)
{
temp=temp->link;	
}
temp->link=p;
}
}


void display()
{
if(start==NULL)
{
printf("List is empty");
return;
}
else
{printf("link list:\n");
temp=start;
while(temp->link!=NULL)
{
printf("%d\n",temp->data);
temp=temp->link;
}
printf("%d\n",temp->data);
}
}


void Insertion_at_begining(int item)
{	struct node*p;
p=(struct node*)malloc(sizeof(struct node));
p->data=item;
p->link=NULL;
if(start==NULL)
{
creation(item);
}
else
{
p->link=start;
start=p;
}
}


void Specific_insertion(int item)
{
struct node*p;
p=(struct node*)malloc(sizeof(struct node));
p->data=item;
p->link=NULL;
int i,position;
printf("Enter the position");
scanf("%d",&position);
temp=start;
for(i=1;i<=position-2;i++)
{
temp=temp->link;
}
p->link=temp->link;
temp->link=p;
}


void End_insertion(int n,int item)
{
int i;
temp=start;
struct node*p;
p=(struct node*)malloc(sizeof(struct node));
p->data=item;
p->link=NULL;
for(i=1;i<=n-1;i++)
{
temp=temp->link;
}
temp->link=p;
}

void Del_beg()
{
		struct node*old;
old=(struct node*)malloc(sizeof(struct node));
	old=start;
	start=start->link;
	printf("deletion success");
}

void Del_end()
{
	struct node*old;
old=(struct node*)malloc(sizeof(struct node));
old=start->link;
temp=start;
while(old->link!=NULL)
{
	temp=old;
	old=old->link;
		
}
temp->link=NULL;
printf("deletion success");
}

void Del_req_pos(int pos)
{  int i;
	struct node*old;
old=(struct node*)malloc(sizeof(struct node));
temp=start;
old=start->link;
for(i=0;i<pos-2;i++)
{
	temp=old;
	old=old->link;
}
temp->link=old->link;
}

int main()
{
int item,i,n,selection,position;
label:
printf("\nEnter 1 to create");
printf("\nEnter 2 to display");
printf("\nEnter 3 to add at begining");
printf("\nEnter 4 to add at req. position");
printf("\nEnter 5 to add at end");
printf("\nEnter 6 to delete at beginning");
printf("\nEnter 7 to delete at end");
printf("\nEnter 8 to delete at req pos");
printf("\nyour selection:");
scanf("%d",&selection);

if(selection==1)
{
printf("Enter no. of nodes:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&item);
creation(item);
}
goto label;
}

else if(selection==2)
{
display();
goto label;
}

else if(selection==3)
{
printf("New Element");
scanf("%d",&item);
Insertion_at_begining(item);
goto label;
}

else if(selection==4)
{
printf("New element");
scanf("%d",&item);
Specific_insertion(item);
goto label;
}

else if(selection==5)
{
printf("New element");
scanf("%d",&item);
End_insertion(n,item);
goto label;} 

else if(selection==6)
{
	Del_beg();
	goto label;
}

else if(selection==7)
{
	Del_end();
		goto label;
}
else if (selection==8)
{   int po;
    printf("choose pos to delete:");
    scanf("%d",&po);
	Del_req_pos(po);
	goto label;

}
}

