# CPP TEST PROGRAM
*The ***worst*** program ever written in C++*

## Dependencies?
 - CMake
 - PkgConfig
 - CXX compiler (g++)
 **To make things easier, get your distro's base set of development/build tools**
   - `build-essential` on Debian/Ubuntu
   - `Development Tools` group on Red Hat/Fedora
   - `base-devel` on Arch
   - `build-base` on Alpine

 - GTK4 development files
   - `libgtk4-dev` on Debian/Ubuntu
   - `gtk4-devel` on Red Hat/Fedora
   - `gtk4` on Arch
   - `gtk4.0-dev` on Alpine)

## How to compile ?
```sh
mkdir build
cd build
cmake ..
make
```

## How to run ?
Once compiled, simply run `./cpptest`

## What does it do ?
 - Create an integer value (clicks)
 - Create a GTK4 Window
 - Create a vertical box
 - Create a Label
 - Add it to the box
 - Create a button
 - Link it's "clicked" event to a function (button_clicked)
 - Add it to the box
 - Set the box as the Windows's child

 button_clicked:
 - Adds "1" to the clicks function
 - Updates the label to show "{clicks} clicks"

## All the stupid questions
### How long to make this ?
15 minutes (ft. neovim)
Inspired by Steam's 30th most played game (as time of writing): Banana

### How long to compile ?
Less than 5 seconds on an Intel Atom Z520
IF your PC is any modern, less than a second

### Why ?
Why not?

### Are you stupid ?
Yes.
