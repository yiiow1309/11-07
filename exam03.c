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
	
	printf("�˰� ���� ���丮���� ����?");
	scanf("%d",&num);
	
	printf("%d�� ���� %d�Դϴ�.\n",num,fact(num));
	
	
	return 0; 
}
