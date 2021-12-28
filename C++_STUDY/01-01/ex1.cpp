#include <iostream>

int main(void)
{
    int num = 20;
    std::cout << "Hello World!" << std::endl;
    // std::cout은 c언어에서의 스트림 stdout에 해당

    std::cout << "Hello" << "World!" << std::endl;
    //std::endl 은 c언어에서의 '\n'에 해당
    
    std::cout << num << ' ' << 'A';
    std::cout << ' ' << 3.14 << std::endl;

    system("pause");    //vc++에서만 필요
    return 0; 
}

/*
Hello World!
HelloWorld!
20 A 3.14
*/