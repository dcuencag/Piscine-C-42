#include <unistd.h> //Librería que contiene la función write

void ft_putchar(char c)//Creación de la función y entre parentesis creación de variable
{
	write(1, &c, 1);//Declaración de la funcion write que se ejecuta al llamar a la función original
}
/*
int main(void)
{
	ft_putchar('H');
}*/
