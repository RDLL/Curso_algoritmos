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

## Visual Studio Code

 [VSCode](https://code.visualstudio.com/download), tiene bastantes herramientas y extensiones que lo pueden convertir en un IDE, al ser de Microsoft tiene mucha compatibilidad con herramientas para desarroladores hechas por la misma compañia, también existe otra versión [vscodium](https://vscodium.com/), que no tiene telemetría ni tracking así como una versión [web](https://vscode.dev/).

 Para descargarlo, en el caso de Windows solo hay que descargar el instalador.

 Para la versión de Linux hay dos maneras, descargando el binario según tu distro o instalando las claves y repositorio de VSCode

#### Arch Linux y derivados

pacman

```bash
sudo pacman -S code
```

paru

```bash
sudo paru -S visual-studio-code-bin
```

#### Debian y derivados

Primero hay que agregar la llave y repositorio

```bash
wget -qO- https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > packages.microsoft.gpg
```

```bash
sudo install -D -o root -g root -m 644 packages.microsoft.gpg /etc/apt/keyrings/packages.microsoft.gpg
```

```bash
sudo sh -c 'echo "deb [arch=amd64,arm64,armhf signed-by=/etc/apt/keyrings/packages.microsoft.gpg] https://packages.microsoft.com/repos/code stable main" > /etc/apt/sources.list.d/vscode.list'
```

```bash
rm -f packages.microsoft.gpg
```

```bash
sudo apt install apt-transport-https
```

```bash
sudo apt update
```

```bash
sudo apt install code
```

Aquí se instala VSCode

#### Fedora

```bash
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
```

```bash
sudo sh -c 'echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" > /etc/yum.repos.d/vscode.repo'

```

```bash
sudo dnf install code
```

## Sublime Text

Otra opción muy buena es [Sublime Text](https://www.sublimetext.com/download) que aunque no es open source tiene una versión gratuita muy buena y completa que compite directamente contra VSCode y también tiene una multitud de plugins y funcionalidades. Tiene una versión portable en Windows.

Para Windows se puede descargar ya sea la versión portable o el instalador.

En Linux al igual que con VSCode hay dos maneras, descargando el binario o agregando la llave y repositorio.

#### Arch Linux y derivados

pacman

Hay que agregar la llave y el repositorio

```bash
curl -O https://download.sublimetext.com/sublimehq-pub.gpg && 
sudo pacman-key --add sublimehq-pub.gpg && 
sudo pacman-key --lsign-key 8A8F901A && 
rm sublimehq-pub.gpg
```

```bash
echo -e "\n[sublime-text]\nServer = https://download.sublimetext.com/arch/stable/x86_64" | sudo tee -a /etc/pacman.conf
```

```bash
sudo pacman -Syu sublime-text
```

paru

```bash
sudo paru -S sublime-text-4
```

#### Debian y derivados

Primero hay que agregar la llave y repositorio

```bash
wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | gpg --dearmor | sudo tee /etc/apt/trusted.gpg.d/sublimehq-archive.gpg > /dev/null
```

```bash
echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list
```

```bash
sudo apt install apt-transport-https
```

```bash
sudo apt update
```

```bash
sudo apt install code
```

Aquí se instala VSCode

#### Fedora

```bash
sudo rpm -v --import https://download.sublimetext.com/sublimehq-rpm-pub.gpg
```

```bash
sudo dnf config-manager --add-repo https://download.sublimetext.com/rpm/stable/x86_64/sublime-text.repo

```

```bash
sudo dnf install sublime-text
```

## [Vim](https://www.vim.org/download.php) 
Es una versión mejorada del editor Vi, es un editor opensource por terminal, en el caso de Windows, tiene una ligera GUI para emular la terminal.

Suele