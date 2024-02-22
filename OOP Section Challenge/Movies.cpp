#include <iostream>
#include "Movies.h"
#include "Movie.h"


Movies::Movies(std::string collectionName)
	: movieCollectionName { collectionName }
{
}

Movies::~Movies()
{
}

void Movies::DisplayMovies()
{
	std::cout << "=====MOVIE LIST IN " << movieCollectionName << "===============" << std::endl;
	for (int i{ 0 }; i < vecMovie.size(); i++) {
		vecMovie.at(i).Display_Movie_Details(); //display the movie details, more info can be found in the Movie.h and Movie.cpp
	}
	std::cout << "=================================================" << std::endl;
}

void Movies::AddMovie(const Movie& source)
{
	bool isMovieAdded{};
	for (int i{ 0 }; i < vecMovie.size(); i++) {

		if (vecMovie.at(i).Get_Movie_Name() != source.Get_Movie_Name()) {
			isMovieAdded = false; //if the vetor element is not equal to the source argument movie name, declare that the movie is not yet added
			continue; //continue the iteration to determine if all the vector element does not have the same movie name as the source argument movie name
		}
		else
		{
			isMovieAdded = true; //if the vector element movie name is equal to the source argument movie name, then the movie is already added
			break; //stop the iteration because the movie is already listed
		}
	}

	if (!isMovieAdded) //if the movie is not yet added, add the movie
	{
		vecMovie.push_back(source); 
		std::cout << source.Get_Movie_Name() << " is Added to " << movieCollectionName << std::endl << std::endl;
	}
	else 
	{
		std::cout << source.Get_Movie_Name() << " is already in the list of "<< movieCollectionName << ". Please add another movie that is not yet added." << std::endl << std::endl;
	}
	
}

void Movies::IncrementMovieWatch(const Movie& source)
{
	for (int i{ 0 }; i < vecMovie.size(); i++)
	{
		//if the vector element has the same name as the source argument, increment the vector element's watched times
		if (vecMovie.at(i).Get_Movie_Name() == source.Get_Movie_Name()) {
			vecMovie.at(i).Increment_Watched_Times();
			break;
		}
	}
}


