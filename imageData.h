//
// Created by Maroof Mohammed Farooq on 9/4/16.
//

#ifndef CPP_IMAGEDATA_H
#define CPP_IMAGEDATA_H

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

class imageData{
public:
    imageData(int BytesPerPixel1, int imageWidth1, int imageHeight1);
    ~imageData(void);
    vector<unsigned char> getPixelValues();
    void setPixelValues(vector<unsigned char> newPixelData);
    void setPixelValues(unsigned char newPixelData,int row,int column,int depth);
    void resizeImage(int newWidth, int newHeight);
    void cropImage(imageData orignalImage,int cropRow,int cropColumn,int cropWidth,int cropHeight);
    imageData rgb2cmy(bool replaceColorSpaceFlag);
    unsigned char accessPixelValue(int row, int column, int depth);
    void saveImage(const char* outputFileName);
    void imageRead(const char* inputFileName);

private:
    int BytesPerPixel;
    int imageWidth;
    int imageHeight;
    vector<unsigned char>  pixelData;
};

#endif //CPP_IMAGEDATA_H
