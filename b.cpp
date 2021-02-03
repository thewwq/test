#include <iosteram>

int fib(int a) {
    if (a == 0 || a == 1)
        return 1;
    return fib(a-1) + fib(a-2);
}

void hello() {
    cout << "Hello World" << endl;
}
