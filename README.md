<h1 align="center">libft</h1>
<p>Useful functions in C language.</p>

## Usage

> Clone libft in you project directory

```c
#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "Looks good";
	printf("%zu\n", ft_strlen(str));
}
```

## Run

```sh
cd libft && make && cd .. && gcc main.c ./libft/libft.a && ./a.out
```
