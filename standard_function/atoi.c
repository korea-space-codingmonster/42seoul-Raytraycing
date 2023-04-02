#include "standard.h"

//문자 스트링을 int 정수로 변환
int     atoi(const char *str){

    int i;
    int flag_minus_plus;
    int response;

    if (!str){
        return (NULL);
    }

    i = 0;
    while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' '){
        i++;
    }

    flag_minus_plus = (str[i] == '-') ? -1 : 1;
    if (flag_minus_plus == -1 || str[i] == '+'){
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9'){
        response = (response * 10) + (str[i] - '0');
    }
    return (response * flag_minus_plus);

}