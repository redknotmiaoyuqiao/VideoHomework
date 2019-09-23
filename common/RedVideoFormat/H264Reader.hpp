#ifndef	H264_READER_H
#define	H264_READER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class H264Reader
{
private:
    char * filePath = NULL;
    FILE * file = NULL;

public:
    H264Reader(char * _filePath);
    ~H264Reader();

    int Open();
    int Close();

    int ReadFrame(unsigned char * * data, int * dataLen);
};

#endif