// ���� 2: C++ ����� �ζ��� �Լ� ����

#include <iostream>

inline int SQUARE(int x)
{
    return x*x;
}

int main(void)
{
    std::cout << SQUARE(5) << std::endl;
    std::cout << SQUARE(7.15) << std::endl;
    // 7.15�� 7�� ����


    system("pause");
    return 0;
}