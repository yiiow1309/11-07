#include<stdio.h>
void printoptions()
{
	printf("'c'���� �µ����� ȭ�� �µ��� ��ȯ\n");
	printf("'f'���� �µ����� ȭ�� �µ��� ��ȯ\n");
	printf("'q'����\n");
}

double c2f(double c_temp)
{
	return 9.0/5.0*c_temp +32;
}
double f2c(double f_temp)
{
	return (f_temp - 32) * 5.0 /9.0;
	
}
int main()
{
	char choice;
	double temp;
	
	while(1){
		printoptions();
		printf("�޴��� �����ϼ���.");
		choice = getchar();
		if(choice == 'q')break;
		else if(choice == 'c')
		{
			printf("���� �µ�:");
			scanf("%lf",&temp);
			printf("ȭ�� �µ�:%lf\n",c2f(temp));
		}
		else if(choice == 'f')
		{
			printf("ȭ�� �µ�:");
			scanf("%lf",&temp);
			printf("�� �µ�:%lf\n",f2c(temp));
		}
		getchar();
	}
	return 0;
}
