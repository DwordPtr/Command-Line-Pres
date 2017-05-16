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
PATH=$PATH:/path/to/bin
export JAVA_HOME=/usr/lib/jvm/java-8-oracle
--endoutput
--center The shell like any other programming language has env variables and a path.


The main difference is your shell's path will have scripts and applications on it instead of classes.
The path is just a variable with a semicolon seperated list of folders where you non-recursively search for binaries to run.
The majority of package managers simply put binaries on a path only root can edit which is why
they have to be run in root. This is why the folders where binaries go tend to have so many entries.

Many of these configs are likely found in your .bashrc/.zshrc file.
There's less difference between env vars and local vars than in other languages but there is one, remember the 'export' keyword

--newpage solution
--heading $Shell great for high entropy situtaions!
--beginoutput
ip=`ip addr list eno1 | grep "inet" | top | awk '{print $2}' | xargs dirname`
--endoutput
Just like graphical programming languages are still not a thing,
because textual languages are better at providing alot of info relative to space.

The shell is great for providing a lot of info in short space.
The shell is bad for situtations with alot of logic and readability
