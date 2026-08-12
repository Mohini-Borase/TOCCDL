#include<stdio.h>
#include<string.h>

int main()

{
	char str[100];
	int i,len;
	printf("enter a binary string :");
	scanf("%99s",str);
	len = strlen(str);
	/* check for empty string */
	if(len == 0)
	{
		printf("string rejected \n");
		return 0;
	}/* valid binary input */
	for(i=0;i<len;i++)
	{
		if(str[i]!='0' && str[i]!='1')
		{
			printf("invalid input 1 enter only 0 and 1 \n");
			return 0;
		}/* check first and last symbols */
	}

		if (str[0] == '0' && str[len-1]=='1')
		printf("string accepted \n");
		else 
			printf("string rejected \n");
		return 0;
}

