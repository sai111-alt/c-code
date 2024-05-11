#define _CRT_SECURE_NO_WARNINGS 1

#include<locale.h>

void test()
{
	;
}

int main()
{
	set_locale(LC_ALL, "");
	test();

	return 0;
}