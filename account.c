#include "account.h"


int login() {
  printf("Login :\nPseudo :\t");
  char * pseudo = malloc(30);
  scanf("\n %s", pseudo);
  printf("Password :\t");
  int *psswd[25];
  while( (psswd=getchar()) != '\n')
        printf("*");
  printf("\n");

  printf("%s | %s\n", pseudo, psswd);
  return 0;
}

int getMe() {
  printf("Sending getMe to shadow terminal server ...");
  return 0;
}

int NewAccount () {
  char * username = malloc(20);
  char * name = malloc(20);
  char * email = malloc(20);
  printf("Welcome to Shadow Terminal ! \nPlease anwser the fill : \nUsername (name where we can contact you) ? @");
  scanf("\n %s", username);
  printf("Name (Display name) ? ");
  scanf("\n %s", name);
  printf("Email (for password recovery) ? ");
  scanf("\n %s", email);
  char * password = getpass("Password ? ");
  printf("%s\n", password);
  char * password2 = getpass("Again : ");
  printf("%s\n", password2);
  if (strcmp(password, password2) == 0) {
    printf("\n\nPlease Check this information bellow :\n");
    printf("@%s | %s | %s \n%s | %s", username,name,email,password,password2);
  } else if (strcmp(password, password2) != 0) {
    printf("Password Doesnt Match !");
  }

  return 0;
}
