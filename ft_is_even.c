#include <stdio.h>
#include <unistd.h>

const char* check_if_even(int num) {
    if(num % 2 == 0) {
        return "The number is even\n";
    }else {
        return "The number is odd\n";
    }
}

int str_len (const char *str) {
    int index = 0;
    while(*str){
        index++;
        *str++;
    }
    return index;
}

int main () {
    int num = 5;
    const char *result = check_if_even(num);
    write(1, result, str_len(result));
    return 0;
}
