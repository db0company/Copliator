
Copliator
=========

Copliator is a Perl script to help you create your C++ classes
using the coplian form (also known as "the rules of three") easily
and quickly.

Requierement
============

* Perl

Usage
=====

* Create a file formatted file as the following :
  1st line is the name of the class,
  other lines are attributes in it like : "type tabulation name"
  for example :
    int *		timeToLive;
(See "example.txt" file)

* Choose or create the directory where you want your class to be.

* Type the following command line :

    ./copliator filename path

(replace filename by the formatted file and path by the directory
you want your class to be.)

* If you don't want the cute comments boxes, type this :

    ./copliator filename path --no_cute_boxes

Examples
========

    ./copliator example.txt example
    ./copliator example.txt example_nocute --no_cute_boxes

Copyright/License
=================

               DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                       Version 2, December 2004
    
    Copyright (C) 2012 Barbara Lepage <db0company@gmail.com>
    
    Everyone is permitted to copy and distribute verbatim or modified
    copies of this license document, and changing it is allowed as long
    as the name is changed.
    
               DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
      TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
    
     0. You just DO WHAT THE FUCK YOU WANT TO.
    

Author
======

    Made by		db0
    Contact			db0company@gmail.com
    Website				http://db0.fr/


Versions
========

 /!\ Latest version is on GitHub :

     https://github.com/db0company/Ionis-Users-Informations
