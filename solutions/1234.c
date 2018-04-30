#include <stdio.h>

int main()
{
	char sentence[51];
	int i=0, first=1, capsLock=1;

	while(fgets(sentence, 51, stdin) != NULL)
	{
		i=0; first=1; capsLock=1;
		while(sentence[i] != '\0')
		{
			if(first)
			{
				while(sentence[i] == ' ' && sentence[i] != '\0')	i++;

				if(sentence[i] > 96)	sentence[i] -= 32;

				first=0;
			}	

			if(sentence[i] == ' ')	
				;

			else if(capsLock)
			{
				if(sentence[i] > 96 && sentence[i] < 123)	sentence[i] -= 32;
				capsLock = 0;
			}
			else
			{
				if(sentence[i] > 64 && sentence[i] < 91)	sentence[i] += 32;
				capsLock = 1;
			}	

			i++;
		}

		printf("%s",sentence);
	}
	return 0;
}