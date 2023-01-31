Lab 2

1. Read the manuals (only spend a few minutes):

   $ man man
   $ man -a intro

2. Explore the filesystem tree using cd, ls, pwd and cat. Look in /bin, /usr/bin, /sbin, /tmp and /boot. What do you see?
   - /bin contains the essential user commands
   - /usr/bin contains the non-essential user commands
   - /sbin contains the essential system commands
   - /tmp contains temporary files
   - /boot contains the boot loader

3. Explore /dev. ls -l /dev/. Try cat /dev/tty, type some things and see them repeated onscreen, Ctrl+D to end.

4. Explore /proc. Display the contents of the files interrupts, devices, cpuinfo, meminfo and uptime using cat. Can you see why we say /proc is a pseudo-filesystem which allows access to kernel data structures?
   - /prov is a pseudo filesystem it is filled with all the informations about the running processes

5. Change back into your home directory.

6. Make a directory called Unix (mkdir) and then rename it to comp20200 (mv)

7. Make a subdirectory lab2 and in it start a text file:

   $ vim lab2_commands.txt

8. For each command in the following list: (1) write a very shot sentence on what it does, (2)  give example of how it is used (example arguments).

pwd
history
rm
cat
touch
head
tail
diff
which
gcc
wc
echo
chmod
grep
find
sort
ln
du
df
w
who
whoami
finger
passwd
top
ps
kill
date
time

Save the file!

9. Copy the file /etc/passwd into your home directory (cp).

10. Move it into the subdirectory comp20200 and create a symbolic link to /proc/meminfo called meminfo_link (look at man ln).
Then:
  $ ls -l
  $ cat meminfo_link.


11. What is the output of the commands:

$echo {0..9}
- 0 1 2 3 4 5 6 7 8 9

$echo echo 1.{0..9}
- 1.0 1.1 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9

$echo {A..C}{0..2}
- A0 A1 A2 B0 B1 B2 C0 C1 C2

12. Use grep to list only the line from /proc/meminfo that shows total memory

13. Use grep to find all the lines with "to" in the syslog (/var/log/syslog). Then redirect this output into a file in your home directory.
14. List all of the files in a directory in reverse date order, so that the most resent is at the bottom (ls).
15. Use sort to sort contents of /etc/passwd
16. Use head and tail to display top and bottom lines of some files.

After you finish, ask some of the demonstrators to check your file and be ready to answer some questions regarding the task. 