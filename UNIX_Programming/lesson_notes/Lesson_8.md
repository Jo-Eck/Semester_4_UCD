# Compiling

## 4 Phases of compiling

- Preprocessing
  - Text substitution
  - Striping comments
  - Lines beginning with # will be preprocessed
- Compiling
  - convert source code to assembly code for the target machine
- Assembling
  - convert source code to machine code
  - leaves the addresses of external functions undefined
    - this get resolved in the linking phase
- Linking
  - resolve the addresses of external functions
  - combine the machine code with the libraries
  - can be statically coded into the executable
    - the executable will be larger
  - or dynamically linked
    - the executable will be smaller
    - the libraries will be loaded at runtime
    - the libraries can be updated without recompiling the executable
