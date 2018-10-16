#include <stdio.h>

#include "func1.h"
#include "func2.h"

void turbo_on(void)
{
    printf("1234");
}

void turbo_off(Void)
{
    printf("5678");
}

int main (void)
{
    func1();
    func2();

    turbo_on();
    turbo_off();

    printf("hello");

    return 0;
}