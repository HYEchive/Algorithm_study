// ���� 3: template ���� ������ �ڷ���(�ڿ��� �ڼ��� ������)

// ���ø��̶�
// �Լ��� Ŭ������ ���������� �ٽ� �ۼ����� �ʾƵ�, ���� �ڷ������� ����� �� �ֵ��� ����� ���� Ʋ
// ���ø��� ����ϸ� �����Ϸ��� ���ڰ����� ���� �ڷ����� ���� Ÿ���� �����Ͽ� �����ϰ� �Լ��� ����

#include <iostream>

template <typename T>
inline T SQUARE(T x)    // �Ǵ� T SQUARE(T x)
{
    return x*x;
}

int main(void)
{
    std::cout << SQUARE(5) << std::endl; 
    std::cout << SQUARE(7.154) << std::endl;

    system("pause");  // VC++ ������ �ʿ�
    return 0;
}
