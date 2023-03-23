#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include <string>
#include "imageio.h"
#include "funcs.h"

void invert(int image[MAX_H][MAX_W], int& h, int& w){
    int inverted[MAX_H][MAX_W];
    for(int row = 0; row < h; row++){
        for (int column = 0; column < w; column++){
            inverted[row][column] = 255 - image[row][column];
        }
    }
    writeImage("taskA.pgm", inverted, h, w);
}

void invert_half(int image[MAX_H][MAX_W], int& h, int& w){
	int inv_half[MAX_H][MAX_W];
	for(int row = 0; row < h; row++){
		for (int column = 0; column < w; column++){
			if(column >= w/2){
				inv_half[row][column] = 255 - image[row][column];
			}
			else{
				inv_half[row][column] = image[row][column];
			}
		}
	}
	writeImage("taskB.pgm", inv_half, h, w);
}

void white_box(int image[MAX_H][MAX_W], int& h, int& w){
    int wbox[MAX_H][MAX_W];
	for(int row = 0; row < h; row++){
		for (int column = 0; column < w; column++){
			if(column >= (w/4) and row >= (h/4) and column <= (w*3)/4 and row <= (h*3)/4){
				wbox[row][column] = 255;
			}
			else{
				wbox[row][column] = image[row][column];
			}
		}
	}
	writeImage("taskC.pgm", wbox, h, w);
}

void white_line(int image[MAX_H][MAX_W], int& h, int& w){
    int wline[MAX_H][MAX_W];
	for(int row = 0; row < h; row++){
		for (int column = 0; column < w; column++){
			if((column == (w/4) or row == (h/4) or column == (w*3)/4 or row == (h*3)/4) and (column >= w/4 and row >= h/4 and column <= 3*w/4 and row <= 3*h/4)){
				wline[row][column] = 255;
			}
			else{
				wline[row][column] = image[row][column];
			}
		}
	}
	writeImage("taskD.pgm", wline, h, w);
}

void twice(int image[MAX_H][MAX_W], int& h, int& w){
    int scale[MAX_H][MAX_W];
    for(int row = 0; row < h; row += 2){
        for (int column = 0; column < w; column += 2){
            scale[row][column] = image[row/2][column/2];
            scale[row][column + 1] = image[row/2][column/2];
            scale[row + 1][column] = image[row/2][column/2];
            scale[row + 1][column + 1] = image[row/2][column/2];
        }
    }
    
    writeImage("taskE.pgm", scale, h, w);
}