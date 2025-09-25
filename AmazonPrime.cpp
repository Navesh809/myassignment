#include <iostream>
#include <string>
using namespace std;
struct Film {
    string name;    
    int length;     
    double score;   
};
int main() {
    string categories[5] = {"Action", "Comedy", "Drama", "Horror", "Sci-Fi"};

    Film filmList[5][4] = {
        { {"Mad Max: Fury Road", 120, 8.1}, {"John Wick", 110, 7.4}, {"The Dark Knight", 152, 9.0}, {"Avengers: Endgame", 181, 8.4} },
        { {"The Hangover", 100, 7.7}, {"Superbad", 113, 7.6}, {"Step Brothers", 98, 6.9}, {"Jumanji: Welcome to the Jungle", 119, 6.9} },
        { {"The Shawshank Redemption", 142, 9.3}, {"Forrest Gump", 144, 8.8}, {"The Pursuit of Happyness", 117, 8.0}, {"A Beautiful Mind", 135, 8.2} },
        { {"The Conjuring", 112, 7.5}, {"It", 135, 7.3}, {"A Quiet Place", 90, 7.5}, {"Annabelle", 99, 5.4} },
        { {"Inception", 148, 8.8}, {"Interstellar", 169, 8.6}, {"The Matrix", 136, 8.7}, {"Blade Runner 2049", 164, 8.0} }
    };
    
    return 0;
}
