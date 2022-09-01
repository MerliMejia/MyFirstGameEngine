//
//  ShaderProgram.cpp
//  1
//
//  Created by Merli Mejia on 30/8/22.
//

#include "ShaderProgram.hpp"

void ShaderProgram::addShader(Shader* shader){
    this->shaders.push_back(*shader);
}

void ShaderProgram::build(){
    unsigned int shaderProgramId = glCreateProgram();
    // link shaders
    for(int i = 0; i < shaders.size(); i++){
        Shader shader = shaders[i];
        unsigned int id = glCreateShader(shader.type);
        shader.id = id;
        glShaderSource(id, 1, &shader.source, NULL);
        glCompileShader(id);
        // check for shader compile errors
        glGetShaderiv(id, GL_COMPILE_STATUS, &shader.success);
        if (!shader.success)
        {
            glGetShaderInfoLog(id, 512, NULL, shader.infoLog);
            std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << shader.infoLog << std::endl;
        }
        glAttachShader(shaderProgramId, id);
    }
    glLinkProgram(shaderProgramId);
    this->id = shaderProgramId;
    // check for linking errors
    glGetProgramiv(shaderProgramId, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(shaderProgramId, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
    }
    
    for(int i = 0; i < shaders.size(); i++){
        Shader shader = shaders[i];
        glDeleteShader(shader.id);
    }
}

void ShaderProgram::deleteProgram(){
    glDeleteProgram(this->id);
}
