//
//  BO.hpp
//  1
//
//  Created by Merli Mejia on 31/8/22.
//

#ifndef VBO_hpp
#define VBO_hpp

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "iostream"
#include <stdio.h>

class VBO{
public:
    unsigned int* id;
    void generate();
    void addData(float* data, int size);
    void bind();
    void unBind();
    void deleteBO();
    VBO();
};

#endif /* BO_hpp */
