#pragma once

#include <iostream>
#include <string>

struct
#ifdef DLL_IMPORT
__declspec(dllimport)
#endif
#ifdef DLL_EXPORT
__declspec(dllexport)
#endif
Singleton
{
    static Singleton &get()
    {
        static Singleton s;
        return s;
    }

    ~Singleton() { std::cout << "~Singleton()\n"; }

    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;
    Singleton(Singleton &&) = delete;
    Singleton &operator=(Singleton &&) = delete;

    void tag(std::string tag)
    {
        std::cout << "[" << (uint64_t)this << "] '" << tag_ << "' => '" << tag << "'\n";
        tag_ = std::move(tag);
    }

private:
    std::string tag_ = "unset";

    Singleton() { std::cout << "Singleton()\n"; }
};
