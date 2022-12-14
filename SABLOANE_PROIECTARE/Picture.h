#include <string>
#include "PictureContent.h"
#ifndef PICTURE_H
#define PICTURE_H
class Picture
{
public:
    virtual  PictureContent* contentul()=0;
};


#endif