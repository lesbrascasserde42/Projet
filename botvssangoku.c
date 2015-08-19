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

int main()
{
  char action[5];
  int la;
  int lc;
  int vie1;
  int vie2;
  int t;
  int k;

  vie1 = 15;
  vie2 = 15;
  t = 0;

  getchar();
  printf("BOT | VERSUS | Sangoku");
  getchar();
  while (vie2 > 0)
    {
      if(t == 0);
      {
	if(vie2 <= 0 || vie1 <= 0)
	  break;
	printf("\n");
	printf("\n");
	printf("(%d pdv restant)Que voulez vous faire BOT:\n", vie2);
	getchar();
	printf("LittleDown : 3 dmg.\n");
	printf("Keylogger : X dmg (fallait te souvenir).\n");
	printf("ShutDown : 4 dmg et 2 dmg dans ta face.\n");
	scanf("%s", action);
	la = longueur(action);
	if(la == 10 || la == 9 || la == 8)
	  { 
	    if (la == 10)
	      {
		phrase("Vous avez décider de le faire lagger avec un LITTLE DOWN !\n");
		getchar();
		printf("\n");
		printf("Sangoku recois 3 point de dégats\n");
		vie1 = vie1 - 3;
		t = 1;
		getchar();
	      }
	    else if (la == 9)
	      {
		printf("Un Keylogger ! va falloire évité de ...\n");
		getchar();
		printf("\n");
		printf("Sangoku recois %d point de dégats\n", k);
		vie1 = vie1 - k;
		t = 1;
		getchar();
	      }
	    else if (la == 8)
	      {
		printf("SHUT................DOWN !!\n");
		getchar();
		printf("\n");
		printf("Sangoku recois 4 point de dégats et BOT recois 2 points de dégats\n");
		vie1 = vie1 - 4;
		vie2 = vie2 - 2;
		t = 1;
		getchar();
	      }
	  }
	else
	  t = 1;
      }
      if(t == 1)
	{
	  if(vie1 <= 0 || vie2 <= 0)
	    break;
	  printf("\n");
	  printf("\n");
	  printf("(%d pdv restant) Que voulez vous faire Sangoku:\n", vie1);
	  getchar();
	  printf("Kamehameha : 1 dmg.\n");
	  printf("ShogekiHa : 3 dmg +2 pdv\n");
	  printf("SuperGenkidama : 5 dmg a tousle monde.\n");
	  scanf("%s", action);
	  la = longueur(action);
	  if(la == 10 || la == 9 || la == 14)
	    {
	      if (la == 10)
		{
		  printf("KAAAAAAAAAAAAAAAAAAAAAA\n");
		  printf("\n");
		  getchar();
		  printf("Méééééééééééééééééééééé\n");
		  printf("\n");
		  getchar();
		  printf("AAAAAHHHHHHHHHHHHHHHHHHHHH\n");
		  printf("\n");
		  getchar();
		  printf("MMMMMMMMMMEeeeeeeeéééééééééééééééééééé\n");
		  printf("\n");
		  getchar();
		  printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA !!!!!!!\n");
		  printf("\n");
		  getchar();
		  printf("BOT recois 1 point de dégats(tant de getchar pour si peu de dmg)\n");
		  vie2 = vie2 - 1;
		  k = 1;
		  t = 1;
		  getchar();
		}
	      else if (la == 9)
		{
		  printf("ShogekiHa ! (j'avais rien en tête déso)\n");
		  getchar();
		  printf("\n");
		  printf("BOT recois 3 point de dégats et Sangoku gagne 2 pdv\n", k);
		  vie2 = vie2 - 3;
		  vie1 += 2;
		  k = 3;
		  t = 1;
		  getchar();
		}
	      else if (la == 14)
		{
		  printf("TERRIENS PRETEZ MOI VOTRE FORCE !!!\n");
		  getchar();
		  printf("\n");
		  printf("BOT recois 5 point de dégats et Sangoku recois 5 points de dégats\n");
		  vie2 = vie2 - 5;
		  vie1 = vie1 - 5;
		  k = 5;
		  t = 1;
		  getchar();
		}
	    }
	  else
	    t = 0;
	}
    }
      phrase("Recapitulatif de fin de party\n");
      printf(" ________________________________\n");
      printf("|                                |\n");
      printf("|%d Vie de BOT                    |\n", vie2);
      printf("|%d vie de Sangoku                |\n", vie1);
      printf("|                                |\n");
      printf("|________________________________|\n");
      return(0);
}
  
