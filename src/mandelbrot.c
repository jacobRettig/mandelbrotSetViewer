#include <stdio.h>
#include <stdlib.h>

#include <GLFW/glfw3.h>
#include <mandelbrot.h>

#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 500
#define WINDOW_TITLE "Mandelbrot Set"


static void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    glfwSetWindowShouldClose(window, GL_TRUE);
}


int main(void)
{
  GLFWwindow* window;

  if (!glfwInit())
    exit(1);

  if (!(window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE, NULL, NULL)))
  {
    glfwTerminate();
    exit(1);
  }

  glfwMakeContextCurrent(window);
  glfwSetKeyCallback(window, key_callback);

  while(!glfwWindowShouldClose(window))
  {
    glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwDestroyWindow(window);
  glfwTerminate();
  return 0;
}
