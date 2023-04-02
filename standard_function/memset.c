#include "standard.h"

// void emeset(void *b, int c, size_t len); b포인터가 가리키는 곳에서 len 만큼 c의 값을 채운다.
void    *memset(void *p, int c, size_t len){
    size_t i;

    if (!p){
        return (NULL);
    }
    i = 0;
    while (i < len){
        *(unsigned char *)(p + i) = (unsigned char) c;
        i++;
    }
    return (p);
}