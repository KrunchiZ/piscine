#include <unistd.h>

int main() 
{
    int n = 112432431;
    int n1 = n;
    int count = 0;
    int div = 1;
    char ch;
    
    while (n1 != 0)
    {
        n1 /= 10;
        count++;
    }
    
    while (count != 1)
    {
        div *= 10;
        count--;
    }
    
    while (div != 0)
    {
        ch = (n / div) + '0';
        write(1, &ch, 1);
        n -= (n / div) * div;
        div /= 10;
    }
}
