#include <stdio.h>
#include <stdbool.h>

int findSubstring(char *, char *);

int main()
{
	char s1[] = "ABC DEF GHI";
	char s2[] = "DEF";
	int foundPosition;
	
	foundPosition = findSubstring(s1, s2);
	if(foundPosition >= 0)
	{
		printf("\"%s\" is found in \"%s\" at the position %d\n", s2, s1, foundPosition);
	}
	else
	{
		printf("\"%s\" is not found in \"%s\"\n", s2, s1);
	}
	
	return 0;
}

//Returns the position at which the substring is found in the original string.
//Returns -1 if the substring is not found in the original string.
int findSubstring(char * s, char * ss)  //s = string, ss = substring
{
	bool match = false;
	int i;
	
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == ss[0])
		{
			int matchIndex = i;
			match = true;
			int j = 0;
			while(ss[j] != '\0')
			{
				if(ss[j] != s[matchIndex])
				{
					match = false;
					break;
				}
				else
				{
					j++;
					matchIndex++;
				}
			}
			
			if(match == true)
			{
				return i;
			}
		}
		i++;
	}
	
	return -1;
}

/*
"DEF" is found in "ABC DEF GHI" at the position 4
*/

