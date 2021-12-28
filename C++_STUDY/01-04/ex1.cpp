// 01-04. 인라인 함수(inline function)
// 예제 1: 매크로 함수 (복습)

#include <iostream>

#define SQUARE(x) ((x)*(x))

int main(void)
{
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(2.7)<<std::endl;

    system("pause");
    return 0;
}