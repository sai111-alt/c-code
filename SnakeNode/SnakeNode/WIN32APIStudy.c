//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<windows.h>
//#include<stdbool.h>
//#include<locale.h>

//int main()
//{
//	setlocale(LC_ALL, "");
//	printf("ab\n");
//
//	wchar_t ch1 = L'★';
//	wchar_t ch2 = L'●';
//	wprintf(L"%lc\n", ch1);
//	wprintf(L"%lc\n", ch2);
//
//
//	return 0;
//}

//int main()
//{
//	char* loc;
//	loc = setlocale(LC_ALL, NULL);
//	printf("%s\n", loc);
//
//	loc = setlocale(LC_ALL, "");
//	printf("%s\n", loc);
//
//	return 0;
//}

//#define KEY_PRESS(vk) (GetAsyncKeyState(vk) & 1 ? 1 : 0)
//
//int main()
//{
//	while (1)
//	{
//		if (KEY_PRESS(0x30))
//		{
//			printf("0\n");
//		}
//		else if (KEY_PRESS(0x31))
//		{
//			printf("1\n");
//		}
//		else if (KEY_PRESS(0x32))
//		{
//			printf("2\n");
//		}
//	}
//
//	return 0;
//}

//void setpos(short x, short y)
//{
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	COORD ps = { x,y };
//	SetConsoleCursorPosition(houtput, ps);
//}
//
//int main()
//{
//	setpos(10, 20);
//	printf("hehe");
//
//	setpos(10, 30);
//	printf("hehe");
//
//
//	getchar();
//
//	//CONSOLE_CURSOR_INFO cursor_info = { 0 };
//	//GetConsoleCursorInfo(houtput, &cursor_info);
//
//	////cursor_info.dwSize = 100;
//	//cursor_info.bVisible = false;
//
//	//SetConsoleCursorInfo(houtput, &cursor_info);
//
//
//	return 0;
//}

//int main()
//{
//	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	system("mode con cols=60 lines=30");
//	system("title 贪吃蛇");
//
//	system("pause");
//
//	return 0;
//}