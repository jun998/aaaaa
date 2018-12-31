#include<stdio.h>

int mystrcmp(const char *str1,const char *str2)
{
	while((*str1!='\0')||(*str2!='\0'))
	{
		if(*str1 > *str2)
		{
			return 1;
		}
		else if(*str1 < *str2)
		{
			return -1;
		}
		else
		{
			str1++;
			str2++;
		}
		
		
		return 0;
		
	}
	
	
	
	
};
int main()
{
	char *str1 = "bda";
	char *str2 = "b";
	int num = 0;
	num = mystrcmp(str1,str2);
	printf("%d\n",num);
	return 0;
}