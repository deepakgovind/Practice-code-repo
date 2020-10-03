#include<stdio.h>
struct Rectangle
{
	int l;
	int b;
};

void initialize_struct(struct Rectangle *r,int l,int b)
{
	r->l=l;
	r->b=b;
}

void change_length(struct Rectangle *r,int l)
{
	r->l=l;
}

int area(struct Rectangle r)
{	printf("%d",area(R));
	return r.l*r.b;
}

int main()
{
	struct Rectangle R;
	 initialize_struct(&R,5,10);
	printf("%d\n",area(R));
    change_length(&R,10);
     printf("%d",area(R));
	return 0;
}
