# Purpose

Just to realize the function as the command 'pause' on Windows does on Linux.

# Building

Requirement.

cmake >= 3.9

GCC, or any other available C compiler.

```bash
mkdir build && cd build
cmake ..
cmake --build .
cmake --install .
```

# Application
## Runtime

After you add the directory of 'pause' into the environment PATH, you can use 'pause' in your terminal. You will get

```bash
Press any key to continue
```

## Programming

You can refer to the following example.

```C
#include<stdio.h>
#include"winpause/pause-func.h"

int main(int argc, char *argv[])
{
	printf("1st line\n");
	winpause();
	printf("2nd line\n");
	return 0;
}
```

Then compile it

```bash
gcc main.c -o main -I<your header path> -L<your library path> -lwinpause
```

