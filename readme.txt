											ft_printf

a project that's made to replicate the printf function, with all its errors.

the mandatory part includes the "cspuidxX%" flags, using v_args to implement the function, without buffer management.

the bonus part includes the "-+." and the "0 #" flags, however due to time constrains, i was unable to implement it.

the project's aim is to introduce the students to Macro and V_args, and provide an alternative way to use the printf function without the restrains of the original (can be edited/fixed for later use).

you are encouraged to link the project to your libft, and while it's not mandatory, it'll be used for later project so it's better to get it on.

things to note:

you don't need Malloc in the project, all the functions are easy to implement.
the major difference between putnbr and hexa is the conversion to decimal vs the conversion to octal, otherwise the functions are almost identical.
the major difference between hexa and void* is that void* demands long long unsigned (or size_t) while hexa handles it without conversion.
hexa, string and void* all has their own NULL return value.

Good luck in the project, and have fun.
