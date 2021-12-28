// 예제 3: template 통한 임의의 자료형(뒤에서 자세히 공부함)

// 템플릿이란
// 함수나 클래스를 개별적으로 다시 작성하지 않아도, 여러 자료형으로 사용할 수 있도록 만들어 놓은 틀
// 템플릿을 사용하면 컴파일러가 인자값으로 들어가는 자료형을 보고 타입을 유추하여 유연하게 함수에 적용

#include <iostream>

template <typename T>
inline T SQUARE(T x)    // 또는 T SQUARE(T x)
{
    return x*x;
}

int main(void)
{
    std::cout << SQUARE(5) << std::endl; 
    std::cout << SQUARE(7.154) << std::endl;

    system("pause");  // VC++ 에서만 필요
    return 0;
}
