#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("title To acquire administrator privileges");

	int k = system("net user administrator /active:yes");

	system("cls");

	if (k == 0)
		puts("명령이 성공적으로 실행됐습니다. 관리자 권한을 취득합니다.");
	else
		puts("명령 실행에 실패했습니다... ");


	system("pause");

	return 0;
}