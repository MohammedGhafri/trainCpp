#include <iostream>
using namespace std;


class Movie{
public:
string title;
string director;
string rating;
Movie(string aTitle,string aDirector,string aRating){
title=aTitle;
director=aDirector;
rating=aRating;


}
void setRat(string rating){
    cout <<"This from setRating : " <<rating<< endl;
}
};

int main()
{
Movie movie("harry","Ghafri","Good");
cout << movie.title<<endl;
movie.title="Alaa";
cout << movie.title<<endl;
movie.setRat("mmm");
return 0;

}