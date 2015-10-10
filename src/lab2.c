#include <stdio.h>
#include <ctype.h>

/* for (i = 0; s[i] != '\0'; i++) */

size_t str_find_last(const char s[], int c);
size_t str_replace_all(char s[], int oldc, int newc);
int str_all_digits(const char s[]);
int str_equal(const char s[], const char t[]);

int main(void)
{
	char s1[] = "hello world";
	char s2[] = "hello world";
	char s3[] = "dfs554s";
	char s4[] = "5432343";
	char s5[] = "my people";
	char s6[] = "my people";
	char s7[] = "my peeps";

	printf("\n");
	printf("first function, last occurrence of character\n");
	printf("--------------------------------------------\n");
	printf("l: %d\n", str_find_last(s2, 'l'));
	printf("r: %d\n", str_find_last(s2, 'r'));
	printf("o: %d\n", str_find_last(s2, 'o'));
	printf("f: %d\n", str_find_last(s2, 'f'));
	printf("J: %d\n", str_find_last(s2, 'J'));
	printf("---------------------------------------------\n");
	printf("\n");
	
	printf("second function, number of characters replaced\n");
	printf("----------------------------------------------\n");
	printf("replace l: %d\n", str_replace_all(s1, 'l', 'x'));
	printf("replace v: %d\n", str_replace_all(s1, 'v', 'x'));
	printf("----------------------------------------------\n");
	printf("\n");
	
	printf("third function, checks if entire string is digits\n");
	printf("-------------------------------------------------\n");
	printf("%d\n", str_all_digits(s3));
	printf("%d\n", str_all_digits(s4));
	printf("-------------------------------------------------\n");
	printf("\n");
	
	printf("fourth function, checks two strings are the same\n");
	printf("------------------------------------------------\n");
	printf("%d\n", str_equal(s5, s6));
	printf("%d\n", str_equal(s7, s6));
	printf("------------------------------------------------\n");
	
	return 0;
}

/* checks for last occurrence of specified character */
size_t str_find_last(const char s[], int c)
{
	size_t i;
	int last = -1;
	
	for (i = 0; s[i] != '\0'; i++)
		if(s[i] == c)
		{
			last = i;
		}
		return last;
		
	return last;
}


/* replaces all occurrences of oldc with new c and returns the number of replacements */
size_t str_replace_all(char s[], int oldc, int newc)
{
	size_t i;
	int counter = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == oldc)
		{
			s[i] = newc;
			counter++;
		}
	}
	return counter;
}

int str_all_digits(const char s[])
{
	size_t i;
	
	for (i = 0; s[i] != '\0'; i++)
		if (!isdigit(s[i]))
			return 0;
		
	return 1;
}

/* checks if two strings are equal */
int str_equal(const char s[], const char t[])
{
	size_t i;
	
	for (i = 0; s[i] != '\0' || t[i] != '\0'; i++)
	{
		if(s[i] != t[i])
			return 0;
	}
	return 1;
}
