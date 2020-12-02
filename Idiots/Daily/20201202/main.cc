#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main()
{
    cout << "Hello, this is my first C++ program on Linux" << endl;
    system("echo \"Hello World\""); 

    pid_t PID;
    PID = getpid();
    cout << "the pid of the current process (ME) : " << PID << endl;

    cout << "wanna play minecraft? :D" << endl;

    return 0;
}
