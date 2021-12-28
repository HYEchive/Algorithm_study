// 예제 3: C++의 지역 변수 선언

#include <iostream>

int main(void)
{
    int val1, val2;
    int result = 0;

    std::cout << "두 정수를 입력하시오. ";
    std::cin >> val1 >> val2;

    if(val1<val2)
    {
        for (int i = val1 + 1; i < val2 ; i++)
        {
            result +=i;
        }
    }
    else
    {
        for(int i = val2 + 1 ; i < val1 ; i++)
        {
            result += i;
        }
    }

    std::cout << "두 정수 사이의 정수들의 합: " << result << std::endl;

    system("pause");
    return 0;
}