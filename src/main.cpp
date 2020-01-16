#include "singleton.h"

void a();
void b();

int main() {
    Singleton::get().tag("before main");
    a();
    b();
    Singleton::get().tag("after main");
}
