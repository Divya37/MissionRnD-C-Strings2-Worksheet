/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int len(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}
char *reverse(char *str)
{
	int i, j;
	char temp;
	for (i = 0, j = len(str) - 1; i <= len(str) / 2 && j >= len(str) / 2; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return str;
}
char * get_last_word(char * str){
	int i, flag = 0, size = 0;
	char *output;
	if (str == NULL)
		return NULL;
	output = (char *)malloc(sizeof(char)*len(str));
	for (i = len(str) - 1; i >= 0; i--)
	{
		if (str[i] == ' ')
		{
			if (flag == 1)
				break;
		}
		else
		{
			output[size++] = str[i];
			flag = 1;
		}
	}
	output[size] = '\0';
	output = reverse(output);
	//printf("output:%s\n", output);
	return output;
}
