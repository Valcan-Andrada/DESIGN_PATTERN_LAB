#include <iostream>
#include "ImageProxi.h"

#include "Image.h"
#include "Picture.h"
#include "PictureContent.h"

int main()
{
   ImageProxi* proxy = new ImageProxi();
    //proxy->contentul();

    delete proxy;
    std::cout << "no error";
    return 0;
}