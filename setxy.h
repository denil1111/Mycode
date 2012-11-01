#include<windows.h>
int setxy(int x,int y)
{
    HANDLE hout;
	COORD coord;
	coord.X=x;
	coord.Y=y;
	hout=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout,coord);
	return 0;
}

    
    

