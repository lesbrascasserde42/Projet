#include <stdio.h>

int comparaison(char *s1, char *s2)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (s1[i] != '\0' && s2[j] != '\0')
    {
      if (s1[i] == s2[j])
	{
	  i++;
	  j++;
	}
      else
	return(1);
    }
  return(0);
}

int main(int ac, char **av)
{
  printf("%d", comparaison(av[1], av[2]));
    return(0);
}
