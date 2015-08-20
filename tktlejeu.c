
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
  
void    combat_Bot_vs_Son_goku(void)
{
  char action[5];
  int la;
  int lc;
  int vie1;
  int vie2;
  int t;
  int k;
  int a;

  vie1 = 15;
  vie2 = 15;
  t = 0;

  getchar();
  printf("\n\n");
  printf("          BOT  VS  SON GOKU\n\n\n");
  getchar();
  while (vie2 > 0)
    {
      if(t == 0);
      {
	if(vie2 <= 0 || vie1 <= 0)
	  break;
	printf("\n");
	printf("\n");
	printf("<%d PV restants / %d PV ennemis> Que voulez vous faire BOT: \n\n", vie2, vie1);
	printf("1. LittleDown : 3 pts d'attaque.\n");
	printf("2. Keylogger : X pts d'attaque(fallait te souvenir).\n");
	printf("3. ShutDown : 4 pts d'attaque pour votre adversaire et 2 pts d'attaque dans ta face.\n");
	scanf("%d", a);
	la = a;
	if(la == 1 || la == 2 || la == 3)
	  {
	    if (la == 1)
	      {
		phrase("Vous avez décider de le faire lagger avec un LITTLE DOWN !\n\n");
		getchar();
		printf("SON GOKU recois 3 point de dégats\n");
		vie1 = vie1 - 3;
		t = 1;
		getchar();
	      }
	    else if (la == 2)
	      {
		printf("Un Keylogger ! Ben ouai tu t'auto-baise.\n\n");
		getchar();
		printf("SON GOKU recois %d point de degats\n", k);
		vie1 = vie1 - k;
		t = 1;
		getchar();
	      }
	    else if (la == 3)
	      {
		printf("\nSHUT................DOWN !!\n\n");
		getchar();
		printf("SON GUKO recois 4 point de degats et BOT recois 2 points de degats\n");
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
	  printf("<%d PV restants / %d PV ennemi> Que voulez vous faire SON GUKO:\n", vie1, vie2);
	  printf("1. Kamehameha : 1 point de degat.\n");
	  printf("2. ShogekiHa : 3 points de degat + 2 pv pour vous\n");
	  printf("3. Super-Genkidama : 5 points de degat a tout le monde.\n");
	  scanf("%s", action);
	  la = longueur(action);
	  if(la == 10 || la == 9 || la == 15)
	    {
	      if (la == 10)
		{
		  printf("\nKAAAAAAAAAAAAAAAAAAA\n");
		  printf("\n");
		  printf("MEEEEEEEEEEEEEEEEEEEEEEE\n");
		  printf("\n");
		  printf("HHHHHHHHHHAAAAAAAAAAAAAAAAAAA\n");
		  printf("\n");
		  printf("MMMMMMMMMMEEEEEEEEEEEEEEEEEEEEEEEE\n");
		  printf("\n");
		  printf("HHHHHHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA !!!!!!!\n");
		  printf("\n");
		  getchar();
		  printf("BOT recois 1 point de degat\n");
		  vie2 = vie2 - 1;
		  k = 1;
		  t = 1;
		  getchar();
		}
	      else if (la == 9)
		{
		  printf(" |===== %85 chargement du ki... 100%. YAAAAAAAAAAAAAAAAAAAAAAh\n");
		  getchar();
		  printf("\n");
		  printf("BOT recois 3 points de degat et SON GOKU gagne 2 points de PV\n", k);
		  vie2 = vie2 - 3;
		  vie1 += 2;
		  k = 3;
		  t = 1;
		  getchar();
		}
	      else if (la == 15)
		{
		  printf("TERRIENS PRETEZ MOI VOTRE FORCE !!!\n");
		  getchar();
		  printf("\n");
		  printf("BOT recois 5 point de degat et SON GOKU recois 5 points de degat\n");
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

      printf(" -------- FIN DE PARTIE --------  \n");
      printf(" ________________________________\n");
      printf("|                                |\n");
      printf("|%d Vie de BOT                    |\n", vie2);
      printf("|%d vie de SON GUKO               |\n", vie1);
      printf("|                                |\n");
      printf("|________________________________|\n");
      getchar();
      main();
}

void    intro_duel(void)
{
  int combatant;

  printf("Salut a toi grand guerrier, te voici dans l'arene des Champions, seul les braves pourront y rester en vie. Fait ton choix parmis ces combats.\n\n\
");

  printf(" __________________________ \n");
  printf("|1.    BOT vs SON GOKU    |\n");
  printf("|2.      BUME vs BOT         |\n");
  printf("|3.   SON GUKO vs BUME        |\n");
  printf("|4.        RETOUR           |\n");
  printf("|__________________________|\n");
  scanf("%d", &combatant);
  printf("\n");

  switch(combatant)
    {
  case 1:
        printf("Parfait que le match commence !!\n\n");
        getchar();
        combat_Bot_vs_Son_goku();
        break;
  case 4:
    	main();
	break;
  default:
    {
        printf("selectionne le 1er, il n'y a que ça\n\n");
        intro_duel();
        break;
    }
    }
}

void	presentation_perso(void)
{
  int classe;

  printf("-------- HEROS --------\n\n");
  printf("1.       BOT\n");
  printf("2.    SON GOKU\n");
  printf("3.      BUME\n");
  printf("4.      THOR\n");
  printf("5.    BRUCE LEE\n");
  printf("6.     RETOUR\n");
  printf("Entre le numero de ton Heros\n");
  scanf("%d", &classe);
  printf("\n");

  switch (classe)
    {
    case 1:
      {
	printf("Un BOT ? c'est donc sa ta façon de combattre ...\n\n");
	getchar();
	printf("  -------- ATTAQUE --------\n\n");
	printf("1. Little Down : 3 points de degats.\n");
	printf("2. Keylloger : X points de degats(X en fonction des degats reçu ce tour ci.\n");
	printf("3. Shut Down : 4 point de degats et 2 points de degats reçus.\n\n");
	getchar();
	printf("Nous retournons au menu.\n\n");
	getchar();
	presentation_perso();
	break;
      }
    case 2:
      {
	printf("Yeaaah, charge ton ki et montre leurs ce qu'un sayen sait faire !!\n\n");
	getchar();
	printf("  -------- ATTAQUE --------\n\n");
	printf("1. Kamehameha : 1 point de degat.\n");
	printf("2. ShogekiHa : 3 points de degats a votre adversaire, 2 points points de degats pour vous.\n");
	printf("3. Super Genkidama : Tous les joueurs subissent 5 points de degats.\n\n");
	getchar();
	printf("Nous retournons au menu.\n\n");
	getchar();
	presentation_perso();
	break;
      }
    case 3:
      {
	printf("Hum... Un Corse ! ca va peter !\n\n");
	getchar();
	printf("  -------- ATTAQUE --------\n");
	printf("1. Bombe Agricole : 1 point de degat.\n");
	printf("2. Coup de Calibre : 2 points de degats.\n");
	printf("3. Vendetta : 6 points de degats au prochain tour.\n\n");
	getchar();
	printf("Nous retournons au menu.\n\n");
	getchar();
	presentation_perso();
	break;
      }
    case 4:
      {
      printf("Que mon marteau vous ecrase !!\n\n");
      getchar();
      printf("  -------- ATTAQUE --------\n\n");
      printf("1. Coup de marteau : 2 point de degat ou 3 si vous avez 50% de votre vie.\n");
      printf("2. Chatiment : 3 points de degat seront attribuer au prochain tour.\n");
      printf("3. Foudre : 4 points de degat si l'adversaire a plus de 75% de sa vie.\n\n");
      getchar();
      printf("Nous retournons au menu.\n\n");
      getchar();
      presentation_perso();
      break;

      }
    case 5:
    {
      printf("我將你他媽將你 將你將你 將你將你 !!!!.\n\n");
      getchar();
      printf("  -------- ATTAQUE --------\n\n");
      printf("1. Coup de marteau : 2 point de degat ou 3 si vous avez 50% de votre vie.\n");
      printf("2. Chatiment : 3 points de degat seront attribuer au prochain tour.\n");
      printf("3. Foudre : 4 points de degat si l'adversaire a plus de 75% de sa vie.\n\n");
      getchar();
      printf("Nous retournons au menu.\n\n");
      getchar();
      presentation_perso();
      break;
    }
    case 6:
        {
            main();
            break;
        }
    }
}

void	intro_jeu(void)
{
   printf("Bonjour jeune FREE-FIGHTER tu vas rentrez dans un duel 1 VS 1 jusqu'a la mort ...\n");
   getchar();
   printf("De la baston ?\n");
   getchar();
   printf("Je sais pas quel genre de personne tu es ... mais ...\n");
   getchar();
   printf("Mais tu vas devoir te definir en choisissant quel genre de combattant tu serais dans la vie reel...\n");
   getchar();
   printf("BEN ouais on rigole pas dans ce jeu !\n");
   getchar();
   printf("Il faut savoir que chaque style est UNIQUE en son genre.\n");
   getchar();
   printf("Maintenant laisse moi te presenter LES COMBATTANTS !\n\n\n\n\n");
}

int	main()
{
  int choix;
  intro_jeu();
  printf("            MENU \n\n ");
  printf(" 1. Informations Classes\n");
  printf(" 2.     DUEL 1 VS 1\n");
  scanf("%d", &choix);
  printf("\n");
  switch (choix)
    {
    case 1:
      {
	printf("Voici toute les information que je dispose !\n");
	getchar();
	presentation_perso();
	break;
      }
    case 2:
      {
	intro_duel();
	break;
      }
    }
  return(0);
}
