# Chapter1. Introduction

This chapter introduces Unix and its concepts to the reader. It contains a lot of thought about operating systems in general. A lot of quotable stuff.

## What's Special About Unix?

'Unix is also important to power users because it's one of the last popular operating systems that doesn't force you to work behind an interface of menus, windows, and mouse with a "one-size(-doesn't)-fit-all" programming interface.'

## Power Grows on You

'"Power of a system comes more from the relationship among programs than from the programs themselves."' Cites *The UNIX Programming Environment* by Kernighan and Pike.


'Most of the nongraphical utility programs that have run under Unix since the beginning, some 30 years ago, share the same user interface.'

'On most systems, you need to learn consciously how to program. You must take up the study of one or more programming languages and expend a fair amount of concentrated effort before you can do anything productive. Unix on the other hand, teaches programming imperceptibly - it is a slow but steady extension of the work you do simply by interacting with the computer.'

'Before long, you can step outside the bounds of the tools that has already been provided by the designers of the system and solve problems that don't fit quite the mold. This is sometimes called hacking; in other contexts, it is called "engineering". In essence, it is the ability to build a tool when the right one is not already on hand.'

'No single program, however well thought out, will solve every problem.'

## The Core of Unix

SP describes that he has never encountered a Unix installation that does not have **vi** or **man**. This sadly is the case for the wsl installation of Debian in Windows. Not sure who made that decision, but it seems counter-intuitive to me to leave these out, when you install GNU/Linux.

## Communicating with Unix

There are three different kinds of programs that a users can interact with, none of them is the operating system (kernel) itself.

1. a **shell**: 'a shell is a *command interpreter*'. It interprets and runs commands started by the users. 'The shell protects Unix from the user ( and the user from Unix).
2. 'An *interactive command*': these are all commands that control be interpretation of the user input in themselves and do not rely on a shell to do that. Programs like text editors, mail programs and others fall unter this category.
3. A Graphical User Interface (GUI): another layer of abstraction that provides a graphical means of interacting with programs.

Note from me: In operating systems that rely on the GUI, there is a trend to distinguish between GUI programs and the GUI shell. For example the [GNOME Shell](https://wiki.gnome.org/Projects/GnomeShell), which serves the same purpose as the classical shell, but for GUI programs.


