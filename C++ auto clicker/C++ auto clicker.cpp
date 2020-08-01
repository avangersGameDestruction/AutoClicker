#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    Menu();
    AutoClicker();
    return 0;
}

void Menu() {
    std::cout << "Press X to enable the clicker and Z to disable clicker\n";
}

void AutoClicker() {
    bool clicks = false;

    if (GetAsyncKeyState('X')) {
        clicks = true;
    }

    else if (GetAsyncKeyState('Z')) {
        clicks = false;
    }

    if (clicks == true) {
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        Sleep(1);
    }
}