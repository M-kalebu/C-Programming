#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter any character:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		printf("\n %c is a vowel",ch);
		break;
		case 'E':
		printf("\n %c is a vowel",ch);
		break;
	
		
		case 'I':
		printf("\n %c is a vowel",ch);
		break;


		case 'O':
		printf("\n %c is a vowel",ch);
		break;

	
		case 'U':
		printf("\n %c is a vowel",ch);
		break;
	default:
	printf("%c is not a vowel",ch);
	}
	
}
