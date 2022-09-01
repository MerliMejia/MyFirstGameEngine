//
//  Game.hpp
//  1
//
//  Created by Merli Mejia on 30/8/22.
//

#ifndef Game_hpp
#define Game_hpp

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "iostream"
#include <stdio.h>
#include "Shaders/ShaderProgram.hpp"
#include "Buffers/VAO.hpp"
#include "Buffers/VBO.hpp"
#include "Buffers/EBO.hpp"

class Game{
private:
    void init();
    void initWindow(int w, int h, const char* title);
public:
    GLFWwindow* window;
    ShaderProgram shaderProgram;
    Game(int w, int h, const char* title);
};

#endif /* Game_hpp */
