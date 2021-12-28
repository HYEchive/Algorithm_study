// 01-02. 함수 오버로딩(function overloading)
// 예제 1: 함수 오버로딩

// c에서는 인자가 다르면 함수명도 다르게 작성해야 하지만 c++에서는 함수명이 같아도 무방하다

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

