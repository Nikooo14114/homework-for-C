#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("please input your time (hours, minutes, seconds):\n");
    scanf("%d,%d,%d", &hours, &minutes, &seconds);

    // Adjust seconds to be less than 60
    minutes += seconds / 60;
    seconds %= 60;

    // Adjust minutes to be less than 60
    hours += minutes / 60;
    minutes %= 60;

    printf("the time is %d:%d:%d", hours, minutes, seconds);

    return 0;
}
