#define SCALE		32		// every tile is 32x32 pixels
#define NUMMAPCHARS	19
static const char mapChars[NUMMAPCHARS] = {
	'#','0','1','2','3','4','5','6','7','8','9','.','o','F','P','W',' ','f','$'
};
#include "Includes.h"

typedef struct{
	Length len;
	char** tile;
}Map;

bool isMapChar(const char c)
{
	for(uint i = 0; i < NUMMAPCHARS; i++)
		if(c==mapChars[i])
			return true;
	return false;
}

void drawTile(const Coord tilePos, const char tile)
{
	switch(tile){
	case '#':
		setColor(BLUE);
		break;
	case '0'...'9':
		setColor(GREEN);
		break;
	case '.':
		setColor(ORANGE);
		break;
	case 'o':
		setColor(WHITE);
		break;
	case 'F':
		setColor(RED);
		break;
	case 'P':
		setColor(YELLOW);
		break;
	case 'W':
		setColor(GRAY);
		break;
	case ' ':
	case 'f':
	case '$':
		// fallthrough
	default:
		return;
		break;
	}
	drawSquareCoord(coordMul(tilePos, SCALE), SCALE);

}

void drawMap(const Map map)
{

}

Length getMapLen(File *mapFile)
{
	Length ret = {0, 0};
	int c = ' ';
	Length len = {0, 0};
	Coord pos = {0, 0};
	while((c = fgetc(mapFile)) != '\n'){

		pos.x++;
	}
	len.x = pos.x;
	rewind(mapFile);
	return ret;
}

Map openMap(const char* mapPath)
{
	Map map = {0};
	File *mapFile = fopen(mapPath, "r");
	if(mapFile == NULL){
		printf("Couldnt open map file at \"%s\"\n", mapPath);
		exit(-1);
	}
	return map;
}

int main(int argc, char const *argv[])
{
	Map map = {
		.len = {28, 31},
		.tile = NULL
	};

	const Length window = coordMul(map.len, SCALE);
	init(window);

	while(1){
		Ticks frameStart = getTicks();
		clear();



		draw();
		events(frameStart + TPF);
	}
	return 0;
}
