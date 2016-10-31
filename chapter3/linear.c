/*
*
* Implement linear search
* Peter Strawn
* CS50 AP
*
*/

#include <cs50.h>
#include <stdio.h>

#define LENGTH 10

int main(void)
{
	// declare array of 10 numbers
	int haystack[LENGTH] = { 9, 7, 3, 4, 2, 8, 1, 6, 0, 5 };
	
	// get needle to find in haystack
	printf("Tell me the integer you are looking for: ");
	int needle = GetInt();
	
	// iterate through list to find item
	for (int i = 0; i < LENGTH; i++)
	{
		if (needle == haystack[i])
		{
			printf("Needle found at index %d!\n", i);
			return 0;
		}
	}
	
	printf("Needle not in haystack!\n");
	return 1;
}
