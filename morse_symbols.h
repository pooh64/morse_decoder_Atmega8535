#ifdef MORSE_SYMBOL_CODE

MORSE_SYMBOL_CODE(0b01000000, 2, 'a')
MORSE_SYMBOL_CODE(0b10000000, 4, 'b')
MORSE_SYMBOL_CODE(0b10100000, 4, 'c')

#endif /* MORSE_SYMBOL_CODE */


#ifdef MORSE_SYMBOL_MATRIX
/* 5 x 7, do not forget about '_' and '@' */

MORSE_SYMBOL_MATRIX(	0b00000,
			0b01010,
			0b00000,
			0b00100,
			0b10001,
			0b01110,
			0b00000, '@')


MORSE_SYMBOL_MATRIX(	0b00100,
			0b01010,
			0b10001,
			0b11111,
			0b10001,
			0b10001,
			0b10001, 'a')

#endif /* MORSE_SYMBOL_MATRIX */