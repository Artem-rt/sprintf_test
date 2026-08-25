
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main (void)
{
    char formal [100];
    sprintf (formal, "Hello");
    int i;
    for (i=0; i<5; i++){
        printf("%c", formal[i]);
        Sleep(1000);
    }

}
