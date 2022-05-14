#include <iostream>
#include <Windows.h>

int main()
{
    system("mode con cols=80 lines=15");
    std::cout << "hi" << std::endl;

    LPPOINT p;
    
    while (1)
    {
        GetCursorPos(p);
        std::cout << "x - " << p->x << "y - " << p->y << std::endl;
    }
    system("pause");
}
