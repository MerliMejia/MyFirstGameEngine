//
//  ShaderProgram.hpp
//  1
//
//  Created by Merli Mejia on 30/8/22.
//

#ifndef ShaderProgram_hpp
#define ShaderProgram_hpp

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "iostream"
#include <stdio.h>
#include <vector>
#include "Shader.hpp"
using namespace std;

class ShaderProgram{
public:
    int id;
    int success;
    char infoLog[512];
    vector<Shader> shaders;
    void addShader(Shader* shader);
    void build();
    void deleteProgram();
};

#endif /* ShaderProgram_hpp */
