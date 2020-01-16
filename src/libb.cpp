#include "singleton.h"

#ifdef _WIN32
__declspec(dllexport)
#endif
void b() {
    Singleton::get().tag("lib b");
}
