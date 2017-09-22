# Shadow Terminal Messenger

Shadow Terminal is a easy/fast/secure way to send message throught terminal
> We're ussing Revolutions.network server

Compatibility :

| OS     | Version | Full Works | Works at     |
| ------ | ------- | ---------: | ------------ |
| OSX    | latest  | 100%       |              |
| Linux  | latest  |            | should *90%* |
| Windob | LOL     |    LOL     |     LOOL     |

~~Run with flag *Wall* *Wextra* *Werror*~~
~~gcc -o run shadow.c display.c display.h -Wall -Wextra -Werror~~
~~./run help~~

You can now use the *makefile* for compile :
```
make || make build
```

| File Name | Type     | Function Inside              | Other Stuff         |
| --------- | -------- | ---------------------------- | ------------------- |
| shadow.c  | Main     |                              | Main program        |
| account.c | library  | *Login*,*NewAccount*         |                     |
| msg.c     | library  | *Send*,*Reply*               |                     |
| system.c  | library  | *getMe*,*update*             |                     |
| display.c | library  | *display_msg*,*display_help* |                     |
| webhook.c | WebHooks |                              | WebHooks for Update |
