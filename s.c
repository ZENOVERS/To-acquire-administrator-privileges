#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("title To acquire administrator privileges");

	int k = system("net user administrator /active:yes");

	system("cls");

	if (k == 0)
		puts("����� ���������� ����ƽ��ϴ�. ������ ������ ����մϴ�.");
	else
		puts("��� ���࿡ �����߽��ϴ�... ");


	system("pause");

	return 0;
}