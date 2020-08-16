#include<stdio.h>
#include<math.h>
int main()
{
	int i, n = 0;
	double a, b, x, sd, sum = 0;
	scanf_s("%lf %lf", &a, &b);
	x = (a + b) / 2;

	if (a < b)
	{
		for (i = a; i <= b; i++)
		{
			sum = sum + ((i - x) * (i - x));
			printf("%d ", i);
			n++;
		}
	}
	else if (a > b)
	{
		for (i = b; i <= a; i++)
		{
			sum = sum + ((i - x) * (i - x));
			printf("%d ", i);
			n++;
		}
	}
	if (a == b)
	{
		printf("%lf", a);
		printf("\naverage = %lf\n", a);
		printf("SD = 0");
	}
	else
	{
		sd = sqrt(sum / (n - 1));
		printf("\naverage = %.2lf\n", (a + b) / 2);
		printf("SD = %.2lf", sd);
	}
	return 0;
}