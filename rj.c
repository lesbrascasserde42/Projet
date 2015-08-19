#include <stdio.h>

void	perso(void)
{
  int	classe;

  printf("---- CLASSE ----\n");
  printf("1.    BOT\n");
  printf("2.  Sangoku\n");
  printf("3. Retour Menu\n");
  printf("Plus d'info sur un combattant ? choisis le chiffre que tu veux.\n");
  scanf("%d", &classe);
  printf("\n");
  switch (classe)
    {
    case 1:
	printf("Un BOT ? c'est donc sa ta façon de combattre ...\n\n");
	printf("---- ATTAQUE ----\n");
	printf("1. Little Down : 3 points de dégats.\n");
	printf("2. Keylloger : X points de dégats(X en fonction des dégats reçu ce tour ci.\n");
	printf("3. Shut Down : 4 point de dégats et 2 points de dégats reçus.\n");
	getchar();
	printf("\nLes classes de nouveau, au cas ou ;).");
	getchar();
	perso();
	break;
    case 2:
        printf("Yeaaah, charge ton ki et montre leurs ce qu'un sayen sait faire !!\n\n");
	printf("---- ATTAQUE ----\n");
	printf("1. Kamehameha : 1pt de degat.\n");
        printf("2. ShogekiHa  : 3pts de degats a votre adversaire +2pts pour vous.\n");
	printf("3. Super Genkidama : Tous les joueur subissent 5pts.\n");
	getchar();
	printf("\nLes classes de nouveau, au cas ou ;).");
	getchar();
	perso();
        break;
    case 3:
        printf("Tien Voila le menu !\n");
	getchar();
        lemenu();
	break;
    default:
	printf("\n\n\nPETIT MALIN ! -_-\n");
	getchar();
	perso();
        break;
    } 
}

void	lemenu(void)
{
  int choix;

  printf("    ••••• MENU ••••• \n");
  printf("1. Information Classes\n");
  printf("2.     DUEL 1VS1\n");
  scanf("%d", &choix);

  switch (choix)
    {
    case 1:
      printf("Voici toute les information que je dispose !\n");
      getchar();
      perso();
      break;
    default:
      printf("\nEssaie encore jeune padawan ...\n");
      lemenu();
      break;
    }
}


void	explication(void)
{
  printf("Bonjour jeune FREE-FIGHTER tu vas rentrez dans un duel 1 VS 1 jusqu'a la mort ...\n");
  getchar();
  printf("De la baston ? (je suis sur tu commences déjà a kiffé !)\n");
  getchar();
  printf("Je sais pas quel genre de personne tu es ... mais ...\n");
  getchar();
  printf("Tu vas devoir te définir en choisissant quel genre de combattant tu serais dans la vie réel.\n");
  getchar();
  printf("BEN ouai on rigole pas dans ce jeu !\n");
  getchar();
  printf("Il faut savoir que chaque style est UNIQUE en son genre.\n");
  getchar();
  printf("A partir de MAINTENANT tu es sur le point de non retour ...\n");
  getchar();
  printf("Tu vas etre dirigé vers le menu tout simplement *siflement au calme*\n");
}

int	main()
{
  explication();
  lemenu();
  return(0);
}
