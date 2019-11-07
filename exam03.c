#include<stdio.h>
int fact(int a)
{
	int i,fact=1;
	for(i=1; i<=a; i++)
         fact*=i;
	    
	return fact;
	
}
int main()
{
	int num;
	
	printf("알고 싶은 팩토리얼의 값은?");
	scanf("%d",&num);
	
	printf("%d의 값은 %d입니다.\n",num,fact(num));
	
	
	return 0; 
}
