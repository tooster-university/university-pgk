//
// Created by tooster on 29.01.2020.
//

#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#include "common.hpp"

class Texture {
    static Texture* currentTexture;

    GLuint TEX = 0;


    const char *path;
    int        width, height, nrChannels;

    explicit Texture(const char* path);

public:
    static Texture *import(const char * texturePath);

    void use();

};


#endif //TEXTURE_HPP
