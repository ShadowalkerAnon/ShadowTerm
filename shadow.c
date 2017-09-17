// V0.2.1

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  if (argc == 1) {
    printf("Error : No argument");
    return 1;
  }

  if (strcmp(argv[1], "help") == 0 || strcmp(argv[1], "h") == 0) {
    printf("Shadow Terminal Messenger - v0.1 Beta\nCommands :\nhelp - h\t\tShow this\nsend [username] [msg]\tSend message to a specifique user\nreply [msg]\t\tReply to last message\ngetme\t\t\tGet Update");
  } else if (strcmp(argv[1], "getme") == 0) {

  } else if (strcmp(argv[1], "first_init") == 0) {
    printf("First init \nCreate Account (new) or Login In (login)\n?");
    char * anwser = malloc(20);
    scanf("\n %s", anwser);

    if (strcmp(anwser, "new") == 0) {
      char * username = malloc(20);
      char * name = malloc(20);
      char * email = malloc(20);
      char * password = malloc(20);
      char * password2 = malloc(20);
      printf("Welcome to Shadow Terminal ! \nPlease anwser the fill : \nUsername (name where we can contact you) ? @");
      scanf("\n %s", username);
      printf("Name (Display name) ? ");
      scanf("\n %s", name);
      printf("Email (for password recovery) ? ");
      scanf("\n %s", email);
      printf("Password ? ");
      scanf("\n %s", password);
      printf("Again : ");
      scanf("\n %s", password2);

      if (strcmp(password, password2) == 0) {
        printf("\n\nPlease Check this information bellow :\n");
        printf("@%s | %s | %s \n%s | %s", username,name,email,password,password2);
      } else if (strcmp(password, password2) != 0) {
        printf("Password Doesnt Match !");
      }


    } else if (strcmp(anwser, "login") == 0) {
      /* code */
    }
  }

  return 0;
}
