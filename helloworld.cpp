#include <stdio.h>
#include <windows.h>

int memory = 0;
char output[100];

int main(void){
    while(1){
        memory++;
        snprintf(output, 100, "Hello World %d \n", memory);
        printf(output);
        Sleep(100);
    }
}