*Este proyecto ha sido creado como parte del currículo de 42 por mjusdado.*

# Get Next Line (GNL)

## Descripción

El proyecto **Get Next Line** consiste en programar una función que devuelve una línea leída desde un descriptor de archivo (file descriptor). Este proyecto no solo añade una herramienta muy útil a nuestra colección de funciones en C, sino que también introduce y asienta el concepto vital de las **variables estáticas** en la programación.

Llamar a esta función de manera repetida (por ejemplo, dentro de un bucle) permite leer el contenido del texto al que apunta el descriptor de archivo, línea a línea, hasta llegar al final del mismo (EOF).

## Algoritmo y Lógica

El reto principal de este proyecto es recordar el texto sobrante después de encontrar un salto de línea (`\n`), ya que la función `read()` extrae datos en bloques (determinados por `BUFFER_SIZE`) y es muy probable que leamos parte de la siguiente línea antes de tiempo.

El algoritmo implementado sigue estos pasos lógicos:

1. **Lectura y Acumulación:** Utilizamos la función `read()` para leer el archivo en bloques del tamaño dictado por `BUFFER_SIZE`. Este contenido temporal se concatena con lo que ya tengamos almacenado en nuestra variable estática de lecturas anteriores.

2. **Búsqueda del Salto de Línea:** Después de cada lectura, buscamos un carácter `\n` en nuestro texto acumulado.

3. **Extracción de la Línea:** Si encontramos un `\n` (o llegamos al final del archivo), separamos el texto acumulado en dos partes:

   * La línea actual (desde el inicio hasta el `\n` incluido), que es lo que la función devuelve.

   * El resto del texto (todo lo que va después del `\n`), que se guarda de nuevo en la variable estática para la próxima llamada a la función.

4. **Limpieza de Memoria:** A lo largo de todo el proceso, y especialmente al llegar al EOF o en caso de error, se libera correctamente la memoria (`malloc`/`free`) para evitar *leaks*.

## Parte Bonus

Este repositorio incluye la parte Bonus del proyecto, la cual amplía la funcionalidad base con los siguientes requisitos:

* **Una sola variable estática:** El código está optimizado para funcionar utilizando una única variable estática.

* **Múltiples File Descriptors simultáneos:** La función es capaz de gestionar la lectura de varios descriptores de archivo a la vez sin perder el hilo de lectura de ninguno de ellos.

  * *Justificación técnica:* Para lograr esto con una sola variable estática, se ha utilizado un array de punteros estático (ej. `static char *backup[1024]`). El índice del array corresponde al número del *file descriptor*, lo que permite mantener un buffer independiente para cada archivo abierto de forma simultánea.

## Instrucciones

### Requisitos previos

Para compilar y utilizar esta función, necesitas un compilador de C (como `cc` o `gcc`).

### Compilación y Ejecución

La función se compila junto a tu programa principal utilizando el flag `-D BUFFER_SIZE=n`, donde `n` es el tamaño del bloque de bytes que leerá la función de una sola vez.

Ejemplo de compilación con un buffer de 42:

```bash
cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
```

Para usar la versión **Bonus**, asegúrate de compilar los archivos correspondientes:

```bash
cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c main.c
```

### Uso en tu código (Leyendo de un archivo)

Simplemente incluye la cabecera en tu archivo de C y pásale el File Descriptor del archivo abierto:

```c
#include "get_next_line.h" // o get_next_line_bonus.h
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("archivo.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

### Lectura desde la Entrada Estándar (stdin)

Además de leer desde archivos, `get_next_line` está diseñada para comportarse correctamente cuando lee desde la entrada estándar o `stdin` (por ejemplo, cuando el usuario escribe en la terminal o se redirige la salida de otro comando a tu programa).

En sistemas Unix, el *File Descriptor* asignado por defecto al Standard Input es el `0`. Simplemente pásale este valor a la función:

```c
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    char *line;

    printf("Escribe algo y presiona Enter (Ctrl+D para enviar EOF y salir):\n");
    // Pasamos el File Descriptor 0 que corresponde a 'stdin'
    while ((line = get_next_line(0)) != NULL)
    {
        printf("Has escrito: %s", line);
        free(line);
    }
    return (0);
}
```

## Recursos

* **Documentación de C:** Manuales de `man` para las funciones permitidas (`read`, `malloc`, `free`, `open`, `close`).

* **Conceptos de Memoria y Variables Estáticas:** Recursos estándar de programación en C sobre el ciclo de vida de la memoria estática (Data Segment) frente a la memoria dinámica (Heap).

* **Uso de IA:** Siguiendo las directrices y la filosofía de 42, se ha utilizado inteligencia artificial (LLMs) exclusivamente de manera consultiva para afianzar conceptos teóricos. En concreto, se utilizó para comprender el ciclo de vida y alcance temporal de las variables estáticas en C, y para visualizar mentalmente el manejo de arrays de punteros estáticos requeridos en la parte Bonus. No se ha generado ni copiado código directamente desde la IA, garantizando así un aprendizaje real y el desarrollo del razonamiento lógico propio.