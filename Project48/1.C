#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//char* my_strstr(const char* p1,const char* p2)
//{
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (!*p2)
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return cur;
//		}
//		if (!*s1)
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abcdefadasdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("×Ó´®²»´æÔÚ\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 3);
//	printf("%d\n",ret);
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);
//	printf("%s", arr1);
//
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefsdfas";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include<assert.h>
//#include<string.h>
//my_strcmp(const char* dest,const char* src)
//{
//	assert(dest && src);
//	while (*dest == *src)
//	{
//		if (*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//	return (*dest - *src);
//	//if (*dest > *src)
//	//	return 1;
//	//else
//	//	return -1;
//}
//int main()
//{
//	char* p1 = "qbc";
//	char* p2 = "abc";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include<assert.h>
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(*dest && *src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcde") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}