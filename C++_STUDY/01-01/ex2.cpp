//���� 2: scanf�� ����ϴ� ������ �Է�

#include <iostream>

int main(void)
{
    int val1;
    std::cout << "ù��° ���� �Է� : ";
    std::cin >> val1;
    // std::cin�� c������ ��Ʈ�� stdin�� �ش�

    int val2;
    std::cout << "�ι�° ���� �Է� : ";
    std::cin >> val2;

    int result = val1 + val2;
    std::cout << "������� : " << result << std::endl;

    system("pause");
    return 0;
}