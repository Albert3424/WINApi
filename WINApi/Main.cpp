#include<Windows.h>

INT WINAPI WinMain(HINSTANCE hIstance, HINSTANCE hPrevInst, LPSTR lpCmdLine, INT nCmdShow)
{
	MessageBox
	(
		NULL,
		"Hello WinAPI!\n��� MessageBox, �����",
		"��������� ����",
		MB_YESNO | MB_ICONQUESTION | MB_HELP | MB_DEFBUTTON4
		| MB_SYSTEMMODAL
	);

	return 0;
}