#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int num = 0;
	int num1 = rand() % 20;
	int num2 = rand() % 20;

	for (int i = 1; i <= 10; i++)
	{
		printf("[ %d/10 ] %d + %d = %d", i, num1, num2);
		scanf("%d", &num);
	}
	
}