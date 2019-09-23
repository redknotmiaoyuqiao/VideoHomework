#include "RedByte.hpp"

RedByte::RedByte()
{

}

RedByte::~RedByte()
{
    if(data != NULL){
        free(data);
        data = NULL;
    }
}

int RedByte::PushData(unsigned char * _data, int _length)
{
    unsigned char * tempData = (unsigned char *)malloc(dataLength + _length);
    int pos = 0;

    if(data != NULL){
        memcpy(tempData + pos, data, dataLength);
        pos += dataLength;
    }

    memcpy(tempData + pos, _data, _length);
    pos += _length;

    dataLength += _length;

    if(data != NULL){
        free(data);
        data = NULL;
    }

    data = tempData;

    return 0;
}