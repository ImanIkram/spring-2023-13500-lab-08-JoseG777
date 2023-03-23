#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include <string>
#include "imageio.h"
#include "funcs.h"

int main(){
    int image[MAX_H][MAX_W];
    int h, w;
    readImage("inImage.pgm", image, h, w);

    invert(image, h, w);
    
    invert_half(image, h, w);
    
    white_box(image, h, w);

    white_line(image, h, w);

    twice(image, h, w);

    pixel(image, h, w);
}