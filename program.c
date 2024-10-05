#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input_string(char *str, int size) 
{
    printf("Введите строку из цифр (0-9): ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0; 
}

void convert_to_letters(const char *digits, char *letters) 
{
    for (int i = 0; digits[i] != '\0'; i++) 
    {
        if (digits[i] >= '0' && digits[i] <= '9') 
        {
            letters[i] = 'A' + (digits[i] - '0'); 
        } 
        else 
        {
            letters[i] = '?'; 
        }
    }
    for (int i = 0; digits[i] != '\0'; i++) 
    {
        if (digits[i] >= '0' && digits[i] <= '9') 
        {
            letters[i] = 'C' + (digits[i] - '0'); 
        } 
        else 
        {
            letters[i] = '?'; 
        }
    }
    letters[strlen(digits)] = '\0'; 
}

void output_string(const char *str) 
{
    printf("Преобразованная строка: %s\n", str);
}

int main() 
{
    char digits[100];
    char letters[100];

    input_string(digits, sizeof(digits));
    convert_to_letters(digits, letters);
    output_string(letters);

    return 0;
}
