#include "singleton.h"

#ifdef _WIN32
__declspec(dllexport)
#endif
void a() {
    Singleton::get().tag("lib a");
}
