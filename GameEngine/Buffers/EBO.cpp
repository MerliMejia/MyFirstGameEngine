//
//  EBO.cpp
//  1
//
//  Created by Merli Mejia on 31/8/22.
//

#include "EBO.hpp"

unsigned int EBOID;

void EBO::generate(){
    glGenBuffers(1, &EBOID);
}

void EBO::bind(){
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBOID);
}

void EBO::addData(unsigned int *indices, int size){
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, indices, GL_STATIC_DRAW);
}

void EBO::deleteEbo(){
    glDeleteBuffers(1, &EBOID);
}
