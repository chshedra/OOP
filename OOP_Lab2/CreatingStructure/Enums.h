#pragma once

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

enum Genre
{
	COMEDY,
	DRAMA, 
	THRILLER,
	ACTION, 
	HORROR,
	BLOCKBUSTER
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

void WriteColor(Colors color);
Colors ReadColor();
int CountColor(Colors* colors, int count, Colors findedColor);
int CountMoviesByGenre(Movie* movies, int count, Genre findGenre);