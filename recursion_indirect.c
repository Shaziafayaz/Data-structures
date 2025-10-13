#include <stdio.h>

void f(int x);
void g(int x);

void f(int x) {
    if (x > 0) {
        printf("f(%d)\n", x);
        g(x - 1);//calls g
    }
}

void g(int x) {
    if (x > 0) {
        printf("g(%d)\n", x);
        f(x - 1);//calls 1
    }
}

int main() {
    int n = 8;
    f(n);
    return 0;
}
