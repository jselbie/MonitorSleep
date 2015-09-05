#include "stdafx.h"

int main()
{
	// Turn off monitor
	printf("Shutting down monitors...\n");
	Sleep(1000); // Eliminate user's interaction for a second
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
	return 0;
}


