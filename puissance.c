#include <stdio.h>

int main() {
    int a, b = 6;
    int x = 1;
    for(int i = 0; i<b; i++){
        x *= 8;
    }
    printf("%i \n", x);
    return 0;
}
