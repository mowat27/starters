/*
 * This C++ source file was generated by the Gradle 'init' task.
 */
#ifndef CPP_PROJECT_H
#define CPP_PROJECT_H

#ifdef _WIN32
#define CPP_PROJECT_EXPORT_FUNC __declspec(dllexport)
#else
#define CPP_PROJECT_EXPORT_FUNC
#endif

#include <string>

namespace cpp_project {
    class Greeter {
        public:
        std::string CPP_PROJECT_EXPORT_FUNC greeting();
    };
}

#endif
