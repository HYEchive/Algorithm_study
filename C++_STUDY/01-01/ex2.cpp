//예제 2: scanf를 대신하는 데이터 입력

#include <iostream>

int main(void)
{
    int val1;
    std::cout << "첫번째 정수 입력 : ";
    std::cin >> val1;
    // std::cin은 c언어에서의 스트림 stdin에 해당

    int val2;
    std::cout << "두번째 정수 입력 : ";
    std::cin >> val2;

    int result = val1 + val2;
    std::cout << "덧셈결과 : " << result << std::endl;

    system("pause");
    return 0;
}