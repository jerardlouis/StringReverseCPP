# StringReverseCPP
A "line" reversal reverses the entire line. In a line reversal, "Hello world!" becomes "!dlrow olleH"

A "word" reversal reverses each word. In a word reversal, "Hello world!" becomes "olleH !dlrow"

A "lineword" reversal performs a line reversal and a word reversal. In a lineword reversal, "Hello world!" becomes "world! Hello".

No matter how many spaces between words in the input, the output should have only one space after each word. So a line reversal of "Hello                                              world!" becomes "!dlrow olleH"

Write a C++ program that does line, word and lineword reversals. The program is told which type of reversal to perform by providing a single command line argument, "line", "word", or "lineword".

If no command line arguments are provided, the program should print "MISSING FLAG" and stop.

If an unrecognized command line argument is provided, the program should print "UNKNOWN FLAG" followed by the unrecognized argument, and stop.

If more than one command line argument is provided, the program should print "TOO MANY FLAGS" and stop.
