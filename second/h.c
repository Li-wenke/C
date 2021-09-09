
#include <stdio.h>
int main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		if (i % 1 == 0 || i % i == 0)
		{
			printf("%d\n", i);
			break;
		}
		else{ break; }
	}
	return 0;
}