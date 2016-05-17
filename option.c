/*
** option.c for header in /Users/olivie_a/My_printf/olivie_a
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Tue Apr  5 14:19:10 2016 OLIVIER Steven
** Last
** Last
 update Tue Apr  5 14:19:11 2016 OLIVIER Steven
*/
#include "my_printf.h"

void	my_s(va_list ap)
{
  my_putstr(va_arg(ap, char*));
}

void	my_d(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void	my_c(va_list ap)
{
  my_putchar((char) va_arg(ap, int));
}

void	my_i(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void	my_o(va_list ap)
{
  convertion(va_arg(ap, unsigned int));
}
