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
	
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&x); 
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&y);
	
	printf("�� ū ����%d�Դϴ�.",max(x,y));
	
	return 0;
	 
}
