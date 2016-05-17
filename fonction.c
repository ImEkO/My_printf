/*
** fonction.c for header in /Users/olivie_a/My_printf/olivie_a
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Fri Apr  8 12:58:03 2016 OLIVIER Steven
** Last
** Last
 update Fri Apr  8 12:58:10 2016 OLIVIER Steven
*/

#include "my_printf.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}

void	my_put_nbr(int n)
{
  int d;
  int no;

  no = n;
  d = 1;
  if (no == -2147483648)
    {
      my_putstr("-2147483648");
      return ;
    }
  else if (n < 0)
    {
      my_putchar('-');
      no = - n;
    }
  while ((no / d) >= 10)
    {
      d = d * 10;
    }
  while (d > 0)
    {
      my_putchar((no / d) % 10 + 48);
      d = d / 10;
    }
}


int	my_strlen(char *str)
{
  int a;

  a = 0;
  while (*str != '\0')
    {
      str = str + 1;
      a = a + 1;
    }
  return (a);
}

void	convertion(int a)
{
  int result;
  int i;

  i = 1;
  result = 0;
  while (a != 0)
    {
      result += (a % 8) * i;
      a /= 8;
      i *= 10;
    }
  my_put_nbr(result);
}
