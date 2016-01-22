/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
#include<stdio.h>
#include<malloc.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	if (str == NULL)
	{
		*vowels = 0;
		*consonants = 0;
	}
	else
	{
		int vlist[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
		int i = 0, j, v = 0, c = 0, flag = 0;
		while (str[i] != '\0')
		{
			char ch = str[i];
			flag = 0;
			if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
			{
				for (j = 0; j < 10; j++)
				{
					if (str[i] == vlist[j])
					{
						v++;
						flag = 1;
						break;
					}
				}
				if (flag == 0)
					c++;

			}
			i++;
		}
		*vowels = v;
		*consonants = c;
	}
}

