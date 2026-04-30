

#include <unistd.h>

int ft_atoi(char *s)
{
  int i = 0;
  int res = 0;
  if (s[0] == '-')
    return 0;
  while (s[i] >= '0' && s[i] <= '9') {
    res = res * 10 + (s[i] - 48);
    i++;
  }
  return res;
}

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if (nb >= 10)
    ft_putnbr(nb / 10);
  ft_putchar(nb % 10 + '0');
}

int is_prime(int i)
{
  int n = 2;
  if (i < 2)
    return 0;
  while (n < i)
  {
    if (i % n == 0)
      return 0;
    n++;
  }
  return 1;
}

int main(int argc, char *argv[])
{
  int i = 2;
  int sum = 0;
  if (argc == 2) {
    int n = ft_atoi(argv[1]);
    while (i <= n)
    {
      if (is_prime(i))
        sum += i;
      i++;
    }
  }
  ft_putnbr(sum);
  write(1, "\n", 1);
  return 0;
}



