# College security course

## Environment Variable and Set-UID Lab (Notes)

- Use env or printenv to see environment variables or "printenv PWD" for a certain one. (2.1)

- Use export to set and "unset" to unset the env variables. (2.1)

- Child process inherits the parent's environment variables. (2.2)

- Whent using execve() it gets a copy of parent's env variables stored in "extern char environ". (2.3)

- System(cmd) executes a shell and tells it to execute the command. The environment variables of the calling process is passed to the "/bin/sh" program. (2.4)

- The env variables set in parent process get into the set-UID child process. (2.5)

- Modifying the PATH env variable in bash can affect how the set-UID program with root privileges behaves. Using system in the program will make the program execute the first program with the name specified in the argument. Adding a path at the beggining of the PATH variable could cause malicious program stored there to run. (2.6)

