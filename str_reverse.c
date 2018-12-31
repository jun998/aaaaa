#include<stdio.h>

void reverse(char *str)
{
	char *p1;
	char *p2;
	char ch;
	p1 = p2 = str;
	while(*p2!='\0')
	{
		p2++;
	}
	p2 = p2 -1;
	
	while(p1 < p2)
	{
		ch = *p1;
	    *p1 = *p2;
	    *p2 = ch;
		p1++;
		p2--;
	}

}

int main()
{
	char *str = "qweeew"; //指向文字常量区
	
//	char str[100]="helloworld";
	
	reverse(str);
	
	printf("reverse str  = %s\n",str);
	
	return 0;
}