#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool compare(bool left, bool right, char operator)
{
    assert(operator == '*' || operator == '+');

    if (operator == '*') {
        return left && right;
    }
    
    
    return left || right;
}

int main() {

    bool res = false;

    res = compare(true, true, '*');
    assert(res);

    res = compare(true, false, '*');
    assert(!res);

    res = compare(false, false, '+');
    assert(!res);

    res = compare(false, true, '+');
    assert(res);

    res = compare(true, true, '+');
    assert(res);

    res = compare(true, true, ' '); // should fail

    return 0;
}