#pragma once
#include "Structures.h"

//2.2.8
enum Colors
{
	RED,
	ORANGE,
	YELLOW,
	GREEN,
	BLUE,
	PURPLE
};

enum DaysOfTheWeek
{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
};



enum StudyForm
{
	FULLTIME,
	CORRESPONDENCE,
	EVENING,
	DISTANCE
};

enum Seasons
{
	WINTER,
	SPRING,
	SUMMER,
	AUTUMN
};

enum Smartphones
{
	APPLE,
	XIAOMI,
	SUMSUNG,
	OPPO,
	HUAWAI
};

//2.2.9
void WriteColor(Colors color);
Colors ReadColor();
int CountColor(Colors* colors, int count, Colors findedColor);
