//
//  VAO.cpp
//  1
//
//  Created by Merli Mejia on 31/8/22.
//

#include "VAO.hpp"

void VAO::generate(){
    unsigned int VAO;
    glGenVertexArrays(1, &VAO);
    this->id = &VAO;
}

void VAO::bind(){
    glBindVertexArray(*this->id);
}

void VAO::unBind(){
    glBindVertexArray(0);
}

void VAO::deleteVAO(){
    glDeleteVertexArrays(1, this->id);
}

void VAO::enableAttributes(int size){
    glVertexAttribPointer(0, size, GL_FLOAT, GL_FALSE, size * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
}
