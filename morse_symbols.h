#ifdef MORSE_SYMBOL_CODE

MORSE_SYMBOL_CODE('a', 0b01000000, 2)
MORSE_SYMBOL_CODE('b', 0b10000000, 4)
MORSE_SYMBOL_CODE('c', 0b10100000, 4)
MORSE_SYMBOL_CODE('d', 0b10000000, 3)
MORSE_SYMBOL_CODE('e', 0b00000000, 1)
MORSE_SYMBOL_CODE('f', 0b00100000, 4)
MORSE_SYMBOL_CODE('g', 0b11000000, 3)
MORSE_SYMBOL_CODE('h', 0b00000000, 4)
MORSE_SYMBOL_CODE('i', 0b00000000, 2)
MORSE_SYMBOL_CODE('j', 0b01110000, 4)
MORSE_SYMBOL_CODE('k', 0b10100000, 3)
MORSE_SYMBOL_CODE('l', 0b01000000, 4)
MORSE_SYMBOL_CODE('m', 0b11000000, 2)
MORSE_SYMBOL_CODE('n', 0b10000000, 2)
MORSE_SYMBOL_CODE('o', 0b11100000, 3)
MORSE_SYMBOL_CODE('p', 0b01100000, 4)
MORSE_SYMBOL_CODE('q', 0b11010000, 4)
MORSE_SYMBOL_CODE('r', 0b01000000, 3)
MORSE_SYMBOL_CODE('s', 0b00000000, 3)
MORSE_SYMBOL_CODE('t', 0b10000000, 1)
MORSE_SYMBOL_CODE('u', 0b00100000, 3)
MORSE_SYMBOL_CODE('v', 0b00010000, 4)
MORSE_SYMBOL_CODE('w', 0b01100000, 3)
MORSE_SYMBOL_CODE('x', 0b10010000, 4)
MORSE_SYMBOL_CODE('y', 0b10110000, 4)
MORSE_SYMBOL_CODE('z', 0b11000000, 4)

#endif /* MORSE_SYMBOL_CODE */


#ifdef MORSE_SYMBOL_MATRIX
/* 5 x 7, do not forget about '_' and '@' */

MORSE_SYMBOL_MATRIX('@',0b00000,
			0b01010,
			0b00000,
			0b00100,
			0b10001,
			0b01110,
			0b00000)


MORSE_SYMBOL_MATRIX('a',0b01110,
			0b10001,
			0b10001,
			0b10001,
			0b11111,
			0b10001,
			0b10001)

MORSE_SYMBOL_MATRIX('b',0b11110,
			0b10001,
			0b10001,
			0b11110,
			0b10001,
			0b10001,
			0b11110)

MORSE_SYMBOL_MATRIX('c',0b01110,
			0b10001,
			0b10000,
			0b10000,
			0b10000,
			0b10001,
			0b01110)

MORSE_SYMBOL_MATRIX('d',0b11110,
			0b10001,
			0b10001,
			0b10001,
			0b10001,
			0b10001,
			0b11110)

MORSE_SYMBOL_MATRIX('e',0b11111,
			0b10000,
			0b10000,
			0b11111,
			0b10000,
			0b10000,
			0b11111)

MORSE_SYMBOL_MATRIX('f',0b11111,
			0b10000,
			0b10000,
			0b11111,
			0b10000,
			0b10000,
			0b10000)
MORSE_SYMBOL_MATRIX('g',0b01110,
			0b10001,
			0b10000,
			0b10111,
			0b10001,
			0b10001,
			0b01110)

MORSE_SYMBOL_MATRIX('h',0b10001,
			0b10001,
			0b10001,
			0b11111,
			0b10001,
			0b10001,
			0b10001)

MORSE_SYMBOL_MATRIX('i',0b11111,
			0b00100,
			0b00100,
			0b00100,
			0b00100,
			0b00100,
			0b11111)

MORSE_SYMBOL_MATRIX('j',0b11111,
			0b00010,
			0b00010,
			0b00010,
			0b10010,
			0b10010,
			0b01100)

MORSE_SYMBOL_MATRIX('k',0b10001,
			0b10001,
			0b10010,
			0b11100,
			0b10010,
			0b10001,
			0b10001)

MORSE_SYMBOL_MATRIX('l',0b10000,
			0b10000,
			0b10000,
			0b10000,
			0b10000,
			0b10000,
			0b11111)






#endif /* MORSE_SYMBOL_MATRIX */
