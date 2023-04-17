#include "main.h"

/**
 * count_spcs - a function that counts number of spaces in a string
 *
 * @spc_cnt: number of spaces passed by reference
 * @start_spc: a flag that indicates if first char is a space
 * @end_spc: a flag indicates if last char is a space
 * @str: string input
 *
 * Return: always void
 */

void count_spcs(int *spc_cnt, int *strt_spc, int *end_spc, char *str)
{
  int i = 0, len = strlen(str);

  for (; i < len; i++)
    {
      if ((str[i] == '\t' || str[i] == ' ') && i == 0)
	*(spc_cnt) += 1, *(strt_spc) += 1;
      else if ((str[i] == '\t' || str[i] == ' ') && i == len - 1)
	*(spc_cnt) += 1, *(end_spc) += 1;

      else
	*(spc_cnt) += 1;
    }
}

/**
 * strtow - a function that splits a string into words
 *
 * @str: string to be splitted
 *
 * Return: pointer to an array of strings, or NULL in case of any failure
 */

char **strtow(char *str)
{
  char **words;
  int total_len = 0, word_len = 0, i = 0,
    spaces_cnt = 0, start_spc = 0, end_spc = 0,
    j = 0, k = 0, len = strlen(str);
  
  if (!str)
    return (NULL);

  count_spcs(&spaces_cnt, &start_spc, &end_spc, str);

  if (start_spc == 0 && end_spc == 0)
    total_len = spaces_cnt + 1;
  else if (start_spc == 0 || end_spc == 0)
    total_len = spaces_cnt;
  else
    total_len = spaces_cnt - 1;

  words = malloc(total_len * sizeof(char *));

  for (; i < total_len; i++)
    {
	  word_len = 0;
	  j = k;
	  while (*(str + j) != '\0' && (*(str + j) != ' ' || *(str + j) != '\t'))
	    {
	      if ((*(str + j) >= 'a' && *(str + j) <= 'z')
		  || (*(str + j) >= 'A' && *(str + j) <= 'Z'))
		{
		  word_len++;
		}
	      j++;
	    }
	  k = j;
	  words[i] = malloc(sizeof(char) * word_len + 1);
    }

  return (words);
}
