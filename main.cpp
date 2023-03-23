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
    readImage("image1.pgm", image, h, w);
    invert(image, h, w);
    
    int image1[MAX_H][MAX_W];
    int h1, w1;
    readImage("image1.pgm", image1, h1, w1);
    invert_half(image1, h1, w1);
    
    int image2[MAX_H][MAX_W];
    int h2, w2;
    readImage("image1.pgm", image2, h2, w2);
    white_box(image2, h2, w2);

    int image3[MAX_H][MAX_W];
    int h3, w3;
    readImage("image1.pgm", image3, h3, w3);
    white_line(image3, h3, w3);

    int image4[MAX_H][MAX_W];
    int h4, w4;
    readImage("image1.pgm", image4, h4, w4);
    twice(image4, h4, w4);
}