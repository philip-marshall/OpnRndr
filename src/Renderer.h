#pragma once

#include <GL/glew.h>

#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__)) // FOr this, the "#" will turn the x which is the function name into a string, and the other two macros will get the file name and line number

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);
