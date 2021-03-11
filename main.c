#define SCALE	32		// every tile is 32x32 pixels
#include "Includes.h"

typedef struct{
	Length len;
	char** tile;
}Map;

int main(int argc, char const *argv[])
{
	Map map = {
		.len = {28, 31},
		.tile = NULL
	};

	const Length window = coordMul(, SCALE);
	init(window);

	while(1){
		Ticks frameStart = getTicks();
		clear();



		draw();
		events(frameStart + TPF);
	}
	return 0;
}
