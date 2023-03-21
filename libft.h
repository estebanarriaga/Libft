
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// Convert string of numbers to int
int		ft_atoi(const char *str);

// Writes n zeroed bytes to the string s
void	ft_bzero(void *s, size_t n);

// allocates enough space for count objects that are size bytes of
// memory each and returns a pointer to the allocated memory.  The allocated
// memory is filled with bytes of value zero.
void	*ft_calloc(size_t count, size_t size);

// Returns true if c is an alphabetic character (a letter). 
int		ft_isalpha(int c);

// Returns true if c is a decimal digit (‘0’ to ‘9’). 
int		ft_isdigit(int c);

// Returns true if c is an alphanumeric character (a letter or number).
int		ft_isalnum(int c);

// Returns true if c is an ASCII character.
int		ft_isascii(int c);

// Returns true if c is a printeable character.
int		ft_isprint(int c);

// The ft_memchr() function locates the first occurrence of c (converted to an
// unsigned char) in string s. 
void	*ft_memchr(const void *s, int c, size_t n);

// The ft_memcmp() function compares byte string s1 against byte string s2.
// Both strings are assumed to be n bytes long.
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// The ft_memcpy() function copies n bytes from memory area src
// to memory area dst.
void	*ft_memcpy(void *dst, const void *src, size_t len);

// The ft_memmove() function copies len bytes from string src to string dst.
void	*ft_memmove(void *dst, const void *src, size_t len);

// The ft_memset() function writes len bytes of value c (converted
// to an unsigned char) to the string b.
void	*ft_memset(void *b, int c, size_t len);

// The ft_strchr() function locates the first occurrence of c (converted
// to a char) in the string pointed to by s.
char	*ft_strchr(const char *s, int c);

// This function copies the string s into a newly allocated string.
// The string is allocated using malloc
char	*ft_strdup(const char *s);

// ft_strlcat() appends string src to the end of dst.  It will append at
// most dstsize
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

// ft_strlcpy() takes the full size of the destination buffer and guarantee 
// NUL-termination if there is room.  Note that room for the
// NUL should be included in dstsize.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

// The ft_strlen() function computes the length of the string s.
size_t	ft_strlen(const char *str);

// The ft_strcmp() and strncmp() functions lexicographically compare the
// null-terminated strings s1 and s2.
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// The ft_strnstr() function locates the first occurrence of the null-terminated
// string needle in the string haystack, where not more than len
// characters are searched.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// The ft_strchr() function locates the first occurrence of c (converted to a
// char) in the string pointed to by s.
char	*ft_strrchr(const char *s, int c);

// The ft_tolower() function converts an upper-case letter to the corresponding
// lower-case letter.
int		ft_tolower(int c);

// The ft_toupper() function converts a lower-case letter to the corresponding
// upper-case letter.
int		ft_toupper(int c);

// Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’.
char	*ft_strtrim(const char *s1, const char *set);

// Usando malloc() devuelve una substring de
// la string ’s’.
// La substring empieza desde el índice ’start’ y
// tiene una longitud máxima ’len’.
char	*ft_substr(const char *s, unsigned int start, size_t len);

// Usando malloc() devuelve una nueva
// string, formada por la concatenación de ’s1’ y ’s2’
char	*ft_strjoin(const char *s1, const char *s2);

// Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’. La
// string resultante se devuelve con una reserva de
// malloc(3)
char	*ft_strtrim(const char *s1, const char *set);

// Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. El
// array debe terminar con un puntero NULL.
char	**ft_split(char const *s, char c);

// Utilizando malloc(3), genera una string que
// represente el valor entero recibido como argumento.
// Los números negativos tienen que gestionarse.
char	*ft_itoa(int n);

// A cada carácter de la string ’s’, aplica la
// función ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y el propio carácter. Genera
// una nueva string con el resultado del uso sucesivo
// de ’f’
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// A cada carácter de la string ’s’, aplica la función
// ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y la dirección del propio
// carácter, que podrá modificarse si es necesario
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// Imprime un caracter con el File Descriptor
void	ft_putchar_fd(char c, int fd);

// Imprime un string con el File Descriptor
void	ft_putstr_fd(char *s, int fd);

// Imprime un tring con el File Descriptor y un '\n'
void	ft_putendl_fd(char *s, int fd);

// Imprime un int con su File Descriptor
void	ft_putnbr_fd(int n, int fd);

// content: la información contenida por el nodo.
// next: la dirección del siguiente nodo,
// o NULL si el siguiente nodo es el último
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// Crea un nuevo nodo utilizando malloc().
// La variable miembro 'content' se inicializa con
// el contenido del parametro 'content'. La variable
// 'next', con NULL.
t_list	*ft_lstnew(void *content);

// lst: El principio de la lista
// Devuelve el último nodo de la lista
t_list	*ft_lstlast(t_list *lst);

// Itera la lista 'lst' y aplica la funcion 'f' al
// contenido de cada nodo. Crea una lista resultante de la
// aplicación correcta y sucesiva de la funcion 'f' sobre cada
// nodo. La funcion 'del' se utiliza para elminiar el contenido de
// un nodo, si hace falta.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// Cuenta el número de nodos en la lista
int		ft_lstsize(t_list *lst);

// Añade el nodo 'new' al final de la lista 'lst'
void	ft_lstadd_back(t_list **lst, t_list *new);

// Añade el nodo ’new’ al principio de la lista ’lst’.
void	ft_lstadd_front(t_list **lst, t_list *new);

// Toma como parámetro el nodo 'lst' y libera la memoria
// del contenido utilizando la función 'del', además de 
// liberar el nodo.
// La memoria de 'next' no debe liberarse.
void	ft_lstdelone(t_list *lst, void (*del)(void *));

// Elimina y libera el nodo 'lst' dado y todos los
// consecutivos de ese nodo, utilizando la función
// 'del' y free()
// Al final, el puntero a la lista debe ser NULL
void	ft_lstclear(t_list **lst, void (*del)(void*));

// Itera la lista 'lst' y aplica la funcion 'f' en el
// contenido de cada nodo
void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif