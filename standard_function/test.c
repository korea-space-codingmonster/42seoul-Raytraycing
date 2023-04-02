#include "standard.h"

int main(){
    char arr1[] = "blackmask blog";
    memset(arr1, 'c', 5 * sizeof(char));
    printf("%s" ,arr1);

    return 0;
}