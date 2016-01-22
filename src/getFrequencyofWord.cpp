/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i = 0, k, count = 0, len1 = 0, len2 = 0, j = 0, len = 0, flag = 0;
	while (word[len2] != '\0')
	{
		len2++;
	}
	while (1){
		flag = 0;
		k = i++;
		while (str[k] == word[j])
		{
			len++;
			j++;
			k++;
			flag = 1;
			if (str[k] == '\0')
				break;
		}
		if (len == len2)
		{
			j = 0;
			len = 0;
			count++;

		}
		if (str[k] == '\0')
			break;
		if (flag == 0)
			k++;
	}
	return count;
}
int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

