//
//  BO.cpp
//  1
//
//  Created by Merli Mejia on 31/8/22.
//

#include "VBO.hpp"

VBO::VBO(){
    generate();
}

void VBO::generate(){
    unsigned int BO;
    glGenBuffers(1, &BO);
    this->id = &BO;
}

void VBO::addData(float* data, int size){
    glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}

void VBO::bind(){
    glBindBuffer(GL_ARRAY_BUFFER, *this->id);
}

void VBO::unBind(){
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void VBO::deleteBO(){
    glDeleteBuffers(1, this->id);
}
