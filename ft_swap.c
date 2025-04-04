#include <stdio.h>
#include <unistd.h>

void ft_strcopy(char *str1, char *str2) {
    while(*str1) {
        *str2 = *str1;
        str1++;
        str2++;
    }
}

int main() {
    char str1[] = "Hello Str2\n", str2[] = "Hello Str1\n";
    int swap_len = 0;
    if(sizeof(str1) > sizeof(str2)){
        swap_len = sizeof(str1) - 1;
    }else {
        swap_len = sizeof(str2) - 2;
    }
    char swap[swap_len];
    ft_strcopy(str1, swap);
    ft_strcopy(str2, str1);
    ft_strcopy(swap, str2);
    write(1, str1, sizeof(str1) - 1);
    write(1, str2, sizeof(str2) - 1);
    return 0;
}
