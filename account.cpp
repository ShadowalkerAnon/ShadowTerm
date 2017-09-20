#include "account.h"

// using namespace Poco::Net;
// using namespace Poco;

int login() {
  printf("Login :\nPseudo :\t");
  char * pseudo;
  scanf("\n %c", pseudo);
  printf("Password :\t");
  char psswd;
  while( (psswd=getchar()) != '\n')
        printf("*");
  printf("\n");

  printf("%s | %c\n", pseudo, psswd);
  return 0;
}

int getMe() {
  printf("Sending getMe to Shadow Terminal server ...");
  return 0;
}

int NewAccount () {
  char * username;
  char * name;
  char * email;
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

void test_connection() {





}
