//Creator Szymon "Imeldushiii" Kubiak
#include <iostream>
#include <Windows.h>
int main()
{
    LRESULT zmienna = SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
    //HWND_BROADCAST - sending to all higher level windows
    if (zmienna == true) {
        std::cout << "[+] Turn Off Monitor" << std::endl;
        Sleep(5000); //Turn on monitor Again
        SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
    }
    else {
        std::cout << "[-] Something Wrong!" << std::endl;
    }
}
