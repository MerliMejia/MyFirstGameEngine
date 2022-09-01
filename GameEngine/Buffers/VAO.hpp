//
//  VAO.hpp
//  1
//
//  Created by Merli Mejia on 31/8/22.
//

#ifndef VAO_hpp
#define VAO_hpp

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

class VAO{
public:
    unsigned int* id;
    void generate();
    void bind();
    void unBind();
    void enableAttributes(int size);
    void deleteVAO();
};

#endif /* VAO_hpp */
