// ���� 2: ����Ʈ ���� �Լ��� ���� �κп��� ǥ��

#include <iostream>

int Adder(int num1 = 1, int num2 = 3);          //����Ʈ ���� �Լ� ���� ���𿡼�

int main(void)
{
    std::cout<<Adder()<<std::endl;              //Adder(1,3)
    std::cout<<Adder(5)<<std::endl;             //Adder(5,3)
    std::cout<<Adder(3,5)<<std::endl;           //Adder(3,5)

    system("pause");
    return 0;
}

int Adder(int num1, int num2)
{
    return num1 + num2;
}