#version 150

in vec2 fpos;

uniform int maxIter;

out vec3 color;

void main(void)
{
  float a, b, tmp;

  a = pos.x;
  b = pos.y;
  for(int i = 0; i < maxIter && a*a + b*b >= 4; i++)
  {
    tmp = 2*a*b;
    a = a*a - b*b + pos.x;
    b = tmp + pos.y;
  }
  tmp = i / maxIter;
  color = vec3(tmp, tmp, tmp);
}
