# Shadow Terminal Messenger

Run with flag *Wall* *Wextra* *Werror*

```
gcc -o run shadow.c -Wall -Wextra -Werror
./run help
```

| File Name | Type     | Function Inside      | Other Stuff         |
| --------- | -------- | -------------------- | ------------------- |
| shadow.c  | Main     |                      | Main program        |
| account.c | librairy | *Login*,*NewAccount* |                     |
| msg.c     | librairy | *Send*,*Reply*       |                     |
| webhook.c | WebHooks |                      | WebHooks for Update |
