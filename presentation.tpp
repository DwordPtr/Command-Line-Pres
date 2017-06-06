--author Bryan Tidwell
--title cat /etc/shellBasics
--center An Intro to be productive with the commandline

--newpage "In the beggining there was a the command line" <- Neal Stephenson
--beginoutput
show me: https://www.youtube.com/watch?v=JoVQTPbD6UY
suggest me: https://www.youtube.com/watch?v=tc4ROCJYbm0
--endoutput


--heading Things that don't go away in computer science over a career
1. Need for social skills
2. Discrete math
3. Unix shell usage.



--heading What you'll get out of this

1. An idea of the kinds of problems the shell can solve.
2. An basic understanding of the shell landscape how to (productively) use the shell (I hope).
3. Some basic (intermediate?) shell commands. 
4. Some examples of command line fu for motivation.

--newpage whatisShell
--heading What is a shell
--beginoutput
echo $SHELL
--endoutput
The shell or command-line is a language with a REPL (read-eval-print loop) and enviornmental knowledge about your system.
It's very often used as a kind a glue language.
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
(There's some exciting work done with breaking the linux filesystem standard, but it's way outside scope.)

Many of these configs are likely found in your .bashrc/.zshrc file. (show .zshrc & variable setup)
There's less difference between env vars and local vars than in other languages but there is one, remember the 'export' keyword

--newpage solution
--heading $Shell great for high entropy situtaions!
--beginoutput
ip=`ip addr list eno1 | grep "inet" | top | awk '{print $2}' | xargs dirname`
--endoutput
Just like graphical programming languages are still not a thing,
because textual languages are better at providing alot of info relative to space.

The shell is great for providing a lot of info in short space.
The shell is also great for composability.
The shell is bad for situtations with alot of logic that needs to be readable.

--newpage tmux & etc
--heading Multiplexing (tmux)
--beginoutput
https://robots.thoughtbot.com/a-tmux-crash-course
https://github.com/gpakosz/.tmux
tmux attach -t $SESSION_NAME
--endoutput
These are basically window managers for the shell you should use them.
Terminal sessions are broken into tabs, panes and windows.
These are useful for debugging.

Tmux also has modes that make copy/paste from terminal more nicely vi-copy. (demo vi-copy)
Its cross platform and there are many nice things for it like .tmux (mac/linux preffered).

--newpage History
--heading History
--beginoutput
https://www.digitalocean.com/community/tutorials/how-to-use-bash-history-commands-and-expansions-on-a-linux-vps
https://spin.atomicobject.com/2016/05/28/log-bash-history/
--endoutput
Bash, Zsh and other POSIX shells keep track of history.
You can search a prevously ran command with 'ctrl+r'
There are ways to log the entire shell history or your machine to files.
This is a great idea for remembering commands and looking at what you did in the past.

--newpage Ssh
--heading Ssh (Highest Roi)
--beginoutput
ssh -X $USER@$HOST
--endoutput
Ssh stats for Secured Shell. Its an encrypted protocol for performing remote shell sessions.
Since Famc prod and test infra is ubuntu ssh can help you:
1. find db url for debugging lab from jtds-ds.xml
2. tail/pull logs to find offending exception.

You can also tunnel traffic through other machines if you need you public ip to be different. (Salesforce)

