/*
** fonction2.c for header in /Users/olivie_a/My_printf/olivie_a
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Tue Apr  5 15:16:38 2016 OLIVIER Steven
** Last
** Last update Tue Apr  5 15:16:41 2016 OLIVIER Steven
*/

#include "my_printf.h"

void	my_put_nbru(unsigned int n)
{
  unsigned int droo;

  droo = 1;
  while ((n / droo) >= 10)
    {
      droo = droo * 10;
    }
  while (droo > 0)
    {
      my_putchar((n / droo) % 10 + 48);
      droo = droo / 10;
    }
}
