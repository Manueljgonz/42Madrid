*Este proyecto ha sido creado como parte del currículo de 42 por mjusdado.*

# ft_printf

## Descripción

El proyecto **ft_printf** consiste en recodificar la función estándar `printf` de la biblioteca `<stdio.h>`. Su propósito principal es profundizar en el funcionamiento de las funciones variádicas en el lenguaje C, el procesamiento secuencial de cadenas de formato y la conversión de diferentes tipos de datos a su representación en texto para la salida estándar.

El valor de retorno de la función reproduce el estándar: devuelve el número total de caracteres impresos (o un número negativo en caso de error).

### Conversiones Soportadas

La implementación gestiona las siguientes especificaciones:

* `%c`: Imprime un único carácter.

* `%s`: Imprime una cadena de caracteres. Si el puntero recibido es nulo, imprime `(null)`.

* `%p`: Imprime la dirección de memoria de un puntero en formato hexadecimal en minúsculas, anteponiendo el prefijo `0x`. Si el puntero es nulo, imprime `(nil)`.

* `%d` / `%i`: Imprime un número entero con signo en base 10 (gestionando límites de tipos como `-2147483648`).

* `%u`: Imprime un número decimal sin signo en base 10.

* `%x`: Imprime un número hexadecimal en base 16 utilizando caracteres en minúscula (`0123456789abcdef`).

* `%X`: Imprime un número hexadecimal en base 16 utilizando caracteres en mayúscula (`0123456789ABCDEF`).

* `%%`: Imprime el carácter literal `%`.

## Instrucciones

### Requisitos

* Compilador `cc` (`gcc` o `clang`).

* Utilidad `make`.

* Entorno POSIX (Linux o macOS).

### Compilación de la Biblioteca

Para compilar la librería estática `libftprintf.a`, ejecuta en la raíz del proyecto:

```
make

```

El `Makefile` realiza las siguientes acciones:

1. Invoca la compilación de la biblioteca auxiliar ubicada en `./libft` mediante `make -C libft`.

2. Duplica `libft.a` como base de `libftprintf.a`.

3. Compila los archivos fuente de `ft_printf` con los flags obligatorios `-Wall -Wextra -Werror`.

4. Empaqueta los objetos resultantes en `libftprintf.a` utilizando el comando `ar -rcs`.

### Comandos Adicionales del Makefile

* `make clean`: Elimina todos los archivos objeto (`.o`) tanto del directorio raíz como de `libft`.

* `make fclean`: Ejecuta `clean` y elimina el archivo de biblioteca `libftprintf.a` y `libft/libft.a`.

* `make re`: Ejecuta `fclean` seguido de `all` para reconstruir todo el proyecto desde cero.

### Integración en un Proyecto

Para utilizar `ft_printf` en un programa C:

1. Incluye el archivo de cabecera:

   ```
   #include "ft_printf.h"
   
   ```

2. Compila el programa enlazando el archivo `libftprintf.a`:

   ```
   cc -Wall -Wextra -Werror main.c libftprintf.a -o mi_programa
   
   ```

3. Ejecuta el binario:

   ```
   ./mi_programa
   
   ```

## Decisiones Técnicas: Algoritmo y Estructuras de Datos

### 1. Manejo de Argumentos Variádicos (`<stdarg.h>`)

* **Estructura:** Se utiliza el tipo `va_list` junto con las macros `va_start`, `va_arg` y `va_end`.

* **Justificación:** Dado que el número y tipo de los argumentos no se conoce en tiempo de compilación, `va_list` permite iterar dinámicamente por la pila de llamadas del sistema y extraer los valores con la conversión de tipos adecuada según el especificador evaluado.

### 2. Uso del Tipo `uintptr_t` (`<stdint.h>`)

* **Estructura:** Las conversiones de punteros (`%p`) y números hexadecimales se apoyan en el tipo entero sin signo `uintptr_t`.

* **Justificación:** Garantiza que el tamaño del tipo de dato entero coincida exactamente con el ancho de una dirección de memoria en la arquitectura del procesador (32 o 64 bits), evitando pérdidas de precisión o desbordamientos al manipular punteros.

### 3. Algoritmo de Conversión Numérica (Recursión vs Buffer)

* **Algoritmo:** Para las conversiones de números (`%d`, `%i`, `%u`, `%x`, `%X`, `%p`), se implementó un algoritmo recursivo basado en sucesivas divisiones (`n / base`) y cálculo de restos (`n % base`).

* **Justificación:**

  * La recursión desciende de forma natural hasta aislar el dígito más significativo y escribe los caracteres en orden correcto durante el desapilado.

  * Elimina la necesidad de reservar memoria dinámica con `malloc`, evitando posibles fugas de memoria (*memory leaks*) y eliminando la sobrecarga computacional de gestión del heap.

  * El conteo de caracteres se devuelve y acumula de forma directa a través del retorno de cada marco de la llamada.

## Recursos

### Referencias

* **Páginas del manual de Linux (man pages):**

  * `man 3 printf`: Comportamiento de las conversiones estándar, valores de retorno y formatos.

  * `man 3 stdarg`: Uso y ciclo de vida de `va_start`, `va_arg`, `va_copy` y `va_end`.

* **Estándar C99 / C11:** Especificación del estándar ISO/IEC referente a la conversión de tipos enteros de ancho fijo en `<stdint.h>`.

### Declaración del Uso de Inteligencia Artificial

En cumplimiento de la normativa de transparencia académica de 42, se declara el siguiente uso de modelos de lenguaje e IA generativa:

* **Redacción de Documentación:** Se utilizó un modelo de lenguaje para estructurar y ayudar a redactar este archivo `README.md` siguiendo los apartados exigidos por la pauta de evaluación.

* **Consultoría Teórica:** Asistencia en la validación de casos borde normativos, específicamente el manejo de punteros nulos en implementaciones de sistemas GNU/Linux (`(nil)` vs `(null)`) y el tratamiento del desbordamiento del mínimo entero con signo (`INT_MIN = -2147483648`).