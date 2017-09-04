## SiFive Freedom E310 HiFive1 board specific files

### How to use

The standard way to include the board files is

```c
#include <micro-os-plus/board.h>
```

## Developer info

This section is intended to developers who plan to include this library in their own projects.

### Easy install

The source files are available from [GitHub](https://github.com/micro-os-plus/sifive-hifive1-board):

```bash
$ git clone https://github.com/micro-os-plus/sifive-hifive1-board.git sifive-coreplex-hifive1-board.git
```

The library will shortly be available from the npm registry:

```bash
$ npm install @sifive/hifive1-board
```

### Prerequisites

The source code require a modern C++ compiler, preferably GCC 5 or higher, but was also compiled with GCC 4.8. 

## License

The original content is released under the MIT License, with all rights reserved to Liviu Ionescu.
