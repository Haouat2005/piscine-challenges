#include <stdio.h>
#include <unistd.h>

int ft_strcmp (char *str1, char *str2) {
    return (unsigned char)*str1 - (unsigned char)*str2;
}

int main () {
    char str1[] = "f", str2[] = "F";
    int result;

    result = ft_strcmp(str1, str2);
    printf("Result: %d\n", result);
    //write(1, *result, 4);
    return 0;
}
