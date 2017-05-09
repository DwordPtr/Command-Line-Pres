--author Bryan Tidwell
--title cat /etc/shellBasics
--center An Intro to be productive with the commandline

--newpage outline

--heading What you'll get out of this
1. An idea of the kinds of problems the shell can solve.
2. An basic understanding of how to (productively) use the shell.
3. Some examples of command line fu for motivation.

--newpage whatisShell
--heading What is a shell
--beginoutput
echo $SHELL
--endoutput
The shell or command-line is a language with a REPL (read-eval-print loop) and enviornmental knowledge about your system.
There's a standard called POSIX shared by Mac and Linux that dictates alot of standards. Windows emulates this using virtual IO with Cygwin.


1. Unix shells generally emulate hardware
2. There's more than just bash.

--newpage Mutable State
--heading Env info
--beginoutput
printenv
--endoutput
--center The shell like any other programming language has env variables and a path.


The main difference is your path will have scripts and applications on it instead of classes.
The majority of package managers simply put binaries on a path only root can edit which is why
they have to be run in root.
