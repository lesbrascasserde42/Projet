#include <stdio.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	phrase(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
    {
      ft_putchar(str[i]);
	i++;
    }
}

int	longueur(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
    i++;
  return (i);
}

int ft_strcmp(char *s1, char *s2)
{
  while (*s1 && *s2 && !(*s1 - *s2))
    {
      s1++;
      s2++;
    }
  return (*s1 - *s2);
}

int  ft_strcmp(const char s1, const char s2)
{
  if (s1 && s2)
    {
      while (s1 == s2)
	{
	  if (*s1 == '\0')
	    return (0);
	  s1++;
	  s2++;
	}
      if ((unsigned char )s1 > (unsigned char )s2)
	return (1);
      else
	return (-1);
    }
  return (0);
}

int main()
{
  char nbr[1];
  char action[5];
  char atq1[10];
  char atq2[10];
  char j1[50];
  char j2[50];
  int la;
  int lc;
  int l1;
  int l2;
  int vie1;
  int vie2;
  int t;

  vie1 = 5;
  vie2 = 5;
  t = 0;

  phrase("Bonjour jeune joueur veuillez rentrez le nombre de baguarreurs\n");
  scanf("%s", nbr);
  printf("Vous avez choisi %s joueurs\n", nbr);
  getchar();
  phrase("Veuillez rentré le nom du joueurs 1\n");
  scanf("%s", j1);
  phrase("Veuillez rentré le nom du joueurs 2\n");
  scanf("%s", j2);
  l1 = longueur(j1);
  l2 = longueur(j2);
  printf("Le joueur 1 s'appelle : %s\nLe joueur 2 s'appelle : %s\n", j1, j2);
  getchar();
  phrase("Les deux joueurs commence a 5 point et peuvent soit attaqué de 1, soit se soigné de 1\n");
  getchar();
  phrase("Deux phase de jeu : Attaque/soin ===> La proie\n");
  getchar();
  while (vie2 != 0)
    {
      if(t = 0);
      {
	printf("%s que voulez vous faire : ATQ ou SOIN ? il vous reste %d\n", j1, vie1);
	scanf("%s", action);
	la = longueur(action);
	if (la == 3)
	  {
	    phrase("Vous avez décidez d'attaquez ! Mais qui sera votre proie ?\n");
	    scanf("%s", atq1);
	    lc = longueur(atq1);
	    if(lc == l2)
	      {
		t = 1;
		printf("%s, recois 1 point de dégats\n", j2);
		vie2--;
		getchar();
	      }
	  }
      }
      if(t = 1)
      {
	printf("%s que voulez vous faire : ATQ ou SOIN ? il vous reste %d\n", j2, vie2);
	scanf("%s", action);
	la = longueur(action);
	if (la == 3)
	  {
	    phrase("Quel joueurs voulez vous attaquez ?\n");
	    scanf("%s", atq2);
	    lc = longueur(atq2);
	    if(lc == l1)
	      {
		t = 0;
		printf("%s, recois 1 point de dégats\n", j1);
		vie1--;
	      }
	  }
      }
    }
  phrase("Recapitulatif de fin de party\n");
  printf("%d longueur de %s\n", l1, j1);
  printf("%d longueur de %s\n", l2, j2);
  printf("%d Vie de %s\n", vie1, j1);
  printf("%d vie de %s", vie2, j2);
 return(0);
}
