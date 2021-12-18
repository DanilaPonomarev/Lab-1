#include <stdio.h>
#include <conio.h>
int main() {
uint32_t foo (uint32_t n, uint32_t k)
{
    if (k == 32)
        return n;
    else if (k > 32)
        k %= 32;
    n = (n << k) | (n >> (32 - k));
    return n;
}

}
