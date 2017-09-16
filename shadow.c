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
    scanf("%c", anwser);

    fgets(anwser, 20);
    if (strcmp(anwser, "new") == 0) {
      printf("%s\n",anwser);
    } else if (strcmp(anwser, "login") == 0) {
      char * username = malloc(20);
      char * password = malloc(20);
      printf("username: ");
      scanf("%c", username);
      printf("password: ");
      scanf("%c", password);

      printf("login : %s | password : %s \n",username, password);
    }
  }

  return 0;
}
