//
//  EBO.hpp
//  1
//
//  Created by Merli Mejia on 31/8/22.
//

#ifndef EBO_hpp
#define EBO_hpp

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "iostream"
#include <stdio.h>

class EBO{
public:
    void generate();
    void bind();
    void addData(unsigned int* indices, int size);
    void deleteEbo();
};

#endif /* EBO_hpp */
