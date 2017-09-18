# Shadow Terminal Messenger

Shadow Terminal is a easy/fast/scure way to send message throught terminal
> We're ussing Revolutions.network server

Compatibility :

| OS     | Version | Full Works | Works at    |
| ------ | ------- | ---------: | ----------- |
| OSX    | latest  | 100%       |             |
| Linux  | latest  |            | sould *90%* |
| Windob | LOL     |    LOL     |     LOOL    |

Run with flag *Wall* *Wextra* *Werror*

```
gcc -o run shadow.c -Wall -Wextra -Werror
./run help
```

| File Name | Type     | Function Inside      | Other Stuff         |
| --------- | -------- | -------------------- | ------------------- |
| shadow.c  | Main     |                      | Main program        |
| account.c | library  | *Login*,*NewAccount* |                     |
| msg.c     | library  | *Send*,*Reply*       |                     |
| system.c  | library  | *getMe*,*update*     |                     |
| webhook.c | WebHooks |                      | WebHooks for Update |
