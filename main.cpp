#include "lib.h"

class Foo
{
public:
    static void Bar1() {};
    static void Bar2() { Bar1(); };   // Bar1 unused
    static void Bar3() {};
};

void f() {
    g();
}

int main() {
    f();
    Foo::Bar2();
}
