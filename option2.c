/*
** option2.c for header in /Users/olivie_a/My_printf/olivie_a
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Tue Apr  5 14:19:18 2016 OLIVIER Steven
** Last
** Last
** Last
** Last
 update Fri Apr  8 11:25:32 2016 OLIVIER Steven
*/

#include "my_printf.h"

void	my_mod()
{
  my_putchar('%');
}

void	my_u(va_list ap)
{
  my_put_nbru(va_arg(ap, unsigned int));
}

void	my_X(va_list list)
{
  char  *base;

  base = "0123456789ABCDEF";
  hexadeci(va_arg(list, unsigned int), base);
}

void	my_x(va_list list)
{
  char  *base;

  base = "0123456789abcdef";
  hexadeci(va_arg(list, unsigned int), base);
}

int	hexadeci(unsigned int hexo, char* base)
{
  unsigned int count;
  unsigned int len;

  len = my_strlen(base);
  count = 0;
  while (hexo >= len)
    {
      hexo -= len;
      count++;
    }
  if (count > 0)
    {
      hexadeci(count,base);
    }
  my_putchar(base[hexo]);
  return (0);
}
