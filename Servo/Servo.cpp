#include <iostream>
#include <pigpio.h>

using namespace std;

int main()
{
    cout << "This is a demo to use servo demo" << endl;
    if (gpioInitialise() < 0)
    {
        cout << "Failed" << endl;
    }
    else
    {
        cout << "PIGPIO is ready" << endl;
    }

    int servo = 4;

    gpioSetMode(servo, PI_OUTPUT);
    while (1)
    {
        gpioServo(servo, 500); //
    }

    gpioTerminate();

    return 0;
}

// g++ -Wall -pthread -o executeable_name project_name.cpp -lpigpio -lrt