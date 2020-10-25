#include <stdio.h>


void main()
{
	char last_name,first_name,ch;
	int i=0;
	printf("Enter the full name:");

	while((ch=getchar()) != '\n')
	{
		if(i==0)
		{
			first_name = ch;
			i++;
		}
		if(ch==' ')
			{break;}
	}
	while((ch=getchar()) != '\n')
	{
		printf("%c",ch);
	}
	printf(", %c.\n",first_name);

}