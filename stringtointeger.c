#include <limits.h>
#include <ctype.h>

int myAtoi(char* s) {
    int i = 0;
    long result = 0;
    int sign = 1;

    while (s[i] == ' ') {
        i++;
    }

    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');

        if (sign == 1 && result > INT_MAX) {
            return INT_MAX;
        }
        if (sign == -1 && -result < INT_MIN) {
            return INT_MIN;
        }

        i++;
    }

    return (int)(result * sign);
}
