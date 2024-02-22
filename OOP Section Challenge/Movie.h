#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>
#include "Movies.h"

class Movie
{
public:
	Movie(std::string newName, std::string newRating, int newWatched);
	Movie(const Movie& source);
	~Movie();

	//getters
	std::string Get_Movie_Name() const;
	std::string Get_Movie_Rate() const;
	int Get_NumerOfTimes_Watched() const;

	//setters
	void Set_Movie_Name(std::string newName);
	void Set_Movie_Rating(std::string newRating);
	void Set_NumberOfTimes_Watched(int newWatched);

	//other methods
	void Increment_Watched_Times();
	void Display_Movie_Details() const;

private:
	std::string name;
	std::string rating;
	int watched;
};

#endif
