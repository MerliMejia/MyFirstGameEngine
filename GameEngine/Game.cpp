//
//  Game.cpp
//  1
//
//  Created by Merli Mejia on 30/8/22.
//

#include "Game.hpp"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

Game::Game(int w, int h, const char* title){
    this->init();
    this->initWindow(w, h, title);
}

void Game::init(){
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif
}

void Game::initWindow(int w, int h, const char* title){
    GLFWwindow* window = glfwCreateWindow(w, h, title, NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
    }
    this->window = window;
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    
    if(!glewInit()){
        std::cout << "GLEW INIT" << std::endl;
    }
}
