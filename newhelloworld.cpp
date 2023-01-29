//lol the old hello world i coded it as bad as shit so im making a new version just because i've got nothing to do lol
#include <iostream>

#if defined(_WIN32)
    #include <Windows.h>
#elif defined(__linux__)
    #include <unistd.h>
#endif

int main(void){
    unsigned long count = 0;
    const unsigned int s_break = 1;

    for(;;){
        std::cout << "Hello world " << ++count << '\n';

        #if defined(_WIN32)
            Sleep(s_break * 1000);
        #elif defined(__linux__)
            sleep(s_break);
        #endif
    }

    return 0;
}