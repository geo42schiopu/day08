#include <stdio.h>

int	match(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	while (*s2 == '*' && *(s2 + 1) == '*')
	{
		s2++;
	}
	while (*s2 == '*' && *(s2+1) == '*')
	{
		s2++;
	}
	if (*s1 == '\0' && *s2 == '*' )
	{
		return (match(s1, s2 +1));
	}
	if (*s1 == *s2)
	{
		return (match(s1 + 1, s2 + 1));
	}
	if (*s1 != *s2)
	{
		return ((*s2 == '*') ? (match(s1 + 1, s2) || match(s1, s2 + 1)) : 0);
	}
	return (1);
}

int main(int argc,char  **argv)
{
	printf("match: %d \n", match(argv[1], argv[2]));
	return (0);


}
