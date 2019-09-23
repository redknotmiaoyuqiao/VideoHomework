#include "RedVideoFormat/RedVideoFormat.hpp"

int main()
{
    RedByte byte;
    printf("Byte Len:%d\n", byte.dataLength);

    int len = 100;
    unsigned char * buffer = (unsigned char *)malloc(len);
    for(int i=0;i<len;i++){
        buffer[i] = i;
    }

    byte.PushData(buffer, len);
    byte.PushData(buffer, len);
    byte.PushData(buffer, len);

    printf("Byte Len:%d\n", byte.dataLength);

    for(int i=0;i<byte.dataLength;i++){
        printf(" %d ", byte.data[i]);
    }

    printf("\n");
    printf("Hello World\n");
    return 0;
}