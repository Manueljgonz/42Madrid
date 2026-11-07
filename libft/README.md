*Este proyecto ha sido creado como parte del currículo de 42 por mjusdado.*

# Libft - Tu primera librería

## Descripción
Este proyecto consiste en programar en C una librería estática (`libft.a`) que contiene implementaciones propias de funciones estándar de la biblioteca de C (`libc`), así como funciones adicionales de utilidad general y rutinas para la manipulación de listas enlazadas. 

Al estar limitados a un conjunto muy reducido de funciones permitidas en el cursus de 42, esta librería sirve como base fundamental y herramienta indispensable para simplificar el desarrollo de proyectos futuros. El objetivo es comprender a fondo el funcionamiento de las funciones estándar, el manejo de memoria dinámica, la aritmética de punteros y la creación de código robusto a prueba de fugas de memoria.

## Instrucciones
Para compilar y utilizar esta librería en tus proyectos, asegúrate de tener `cc` y `make` instalados. Todo el código cumple estrictamente con la Norminette.

1. Clona el repositorio.
2. Ejecuta uno de los siguientes comandos mediante el `Makefile` incluido:

- `make` o `make all`: Compila todos los archivos fuente de la librería y genera el archivo `libft.a`.
- `make clean`: Elimina todos los archivos objeto (`.o`) generados durante la compilación.
- `make fclean`: Elimina los archivos objeto y el binario `libft.a`.
- `make re`: Ejecuta `fclean` seguido de `make` para recompilar todo desde cero.

Para usar la librería en tu proyecto, incluye el header `"libft.h"` en tus archivos y compila tu programa añadiendo la flag `-L. -lft` (asumiendo que `libft.a` esté en el directorio de compilación).

## Descripción de la Librería
La librería está dividida en tres bloques principales de funciones:

### Parte 1 - Funciones de libc
Réplicas exactas del comportamiento de las funciones estándar de C (con el prefijo `ft_`).
* **Verificación de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.
* **Manipulación de memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
* **Manipulación de strings:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
* **Conversión y transformación:** `ft_toupper`, `ft_tolower`, `ft_atoi`.

### Parte 2 - Funciones adicionales
Herramientas utilitarias para operaciones más complejas de strings y escritura en descriptores de archivo.
* **Manipulación avanzada de strings:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split` (con protección rigurosa contra fallos de `malloc`), `ft_strmapi`, `ft_striteri`.
* **Conversión numérica:** `ft_itoa`.
* **Salida por file descriptor:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### Parte 3 - Listas Enlazadas
Conjunto de funciones para manipular la estructura personalizada `t_list`.
* **Creación y adición:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`.
* **Exploración:** `ft_lstsize`, `ft_lstlast`.
* **Modificación y limpieza:** `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Recursos
* **Manuales de Linux:** El comando `man` ha sido la referencia principal para replicar el comportamiento exacto de libc.
* **Francinette:** Framework de testing automatizado utilizado exhaustivamente para verificar el comportamiento de las funciones frente a casos extremos (edge cases), fugas de memoria y caídas por fallos de asignación (`malloc` protections).
* **Uso de IA:** Se ha utilizado inteligencia artificial de manera reflexiva y como apoyo didáctico. Específicamente, se empleó para debatir lógicas complejas de punteros, analizar flujos de ejecución en errores de segmentación (Segmentation faults) y reestructurar código para cumplir con los límites de líneas de la Norminette sin recurrir a la generación directa de código que reemplace el razonamiento personal.