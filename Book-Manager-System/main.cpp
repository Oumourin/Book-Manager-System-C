#include"statement.h"
extern struct CstructArray structArray;

int main(int args, char* argv[])
{
	initData();
	startUI();
	getchar();
	system("cls");
	while (true)
	{
		int choiceNum = -1;
		menuUI();
		printf("��������ѡ���ܣ�");
		scanf("%d", &choiceNum);
		system("cls");
		menu(choiceNum);
		getchar();
		printf("�����������");
		getchar();
		system("cls");
	}
	return 0;
}