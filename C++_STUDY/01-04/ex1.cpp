// 01-04. �ζ��� �Լ�(inline function)
// ���� 1: ��ũ�� �Լ� (����)

#include <iostream>

#define SQUARE(x) ((x)*(x))

int main(void)
{
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(2.7)<<std::endl;

    system("pause");
    return 0;
}