#pragma once

enum Colors
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	Purple
};

//2.2.9
void WriteColor(Colors color);
Colors ReadColor();
int CountColor(Colors* colors, int count, Colors findedColor);
