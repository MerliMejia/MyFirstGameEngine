//
//  Shader.hpp
//  1
//
//  Created by Merli Mejia on 30/8/22.
//

#ifndef Shader_hpp
#define Shader_hpp

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "iostream"
#include <stdio.h>

class Shader{
public:
    int id;
    int success;
    char infoLog[512];
    GLenum type;
    const char* source;
    
    Shader(GLenum type, const char* source);
};

#endif /* Shader_hpp */
