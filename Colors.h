#pragma once

Color rgbToColor(const uint R, const uint G, const uint B)
{
	Color C = {R, G, B, 0xFF};
	return C;
}

Color rgbaToColor(const uint R, const uint G, const uint B, const uint A)
{
	Color C = {R, G, B, A};
	return C;
}

const Color WHITE		= {0xFF, 0xFF, 0xFF, 0xFF};
const Color PINK		= {0xFF, 0xC0, 0xCB, 0xFF};
const Color CYAN		= {0x00, 0xFF, 0xFF, 0xFF};
const Color RED 		= {0xFF, 0x00, 0x00, 0xFF};
const Color ORANGE	= {0xFF, 0xA5, 0x00, 0xFF};
const Color YELLOW	= {0xFF, 0xFF, 0x00, 0xFF};
const Color GREEN 	= {0x00, 0xFF, 0x00, 0xFF};
const Color BLUE 		= {0x00, 0x00, 0xFF, 0xFF};
const Color MAGENTA	= {0xFF, 0x00, 0xFF, 0xFF};
const Color BLACK		= {0x00, 0x00, 0x00, 0xFF};
const Color GREY		= {0x80, 0x80, 0x80, 0xFF};
const Color GRAY		= {0x80, 0x80, 0x80, 0xFF};

const Color GREY1		= {0xAA, 0xAA, 0xAA, 0xFF};
const Color GRAY1		= {0xAA, 0xAA, 0xAA, 0xFF};
const Color GREY2		= {0x7E, 0x7E, 0x7E, 0xFF};
const Color GRAY2		= {0x7E, 0x7E, 0x7E, 0xFF};
const Color GREY3		= {0x52, 0x52, 0x52, 0xFF};
const Color GRAY3		= {0x52, 0x52, 0x52, 0xFF};
