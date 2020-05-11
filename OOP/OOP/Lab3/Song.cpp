#include "Song.h"

void Song::SetSongTitle(const string &songTitle)
{
	this->_songTitle = songTitle;
}

void Song::SetSongTiming(double songTiming)
{
	if (songTiming < 0)
	{
		throw("Значение времени песни не может быть отрицательным");
	}
	this->_songTiming = songTiming;
}

void Song::SetGenre(SongGenre genre)
{
	this->_genre = genre;
}

string Song::GetSongTitle()
{
	return this->_songTitle;
}

double Song::GetTiming()
{
	return this->_songTiming;
}

SongGenre Song::GetSongGenre()
{
	return this->_genre;
}

//TODO: +Не правильно сделано, сейчас все параметры передаются напрямую в поля, без всяких проверок в методах-сетерах
//TODO: +это может привести к нарушению логики использования класса.
Song::Song() : Song(" ", 0, Rock) {}

Song::Song(const string& songTitle, double songTiming, SongGenre genre)
{
	this->SetSongTitle(songTitle);
	this->SetSongTiming(songTiming);
	this->SetGenre(genre);
}


ostream& operator<<(ostream& writeSong, Song& song)
{
	writeSong << song._songTitle << " Time:"
		<< song._songTiming << "; Genre:";
	switch (song._genre)
	{
		//TODO: RSDN
	case Rock:
	{
		cout << "Rock";
		break;
	}
	case Rap:
	{
		cout << "Rap";
		break;
	}
	case Classic:
	{
		cout << "Classic";
		break;
	}
	case Club:
	{
		cout << "Club";
		break;
	}
	case DubStep:
	{
		cout << "Dubstep";
		break;
	}
	default:
	{
		cout << "Unknown genre";
		break;
	}
	}
	return writeSong;
}
	