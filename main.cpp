#include"Statement.h"
extern struct StructArray structArray;

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
        printf("输入数字选择功能：");
        scanf("%d", &choiceNum);
        system("cls");
        menu(choiceNum);
        getchar();
        printf("按任意键继续");
        getchar();
        system("cls");
    }
}