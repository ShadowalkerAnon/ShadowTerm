// V0.2.1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "account.h"
#include "display.h"

int main(int argc, char const *argv[]) {

  if (argc == 1) {
    display_msg();
    // srand(time(0));
    // int nsecret = (rand() % (100000000 + 1 - 5000000)) + 100000;
    // printf("%i\n", nsecret);
    return 1;
  }

  if (strcmp(argv[1], "help") == 0 || strcmp(argv[1], "h") == 0) {
    display_help();
  } else if (strcmp(argv[1], "getme") == 0) {
    getMe();
  } else if (strcmp(argv[1], "first_init") == 0) {
    printf("First init \nCreate Account (new) or Login In (login)\n?");
    char * anwser = malloc(20);
    scanf("\n %s", anwser);
    if (strcmp(anwser, "new") == 0) {
      NewAccount();
    } else if (strcmp(anwser, "login") == 0) {
      login();
    }
  } // else if (strcmp(argv[1], ""))

  return 0;
}
