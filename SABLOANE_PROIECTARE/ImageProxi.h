#include "Image.h"
#include "Picture.h"
#include "PictureContent.h"
#ifndef IMAGE_PROXI_H
#define IMAGE_PROXI_H

class ImageProxi : public Picture
{public:
	Image* loadImage() {
		return this->image;
	}
	PictureContent* contentul() {
		return this->image->contentul();
	}

private:
	Image* image;
};

#endif