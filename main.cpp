#include <iostream>
#include <GLFW/glfw3.h>
#include <GL/gl.h>

#include <stdio.h>
#include <stdlib.h>
#include <OLASConfig.h>

#ifdef USE_ADDER
    #include <adder.h>
#endif

int main(int argc, char* argv[])
{
    std::cout << "hi, zus! \n";

#ifdef USE_ADDER
    std::cout << "use adder lib " << "2 + 3 = " << mearlymath::add(2, 3) << std::endl;
#else
    std::cout << "not use adder lib " << "2 + 3 = " << 2 + 3 << std::endl;
#endif

    std::cout << argv[0] << " VERSION " << OLAS_VERSION_MAJOR << "." << OLAS_VERSION_MINOR << std::endl;

    int xpos, ypos, height;
    const char* description;
    GLFWwindow* windows;
    if (!glfwInit())
    {
        glfwGetError(&description);
        printf("Error: %s\n", description);
        exit(EXIT_FAILURE);
    }

    windows = glfwCreateWindow(300, 300, "Multi-Window Example", NULL, NULL);
    if (!glfwWindowShouldClose(windows))
    {
        glfwGetError(&description);
        printf("Error: %s\n", description);
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwTerminate();
    return 0;
}