// 예제 2: C++ 기반의 인라인 함수 정의

#include <iostream>

inline int SQUARE(int x)
{
    return x*x;
}

int main(void)
{
    std::cout << SQUARE(5) << std::endl;
    std::cout << SQUARE(7.15) << std::endl;
    // 7.15를 7로 간주


    system("pause");
    return 0;
}