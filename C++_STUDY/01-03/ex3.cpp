// ���� 3: �κ��� ����Ʈ �� ����

#include <iostream>

int BoxVolume(int length, int width = 1, int height = 1);
// �κ��� ����Ʈ ���� �����ʿ��� ��������

int main(void)
{
    std::cout << "[3, 3, 3] : " << BoxVolume(3,3,3) << std::endl;
    std::cout << "[5, 5, 1] : " << BoxVolume(5, 5) << std::endl;
    std::cout << "[7, 1, 1] : " << BoxVolume(7) << std::endl;

    //std::cout << "[?, 1, 1]" << BoxVolume() << std::endl;  
    // BoxVolume(?,1,1) �̹Ƿ� �����߻�

    system("pause");
    return 0;
}

int BoxVolume(int length, int width, int height)
{
    return length*width*height;
}