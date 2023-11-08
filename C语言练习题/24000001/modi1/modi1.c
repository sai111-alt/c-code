#include <stdio.h>
#pragma warning (disable:4996)
int my_isalpha(char c)  
{
	if(c>='A'&&c<='Z') return 1;
	else if(c>='a'&&c<='z') return -1;
	else  return 0; 
}
void a( )					 
{
	char ch;
	int sort;
	printf("±¾³ÌÐòÅÐ¶ÏÄã´Ó¼üÅÌÉÏ¼üÈë×Ö·ûµÄÖÖÀà,ÇëÊäÈë×Ö·û£¨´®£©£º\n");
	do
	{
		ch=getchar();
		if(ch!='\n')
		{
			sort= my_isalpha( ch);        
/**********************found***********************/
			switch(sort)
			{
			case 1: printf("%c",'*'); break;
/**********************found***********************/
			case -1: printf("%c",'#'); break;
			case 0: printf("%c",'?');
			}
		}
/**********************found***********************/
	}while(ch !='\n');
	printf("%c",'\n');
}
void main( )					  
{
	a();
}
