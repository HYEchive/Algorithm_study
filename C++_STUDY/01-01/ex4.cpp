// ���� 4: �迭 ����� ���ڿ� �����
#include <iostream>

int main(void)
{
    char name[100];
    char lang[200];

    std::cout << "�̸��� �����Դϱ�? ";
    std::cin >> name;

    std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
    std::cin >> lang;

    std::cout << "�� �̸��� " << name << "�Դϴ�." <<std::endl;
    std::cout << "�����ϴ� ���α׷��� ���� "<< lang << std::endl;

    system("pause");
    return 0;
}