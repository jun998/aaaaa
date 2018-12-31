#include<stdio.h>

int mystrlen(char *p)
{
	int i = 0;
	
	while(*p!='\0')
	{
		p++;
		i++;
	};
	
	printf("i = %d\n",i);
	
	return  i;
	
}

int main()
{
	int len = 0;
//	char *str = "qweewqwww";
	//char str[100] = "qweqweqweq";
	char str[100] = {"dasdasdasdas"};
	char ss[100] ={'d','a','s'};
	printf("str = %s\n",str);
	
	printf("str[0] = %d\n",str[0]);
	printf("str[1] = %d\n",str[1]);
	
	printf("ss[0] = %d\n",ss[0]);
	printf("ss[1] = %d\n",ss[1]);
	printf("ss = %d\n",*ss);
//	printf(" *str = %d\n",*str);
	

	len = mystrlen(str);
	
	printf("len = %d\n",len);
	
	return 0;
}