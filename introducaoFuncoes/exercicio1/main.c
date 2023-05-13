

#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(int argc, const char * argv[]) {
    int z;
    z = max(4, 3);
    printf("%d", z);
    
    
    return 0;
}
