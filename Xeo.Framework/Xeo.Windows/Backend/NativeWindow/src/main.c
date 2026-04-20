#include <stdio.h>
#include <windows.h>


LRESULT CALLBACK WindowsProc(HWND hwnd, UINT UMsg, WPARAM wparam, LPARAM lparam){
    switch (UMsg)
    {
    case WM_DESTROY:
        
        break;
    case WM_PAINT:
        break;
    
    default:
        break;
    }
}



int main(int argc, char const *argv[])
{

    char WindowsTitle[] = "";



    HWND NewWindow = CreateWindowEx(0, CLASS_NAME WindowsTitle, NULL);

    if (NewWindow == NULL)
    {
        return 0;
    }


    return 0;
}
