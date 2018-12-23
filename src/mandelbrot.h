#ifndef MANDELBROT_H
#define MANDELBROT_H

static void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods);

typedef struct
{
}shader;

int genShader();
char *readFile(const char *fileName);
#endif
