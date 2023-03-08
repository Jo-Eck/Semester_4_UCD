# Lesson 13 Unix Network

## Ifconfig

* ifconfig is a command that displays the network configuration of the machine
* it is used to configure the network interface
* it is now deprecated and replaced by ip!
* why is it still being taught???

## SSH

* SSH is a protocol that allows you to connect to a remote machine and execute commands on it
* it is the replacement for telnet, which is insecure
* its the gold standard for remote access to a machine, including port forwarding, X11 forwarding, etc
* its great!

## SSH Keys

SSH is often used with keys, which are a way of authenticating a user without having to enter a password.
It is a public/private key pair, where the private key is kept secret and the public key is shared with the server.
sshkeys are nowerdays used for many different utilities which need a simple way to authenticate a user, like git, cloud services, etc.

By default the keys are stored in ~/.ssh/id_rsa and ~/.ssh/id_rsa.pub
to generate a new key pair, use the command ssh-keygen

To copy the public key to a remote machine, use the command `ssh-copy-id`

```zsh
ssh-keygen 
ssh-copy-id -i ~/.ssh/id_rsa.pub user@host
```

## SSH tools

### SCP

* SCP is a tool for copying files between machines  
* it simply copies the file from one machine to another over an encrypted connection

### SSHFS

* SSHFS is a tool for mounting a remote filesystem over ssh
* it allows you to access files on a remote machine as if they were local

## Sockets

* like everything else in unix, sockets are files
* they are used to communicate between processes and machines
