// 예제 2: 디폴트 값은 함수의 선언 부분에만 표현

#include <iostream>

int Adder(int num1 = 1, int num2 = 3);          //디폴트 값은 함수 원형 선언에서

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