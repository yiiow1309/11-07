#include<stdio.h>
void printoptions()
{
	printf("'c'¼·¾¾ ¿Âµµ¿¡¼­ È­¾¾ ¿Âµµ·Î º¯È¯\n");
	printf("'f'¼·¾¾ ¿Âµµ¿¡¼­ È­¾¾ ¿Âµµ·Î º¯È¯\n");
	printf("'q'Á¾·á\n");
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
		printf("¸Þ´º¸¦ ¼±ÅÃÇÏ¼¼¿ä.");
		choice = getchar();
		if(choice == 'q')break;
		else if(choice == 'c')
		{
			printf("¼·¾¾ ¿Âµµ:");
			scanf("%lf",&temp);
			printf("È­¾¾ ¿Âµµ:%lf\n",c2f(temp));
		}
		else if(choice == 'f')
		{
			printf("È­¾¾ ¿Âµµ:");
			scanf("%lf",&temp);
			printf("»ð¾¾ ¿Âµµ:%lf\n",f2c(temp));
		}
		getchar();
	}
	return 0;
}
