// 01-03. 매개변수의 디폴트(default) 값
// 예제 1: 함수의 매개 변수에 설정하는 디폴트 값의 의미

#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
    return num1+num2;
}

int main(void)
{
    std::cout<<Adder()<<std::endl;          //Adder(1,2)
    std::cout<<Adder(5)<<std::endl;         //Adder(5,2)
    std::cout<<Adder(3,5)<<std::endl;       //Adder(3,5)

    system("pause");
    return 0;
}