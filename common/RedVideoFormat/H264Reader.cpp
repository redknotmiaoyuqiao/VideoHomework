#include "H264Reader.hpp"

H264Reader::H264Reader(char * _filePath)
{
    if(filePath != NULL){
        free(filePath);
        filePath = NULL;
    }

    int strLen = strlen(_filePath) + 1;
    filePath = (char *)malloc(strLen);
    memcpy(filePath, _filePath, strLen);
}

H264Reader::~H264Reader()
{
    if(filePath != NULL){
        free(filePath);
        filePath = NULL;
    }
}

int H264Reader::Open()
{
    file = fopen(filePath, "rb");
    if(file == NULL){
        return -1;
    }
    return 0;
}

int H264Reader::Close()
{
    if(file != NULL){
        fclose(file);
    }
    return 0;
}

int H264Reader::ReadFrame(unsigned char * * data, int * dataLen)
{
    int batchSize = 1024;

    

    return 0;
}