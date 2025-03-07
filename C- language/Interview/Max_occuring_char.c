#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char getMaxOccurringChar(char str[])
{
	// Create a hash table (unordered_map) to store the
	// frequency of each character
	int count[256] = { 0 };

	// Traverse the string and update the frequency of each
	// character
	int length = strlen(str);
	for (int i = 0; i < length; i++)
		count[(int)str[i]]++;

	// Find the character with the maximum frequency
	char maxChar;
	int maxCount = 0;
	for (int i = 0; i < length; i++) {
		if (count[(int)str[i]] > maxCount) {
			maxCount = count[(int)str[i]];
			maxChar = str[i];
		}
	}

	return maxChar;
}

// Driver Code
int main()
{
	char str[] = "sample string";
	printf("Max occurring character is: %c\n",
		getMaxOccurringChar(str));
	return 0;
}
