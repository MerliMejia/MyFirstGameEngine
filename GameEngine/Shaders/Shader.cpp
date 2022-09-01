//
//  Shader.cpp
//  1
//
//  Created by Merli Mejia on 30/8/22.
//

#include "Shader.hpp"

Shader::Shader(GLenum type, const char* source){
    this->type = type;
    this->source = source;
}
