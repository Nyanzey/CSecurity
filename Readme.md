# College security course

## Environment Variable and Set-UID Lab (Notes)

- Use env or printenv to see environment variables or "printenv PWD" for a certain one. **(2.1)**

- Use export to set and "unset" to unset the env variables. **(2.1)**

- Child process inherits the parent's environment variables. **(2.2)**

- Whent using execve() it gets a copy of parent's env variables stored in "extern char environ". **(2.3)**

- System(cmd) executes a shell and tells it to execute the command. The environment variables of the calling process is passed to the "/bin/sh" program. **(2.4)**

- The env variables set in parent process get into the set-UID child process. **(2.5)**

- Modifying the PATH env variable in bash can affect how the set-UID program with root privileges behaves. Using system in the program will make the program execute the first program with the name specified in the argument. Adding a path at the beggining of the PATH variable could cause malicious program stored there to run. **(2.6)**

- Run as normal program: executes custom sleep, run as set-UID program: executes normal sleedp, run as root set-UID program after setting ld_preload in root executes custom sleep, Last case also runs the custom sleep. **(2.7)**

- In step 1 using system(), can separate coomands with ';' and be able to execute them by passing it as argument for catall. For step 2 it doesnt because exeve has the executable and arguments separated instead of just executing whole command as system(). **(2.8)**

- When running the 'cap_leak.c' program a file is open using the effective UID of root but is not closed. After calling setuid() the privileges of root are revoked but since the file wasnt closed, it is possible to write to it as a normal user. **(2.9)**

