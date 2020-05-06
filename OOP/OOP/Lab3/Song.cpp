#include "Song.h"

void Song::SetSongTitle(string songTitle)
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

Song::Song()
{
	this->SetSongTitle(" ");
	this->SetSongTiming(0.0);
	this->SetGenre(Rock);
}

Song::Song(string songTitle, double songTiming, SongGenre genre)
{
	this->SetSongTitle(songTitle);
	this->SetSongTiming(songTiming);
	this->SetGenre(genre);
}

ostream& operator<<(ostream& writeSong, Song& song)
{
	writeSong << song._songTitle << " Time:"
		<< song._songTiming << "; Genre:";
	WriteSongGenre(song._genre);
	return writeSong;
}

// вывод значений перечисления на экран
void WriteSongGenre(SongGenre genre)
{
	switch (genre)
	{
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
}