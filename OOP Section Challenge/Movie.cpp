#include <iostream>
#include "Movie.h"

Movie::Movie(std::string newName, std::string newRating, int newWatched)
	: name{ newName }, rating{ newRating }, watched{ newWatched }{
}

//copy constructor that is a delegate of the Movie(3 args/parameters) constructor
Movie::Movie(const Movie& source) 
	: Movie{source.name, source.rating, source.watched}{
}


Movie::~Movie()
{
}

//GETTERS
std::string Movie::Get_Movie_Name() const
{
	return name;
}

std::string Movie::Get_Movie_Rate() const
{
	return rating;
}

int Movie::Get_NumerOfTimes_Watched() const
{
	return watched;
}


//SETTERS
void Movie::Set_Movie_Name(std::string newName)
{
	name = newName;
}

void Movie::Set_Movie_Rating(std::string newRating)
{
	rating = newRating;
}

void Movie::Set_NumberOfTimes_Watched(int newWatched)
{
	watched = newWatched;
}


//OTHER METHODS
void Movie::Increment_Watched_Times()
{
	watched++;
}

void Movie::Display_Movie_Details() const
{
	std::cout << name << ", " << rating << ", " << watched << std::endl;
}

