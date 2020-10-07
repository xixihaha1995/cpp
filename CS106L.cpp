#include <string>
#include <sstream>
#include <iostream>


struct movies_t {
    std::string title;
    int year;
} mine, yours;

void printmovie (movies_t movie);

int main()
{
    std::string mystr;
    mine.title = "Three Body";
    mine.year = 2077;

    std::cout << "Enter title\n";
    std::getline(std::cin, yours.title);
    std::cout << "Enter year\n";
    std::getline(std::cin, mystr);
    std::stringstream(mystr) >> yours.year;

    std::cout << "My movie is: \n";
    printmovie(mine);
    std::cout << "And your movie is: \n";
    printmovie(yours);

}
