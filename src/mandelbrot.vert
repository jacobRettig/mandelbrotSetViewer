#version 150

in vec2 pos;

uniform vec2 origin;
uniform vec2 dimensions;

out vec2 fpos;


void main(void)
{
  fpos = pos*dimension - origin;
}
