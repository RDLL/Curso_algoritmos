# Herramientas

# Contenido
1. [Compilador](#id1)
2. [Editor](#id2)
3. [IDE](#id3)

# Compilador <div id='id1' />

El compilador en este caso solo es necesario para C++, sin embargo existen diferentes opciones o herramientas de compilación.
Si prefieres usar un IDE a un editor y compilar por separado puedes ir directamente a esa opción.

## g++

Es un compilador free software por terminal, que compila y enlaza programas de C++ y otros lenguajes como C y Fortran, se instala a tráves de GCC(GNU Compiler collecion).

En las distros Linux mas comunes y para usuarios promedio por lo general ya viene instalado.

### Arch Linux y derivados

pacman

```bash
sudo pacman -S gcc
```

paru

```bash
sudo paru -S gcc
```

### Debian y derivados

```bash
sudo apt-get install gcc
```

### Fedora

```bash
sudo dnf install gcc
```

### Windows

Para windows hay que descargar [MinGW](https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download), lo ejecutamos y seguimos los pasos.

Una vez se haya terminado de instalar, y si queremos compilar por terminal habrá que añadirlo a la variable de entorno `PATH`.

Para ello vamos a panel de control -> sistema -> Configuración avanzada del sistema.

Se nos abrira una pequeña ventana, vamos al botón de variables de entorno, buscamos la variable `PATH` o `Path`, la seleccionamos, desplegará una lista con las diferentes varaibles que contiene, le damos a new y escribimos `;C:\MinGW\bin\`, esto si no modificamos la ruta de instalación, en caso de haberlo hecho habrá que cambiarlo a la ruta que hayamos definido.

### Uso

```bash
g++ -o nombrearchivosalida.out nombrearchivoacompilar.cpp
```

```bash
g++ -o hola.out hola_mundo.cpp
```

Si en Windows se hizo correctamente al añadir MinGW al `PATH` no debería haber problemas sino habrá que repetir el proceso.

## clang

Es un front end de compilador opensource que usa [LLVM](https://es.wikipedia.org/wiki/LLVM)como back end y esta pensado para reemplazar a GCC.

#### Arch Linux y derivados

pacman

```bash
sudo pacman -S clang
```

paru

```bash
sudo paru -S clang
```

#### Debian y derivados

```bash
sudo apt-get install clang
```

#### Fedora

```bash
sudo dnf install clang
```

#### Windows

Lo descargamos desde [aquí](https://github.com/llvm/llvm-project/releases/download/llvmorg-16.0.0/LLVM-16.0.0-win64.exe).

A diferencia de MinGW, llvm si nos da la opción de añadirlo al `PATH` desde su instalador, por lo que hay que asegurarnos de tener marcada esta opción antes de seguir con las instrucciones.

Otra cosa a tener en cuenta es que hay que instalar MinGW antes de instalarlo y agregar MinGW al `PATH`.

## make

Es una herramienta de gestión de dependencias, es decir los archivos que componen un programa.

Es una herramienta que nos ayuda a enlazar y compilar los archivos que necesitemos, es muy útil cuando se tienen proyectos en los que se manejen múltiples archivos como pueden ser bibliotecas ajenas al sistema.

No existe en Windows.

## cmake
Es una herramienta multiplataforma para construir, probar y empaquetar software, es muy similar a make con la ventaja de que se puede usar tanto en Windows como Linux y Mac, y tiene algunas otras funcionalidades, incluso se puede usar junto con make.

#### Arch Linux y derivados

pacman

```bash
sudo pacman -S cmake
```

paru

```bash
sudo paru -S cmake
```

#### Debian y derivados

```bash
sudo apt-get install cmake
```

#### Fedora

```bash
sudo dnf install cmake
```

#### Windows

Hay que descargar el binario desde la página de descargas de [CMake](https://cmake.org/download/).

Lo ejecutamos y en caso de no estar seleccionada la opción de modificar el `PATH` la seleccionamos.

# Editor

Es un herramienta que nos permite editar archivos de difentes formatos, no confundir con un procesador de textos como lo sería Word, aquí hay bastantes variedades, dependerá de cada quien cuál usar.

Una opción muy buena y fácil de instalar es [Visual Studio Code](https://code.visualstudio.com/download), tiene bastantes herramientas y extensiones que lo pueden convertir en un IDE, al ser de Microsoft tiene muchas compatibilidades con herramientas para desarroladores hechas por la misma compañia, tam

Otra opción muy buena es [Sublime Text](https://www.sublimetext.com/download) que tiene
