#include <iostream>
#include <Windows.h>

//координаты на экране

#define MECH1X 315
#define MECH1Y 360

#define MECH2X 1050
#define MECH2Y 360

////////////////////////////

int main()
{
    system("mode con cols=50 lines=10");
    std::cout << "Hi" << std::endl;
    int Weight = GetSystemMetrics(SM_CXSCREEN);
    int Height = GetSystemMetrics(SM_CYSCREEN);

    POINT P;
    std::cout << "Monitor - " << Weight<< "/" << Height << std::endl;
    Sleep(60000);
    for(int i = 1;; i++)
    {
        
        //system("cls");
        GetCursorPos(&P);
        SetCursorPos(MECH1X, MECH1Y);
        mouse_event(MOUSEEVENTF_LEFTDOWN, MECH1X, MECH1Y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, MECH1X, MECH1Y, 0, 0);

        Sleep(10);

        SetCursorPos(MECH2X, MECH2Y);
        mouse_event(MOUSEEVENTF_LEFTDOWN, MECH2X, MECH2Y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, MECH2X, MECH2Y, 0, 0);

        std::cout << "Click " << i << " time" <<std::endl;
        SetCursorPos(Weight / 2, Height/2+Height/3);
        Sleep(600000); // 10 минут
        system("cls");
    }
    system("pause");
}
