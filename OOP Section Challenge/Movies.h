#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include "Movie.h"

class Movies
{
	friend class Movie;

public:
	Movies(std::string collectionName);
	~Movies();

	void AddMovie(const Movie& source);
	void IncrementMovieWatch(const Movie& source);
	void DisplayMovies();

private:
	std::vector<Movie> vecMovie;
	std::string movieCollectionName;

};
#endif // !_MOVIES_H_

