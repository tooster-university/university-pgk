#version 330
layout(location = 0) in vec3 position;
layout(location = 1) in mat4 modelMatrix;

layout(std140) uniform VPMatrices
{
    mat4 viewMatrix;
    mat4 projectionMatrix;
};

void main() {
    gl_Position = projectionMatrix*viewMatrix*modelMatrix*vec4(position, 1);
}