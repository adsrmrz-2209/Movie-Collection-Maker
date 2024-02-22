#include <iostream>
#include "Movie.h"
#include "Movies.h"

int main()
{
    Movies movieCollection_A{ "Adrian's movies" };
    Movie movie1{ "The shining", "pg-13", 1 };
    Movie movie2{ "Doctor Sleep", "pg-13", 3 };
    Movie movie3{ "The avengers", "pg-13", 3 };
    Movie movie4{ "The avengers", "pg-13", 3 };
    movieCollection_A.AddMovie(movie1);
    movieCollection_A.AddMovie(movie2);
    movieCollection_A.AddMovie(movie3);
    movieCollection_A.AddMovie(movie4);
    movieCollection_A.DisplayMovies();

    Movies collection_B{ "Hannah's movies" };
    collection_B.AddMovie(movie1);
    collection_B.AddMovie(movie2);
    collection_B.AddMovie(movie3);
    collection_B.AddMovie(movie4);
    collection_B.DisplayMovies();
    Movie movie5{ "28 weeks later", "R", 28 };
    collection_B.AddMovie(movie5);
    collection_B.DisplayMovies();
    collection_B.IncrementMovieWatch(movie5);
    movieCollection_A.IncrementMovieWatch(movie1);
    collection_B.IncrementMovieWatch(movie1);
    collection_B.IncrementMovieWatch(movie1);
    collection_B.IncrementMovieWatch(movie1);
    movieCollection_A.DisplayMovies();
    collection_B.DisplayMovies();
   
    Movie movie6{ movie1 };
    collection_B.AddMovie(movie6);
    movieCollection_A.AddMovie(movie6);
}

