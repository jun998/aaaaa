#include<stdio.h>
#include<string.h>
char *mystrcpy(char *str1,char *str2)
{
	char *p = str1;
	while(*str2!='\0')
	{
		*str1++ = *str2++;
	}
	
	//*str1 = '\0';
	*str1 = '\0';
	return p;
	
}

int main()
{
	
	char str1[50] ="qwe";
	char str2[50] ={0};

	bzero(str2,sizeof(str2));
//	mystrcpy(str2,str1);
//	printf("str2 = %s\n",str2);
	
	printf("%s\n",mystrcpy(str2,str1));//链式表达式
	
	return 0;
}