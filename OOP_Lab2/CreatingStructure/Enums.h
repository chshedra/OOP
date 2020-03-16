#pragma once
#include "Structures.h"

//TODO: Каждую сущность вместе с использующими её функциями в отдельный файл.
//TODO: RSDN
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

//TODO: RSDN
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


//TODO: RSDN
enum StudyForm
{
	FULLTIME,
	CORRESPONDENCE,
	EVENING,
	DISTANCE
};

//TODO: RSDN
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
