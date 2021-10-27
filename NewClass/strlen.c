#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

size_t my_strlen(const char* arr)
{
	assert(arr);
	size_t count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}