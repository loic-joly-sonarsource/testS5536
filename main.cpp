class Foo
{
    static void Bar1() {};
    static void Bar2() { Bar1(); };   // Bar1 unused
};

int main() {
}
