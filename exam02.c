#include<stdio.h>
int max(int x,int y)
{
	if(x>y)
	   return x;
	else
	   return y;
}
int main()
{
	int x,y;
	
	printf("정수를 입력하시오:");
	scanf("%d",&x); 
	printf("정수를 입력하시오:");
	scanf("%d",&y);
	
	printf("더 큰 값은%d입니다.",max(x,y));
	
	return 0;
	 
}
