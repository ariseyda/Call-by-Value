#include<stdio.h>

//Call by Value

void callby_value(int a,int b);

int main(){
	
	int x,y;
	
	printf("Please enter two integers:");
	scanf("%d %d",&x,&y);
	
	callby_value(x,y);
	
	printf("x:%d and y:%d",x,y);
	
	return 0;
}

void callby_value(int a,int b){
	
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("a:%d and b:%d\n",a,b);
	
	
	
}

