#include "display.h"

void display_msg() {
  printf("Message Displayed\n");
}

void display_help() {
  printf("Shadow Terminal Messenger - v0.1 Beta\n");
  printf("Commands :\n");
  printf("help - h\t\tShow this\n");
  printf("first_init\t\tConfigure for first initialization\n");
  printf("send [username] [msg]\tSend message to a specifique user\n");
  printf("reply [msg]\t\tReply to last message\n");
  printf("getme\t\t\tGet Update");
}
