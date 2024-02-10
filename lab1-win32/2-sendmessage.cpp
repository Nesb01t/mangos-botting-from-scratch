#include <Windows.h>
#include <iostream>

using namespace std;

HWND getHwnd()
{
    HWND hWnd = FindWindowA(NULL, "World of Warcraft");
    return hWnd;
}

int main()
{
    auto hWnd = getHwnd();
    if (!hWnd)
    {
        return 0;
    }

    UINT message = WM_USER + 1; // Replace WM_USER + 1 with the desired message ID
    WPARAM wParam = 0;          // Replace 0 with the desired WPARAM value
    LPARAM lParam = 0;          // Replace 0 with the desired LPARAM value

    LRESULT result = SendMessage(hWnd, message, wParam, lParam);

    if (result != 0)
    {
        cout << "Message sent successfully" << endl;
    }
    else
    {
        cout << "Failed to send message" << endl;
    }

    return 0;
}
