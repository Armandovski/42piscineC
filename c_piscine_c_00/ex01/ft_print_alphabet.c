#include <unistd.h>
#include <stdio.h>

//Jeito burro
/*
void ft_print_alphabet(void)
{
    //printf("%s",alphabet);
    char alphabet[28] = "abcdefghijklmnopqrstuvwxyz\n";
    write(1, &alphabet, 28);
}
*/

//Jeito ixperto
/*
void ft_print_alphabet(void)
{
    //printf("%s",alphabet);
    char letter;
    
    letter = 'a';
    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}
*/

//Jeito ixperto 2
void ft_print_alphabet(void)
{
    //printf("%s",alphabet);
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        write(1, &letter, 1);
    }
}