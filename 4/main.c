#include <assert.h>

int scale(int a, int b) {
    return a * b;
}

int main() {
    assert(scale(2, 4) == 8);
}