#include <stdio.h>
#include <string.h>
void printFrequency(int freq[])
{
	for (int i = 0; i < 26; i++) 
	{
		// If frequency of the
		// alphabet is non-zero
		if (freq[i] != 0) 
		{
			// Print the character and
			// its respective frequency
			printf("%c - %d\n",
				i + 'a', freq[i]);
		}
	}
}

void findFrequncy(char S[])
{
	int i = 0;

	// Stores the frequencies
	// of each character
	int freq[26] = { 0 };

	// Traverse over the string
	while (S[i] != '\0') {

		// Increment the count of
		// each character by 1
		freq[S[i] - 'a']++;

		// Increment the index
		i++;
	}
	printFrequency(freq);
}

// Driver Code
int main()
{
	char S[100] = "geeksforgeeks";
	findFrequncy(S);
}
