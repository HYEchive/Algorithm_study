// 01-02. �Լ� �����ε�(function overloading)
// ���� 1: �Լ� �����ε�

// c������ ���ڰ� �ٸ��� �Լ��� �ٸ��� �ۼ��ؾ� ������ c++������ �Լ����� ���Ƶ� �����ϴ�

#include <iostream>

void MyFunc(void);
void MyFunc(char c);
void MyFunc(int a , int b);

int main(void)
{
    MyFunc();
    MyFunc('A');
    MyFunc(12,13);

    system("pause");
    return 0;
}

void MyFunc(void)
{
    std::cout << "MyFunc(void) called"<<std::endl;
}

void MyFunc(char c)
{
    std::cout << "MyFunc(char c) called"<<std::endl;
}

void MyFunc(int a, int b)
{
    int result;
    result = a+b;
    std::cout << "MyFunc(int a, int b) called"<<std::endl;
    std::cout << "result = " << result << std::endl;
}

