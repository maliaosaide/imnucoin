
Debian
====================
This directory contains files used to package imnucoind/imnucoin-qt
for Debian-based Linux systems. If you compile imnucoind/imnucoin-qt yourself, there are some useful files here.

## imnucoin: URI support ##


imnucoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install imnucoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your imnucoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/imnucoin128.png` to `/usr/share/pixmaps`

imnucoin-qt.protocol (KDE)

