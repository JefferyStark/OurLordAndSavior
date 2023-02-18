#include <iostream>
#include "adder.h"
#include <GLFW/glfw3.h>
#include <GL/gl.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    std::cout << "hi, zus! \n";
    std::cout << "2 + 3 = " << mearlymath::add(2, 3) << std::endl;
    
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