
# Weighted marks calculator

A CGI "script" that gets submitted marks and calculates the weighted
 marks that are sent back eventually.


## prerequisites

* Apache Server (Wampp, Xampp, etc.)
* GCC
* libcgic

> __Note:__ This project has been particularly designed on a
> Linux machine. Most information is therefore targeted at
> \*nix Users.


## content

.
├── src
│  └─ form.c
├── www
│  └─ index.html
├── install.sh
├── LICENSE-MIT
├── Makefile
└── README.md


## installation and running

__Local Installation__:

* Run _install.bash_ while passing the path to your local server's cgi-bin directory

  Example: `sudo ./install.sh /path/to/cgi-bin/directory /path/to/htdocs/directory`

__Remote Installation__:

* Build the CGI program with: `make`
* Upload the built output in cgi-bin to your server's cgi-bin directory
* Upload the html file in `www/` to your server's htdocs directory


## license

__The MIT License__

Copyright (c) Gocho Mugo <mugo@forfuture.co.ke>

See accompanying LICENSE-MIT file for terms and conditions.
