#include <stdio.h>


int countNumbers(int *vec)
{
	int i,sum=0;
	for(i=0; i < 10; i++)
	{
		switch(i)
		{
			case 0:		sum += vec[i] * 6; break;
			case 1:		sum += vec[i] * 2; break;
			case 2:		sum += vec[i] * 5; break;
			case 3:		sum += vec[i] * 5; break;
			case 4:		sum += vec[i] * 4; break;
			case 5:		sum += vec[i] * 5; break;
			case 6:		sum += vec[i] * 6; break;
			case 7:		sum += vec[i] * 3; break;
			case 8:		sum += vec[i] * 7; break;
			case 9:		sum += vec[i] * 6; break;
		}
	}
	return sum;
}

void setZero(int *v)
{
	int i;
	for(i=0;i<10;i++)	v[i] = 0;
}

int main()
{
	int n,i,leds;
	char number[101];
	int vec[10];

	scanf("%d", &n);

	while(n>0)
	{
		getchar();
		scanf("%[^\n]", number);
		setZero(vec);
		leds = 0;
		for(i=0; number[i] != '\0'; i++)
			vec[number[i]-48]++;
		
		leds = countNumbers(vec);

		printf("%d leds\n",leds);
		n--;
	}

	return 0;
}