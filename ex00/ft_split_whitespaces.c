#include <stdlib.h>
#include <stdio.h>

char **ft_split_whitespace(char *str)
{
	int istring;
	int lword;
	int *tab1;

	istring = 0;
	tab1 =(int*)malloc(sizeof(int) * 1000);

	while (str[istring] != '\0')
	{
		lword = 0;
		while (str[istring] != ' ' && str[istring] != '\t' && str[istring] != '\n' &&str[istring] != '\0' )
		{
			lword++;
			istring++;
		}
	if (lword != 0)
		{
			tab1[tab1[0] + 1] = lword;
			tab1[0]++;
		}
	if (str[istring] != '\0')
		istring++;
	} 2
}

int main(int argc, char **argv)
{
	
	int i;
	char **ff;	

	ff = ft_split_whitespace(argv[1]);
	while (
		printf(" 





}
