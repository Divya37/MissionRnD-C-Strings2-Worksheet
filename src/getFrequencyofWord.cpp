/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int _len(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}
int count_word_in_str_way_1(char *str, char *word){
	int i, j, count = 0, size = 0, temp = 0;
	for (i = 0; i < _len(str); i++)
	{
		temp = 0;
		size = 0;
		if (word[size] == str[i])
		{
			for (j = i + 1; j < _len(str); j++)
			{
				if (word[++size] == str[j])
					temp++;
				else
					break;
			}
			if (temp == (_len(word) - 1))
				count++;
			
		}
	}
	return count;
}

//int count_word_int_str_way_2_recursion(char *str, char *word){
	//return 0;
//}

