# Lesson 14

## TCP/IP

### Sockets

Sockets are the most dominant way to communicate in between processes.

How does the sender know where to send the data? aka the endpoint?

How does the Receiver know what to receive?

To communicate between processes, the server and the client must both open a socket.


#### Hosts

A host is a computer that is connected to a network.

It has three things:

- An IP address
  - Consists of 4 numbers separated by dots (ipv4)
  - Each number is between 0 and 255
  - has a network address and a host address
    - Network address defines the general location of the host
    - while the host address defines the specific location of the host within the network

- A Hostname (which is an alias for an IP address)
- A MAC address (which is a unique identifier for a network card)

#### Creating a socket

```c
#include <sys/socket.h>

fd = socket(domain, type, protocol);
```

- `domain` is the address family
  - `AF_INET` for IPv4
  - `AF_INET6` for IPv6
  - `AF_UNIX` for local communication (a path to a file)

- `type` is the type of socket
  - `SOCK_STREAM` for TCP
  - 'SOCK_DGRAM` for UDP
  - 'SOCK_RAW` for raw sockets

- `protocol` is the protocol to use
  - '0` for the default protocol
  - 'IPPROTO_TCP` for TCP
  - 'IPPROTO_UDP` for UDP
  - 'IPPROTO_RAW` for raw sockets
  - 'IPPROTO_SCTP` for SCTP
  - and so on...

it returns a file descriptor that can be used to read and write to the socket.

##### Socket types

When sending data over a socket it can be send as a stream of bytes or as a datagram.
A datagram garantees that the data is delivered at the other end, but it does not garantee the order of the data. \n
Whereas a stream garantees the order of the data, but it does not garantee that all the data is delivered.

Connections can be bidirectional or unidirectional.

