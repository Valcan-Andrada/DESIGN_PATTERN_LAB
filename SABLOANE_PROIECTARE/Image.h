#include "Element.h"
#include "Picture.h"
#include <string>
#include <iostream>
#include "PictureContent.h"
#include "Picture.h"
using namespace std;
#ifndef IMAGE_H
#define IMAGE_H
//using namespace std;
class Image: public Picture
{
private:
	PictureContent* content;
public:
	PictureContent* contentul() {
		return this->content;
  }
};

#endif