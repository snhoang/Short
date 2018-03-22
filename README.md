## Project 2
#Short assignment
Please note, you are required to include the following when you use g++ to compile: -pedantic

           For example:

                                    g++ -pedantic filename.cpp

           This will give a warning if you attempt to use any non-standard feature in

g++. You must correct your code so that you do not receive any warnings of this type.

Log on to the Linux server.

Write four files:

Short.h
Short.cpp
ShortMain.cpp
Makefile
In Short.h:

#ifndef _SHORT_H_DEF_ //these are my initials; replace with yours

#define _SHORT_H_DEF_

#include <iostream>

using namespace std;

enum display_type {DEC, BIN, HEX};

class Short

{

  signed char         _n;

  display_type        _dt;

  void                _display_BIN()const;

  void                _display_HEX() const;

public:

  Short();

  Short(signed char, display_type = DEC);

  void add(const Short&);

  void sub(const Short&);

  void mult(const Short&);

  void div(const Short&);

 

  void display() const;       //displays to standard out    

                                         //output is “well formed”

 

  void set_display_type(display_type);

};

#endif

 

Well-formed – For this assignment, we will define output to be “well-formed” if it satisfies one of the following requirements:

Contains three, two, or one base-ten symbols[1] and nothing else
Meets the first requirement and begins with the minus sign‘-’
Contains two base-16[2] symbols followed by ’h’ and nothing else
Contains four base-two symbols[3], followed by a space character, followed by four more base-two symbols, followed by ’b’ and nothing else.
 

Do not add a gratuitous newline or space character.

 

Note: Overflow can lead to interesting results. For example, if you use the number 128 your Short should contain the value -128. This is not an error in your code; it is the result of overflow.

 

 In Short.cpp, implement these member functions.

 

You must not use any built-in functions

(If you must include cmath/math.h there is something wrong in your code)

 

In ShortMain.cpp, write a test main to test your code. Make sure that your user-defined type, Short, works correctly.

 

Do not worry about overflow. Overflow happens.

 

Submit these four files via the drop-box

Note: you must append .txt to your Makefile (“Makefile.txt”) to submit it to the Canvas drop box

 

 

[1] Base-ten symbols: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

[2] Base-16 symbols: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F

[3] Base-two symbols: 0, 1

**THIS ASSIGNEMENT IF FOR CISP 400 _D_E_F**
