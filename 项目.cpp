#include <assert.h>
#include <tchar.h>
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	while(1){
	
	const TCHAR szOperation[] = _T("open");
	const TCHAR szAddress[] = _T("http://tv.cctv.com/live/cctv1/");
	int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR lpCmd, int nShow);
	{
		HINSTANCE hRslt = ShellExecute(NULL, szOperation,
			szAddress, NULL, NULL, SW_SHOWNORMAL);
		assert(hRslt > (HINSTANCE)HINSTANCE_ERROR);
		exit(100);
	}
	
	Sleep(180);
	}
}

