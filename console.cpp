#include <iostream>
#include <Windows.h>

using namespace std;

void SetWindowSize(SHORT width, SHORT height)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SMALL_RECT WindowSize;
	WindowSize.Top = 0;
	WindowSize.Left = 0;
	WindowSize.Right = width;
	WindowSize.Bottom = height;
	
	SetConsoleWindowInfo(hStdout, 1, &WindowSize);
}

int main()
{
	SetWindowSize(60, 15);
	cout <<"HELLO WORLD!\n";
	
	return 0;
}
