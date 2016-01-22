/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<string.h>

char * get_last_word(char * str){

	if (str == "")
		return "";
	char *result = (char*)malloc(10 * sizeof(char));
	int len = 0,i,flag=0,j=0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (flag == 0 && str[i] == ' ')
		{
			continue;			
		}
		if (str[i] != ' ')
		{
			result[j] = str[i];
			j++;
			flag = 1;
		}
		if (flag == 1 && str[i] == ' ')
		{
			break;
		}
	}
	result[j] = '\0';
	result = strrev(result);
	return result;
}
