#include<Stdio.h>
int main()
{
	int week;
	printf("\nEnter a any day:");
	scanf("%d",&week);
	switch(week)

{
	case 1:
		printf("Monday\n",week);
		break;
		
			case 2:
		printf("Tuesday\n",week);
		break;
			case 3:
		printf("Wednesday\n");
		break;
			case 4:
		printf("Thursday\n",week);
		break;
			case 5:
		printf("Friday\n",week);
		break;
			case 6:
		printf("Saturday\n",week);
		break;
			case 7:
		printf("Sunday\n",week);
		break;
}
}
