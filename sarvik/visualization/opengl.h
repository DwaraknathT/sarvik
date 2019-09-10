//
// Created by dwarak on 9/10/19.
//

// OpenGL functions that are used to create context windows
// and visualize the simulations results

#ifndef SARVIK_VISUALIZATION_OPENGL_H_
#define SARVIK_VISUALIZATION_OPENGL_H_

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>

namespace sarvik
{
    namespace visualization
    {
        namespace OpenGL
        {
            class Visualization
            {
                int WindowHieght;       //Dimensions on output window
                int WindowWidth;
            public:

                static void processInput(GLFWwindow *window)
                {
                    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
                        glfwSetWindowShouldClose(window, true);
                }

                static void framebuffer_size_callback(GLFWwindow* window, int width, int height)
                {
                    // make sure the viewport matches the new window dimensions; note that width and
                    // height will be significantly larger than specified on retina displays.
                    glViewport(0, 0, width, height);
                }

                GLFWwindow* CreateWindow (int width, int height, char* WindowName)
                {
                    /* Initialise the window parameters and make the minimum required version
                     * 3.3. We have to specify that we are using CORE profile of opengl
                    */
                    glfwInit();
                    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
                    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
                    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
                    #ifdef __APPLE__
                        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
                        // uncomment this statement to fix compilation on OS X
                    #endif

                    GLFWwindow* window = glfwCreateWindow(width, height, WindowName, NULL, NULL);
                    if (window == NULL)
                    {
                        printf("Error: Failed to create GLFW window \n");
                        glfwTerminate();
                        return NULL;
                    }
                    glfwMakeContextCurrent(window);
                    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
                    //GLAD manages pointers for OpenGL
                    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
                    {
                        printf("Error: Failed to initialize GLAD \n");
                        return NULL;
                    }

                    return window;
                }

            };
        }
    }
}

#endif //SARVIK_VISUALIZATION_OPENGL_H_
