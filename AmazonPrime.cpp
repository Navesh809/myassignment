#include <iostream>
#include <string>
using namespace std;
struct Film { // struct to store film information
    string name;// to store film name    
    int length; // to store film duration    
    double score; // to store film rating  
};
int main() {
    string categories[5] = {"Action", "Comedy", "Drama", "Horror", "Sci-Fi"}; // array to store film catagories

 Film filmList[5][10] = {
        { // action
            {"Mad Max: Fury Road", 120, 8.1},
            {"John Wick", 110, 7.4},
            {"The Dark Knight", 152, 9.0},
            {"Heads Of State", 116, 6.4},
            {"The Picker", 94, 5.4},
            {"A Working Man", 116, 5.7},
            {"Ice Road: Vengeamce", 116, 4.8},
            {"The Tomorrow War", 132, 6.6},
            {"Red One", 124, 6.3},
            {"The Beekeeper", 105, 6.3}
        },
        { // aomedy
            {"Borderlands", 100, 4.7},
            {"Paul", 99, 6.9},
            {"Jumanji: The Next Level", 118, 6.6},
            {"Jumanji: Welcome to the Jungle", 114, 7.0},
            {"Central Intelligence", 105, 6.3},
            {"Ghostbusters: Frozen Empire", 115, 6.1},
            {"Zombieland: Double Tap", 84, 6.7},
            {"Men In Black", 98, 7.3},
            {"The 40-Year-Old Virgin", 111, 7.1},
            {"Ted", 101, 6.9}
        },
        { // drama
            {"The Magnificent Seven", 127, 6.9},
            {"Anaconda", 85, 4.9},
            {"Creed", 127, 7.6},
            {"Inglourious Basterds", 146, 8.4},
            {"Gran Turismo: Based on a True Story", 134, 7.1},
            {"Creed II", 124, 7.1},
            {"Max", 110, 6.6},
            {"Rocky", 114, 8.1},
            {"Samaritan", 102, 5.7},
            {"Everest", 116, 7.1}
        },
        { // horror
            {"The Conjuring", 112, 7.5},
            {"It", 135, 7.3},
            {"A Quiet Place", 90, 7.5},
            {"Annabelle", 99, 5.4},
            {"The Mummy (2017)", 102, 5.4},
            {"Insidious 2", 101, 6.6},
            {"Child's Play", 83, 6.7},
            {"Tarot", 88, 4.8},
            {"Khanzab", 104, 4.6},
            {"KKN di Desa Penari: Luwih Dowo, Luwih Medeni", 175, 5.9}
        },
        { // sci-fi
            {"Pacific Rim Uprising", 103, 5.6},
            {"RoboCop", 113, 6.1},
            {"The Matrix", 136, 8.7},
            {"Madame Web", 111, 4.1},
            {"The Terminator", 102, 8.1},
            {"The Chronicles Of Riddick", 114, 6.6},
            {"War of the Worlds", 89, 2.5},
            {"Hellboy", 116, 6.9},
            {"Back To The Future", 111, 8.5},
            {"Godzilla", 133, 5.5}
        }
    };
    while (true) {//while loop to repeat the genre selection
        // Show main menu
        cout << "\n***** Amazon Prime Movie Recommender *****\n";
        cout << "Available Categories:\n";
        for (int i = 0; i < 5; i++) {
            cout << "  " << (i + 1) << ". " << categories[i] << endl;// for loop to loop through movie categories
        }
        int userChoice;
        cout << "\nEnter your choice (1-5): ";
        cin >> userChoice;

        if (userChoice >= 1 && userChoice <= 5) { // function to print out movies based on user selection
            cout << "\nMovies in " << categories[userChoice - 1] << " \n";
            cout << "---------------------------------------------\n";
            for (int j = 0; j < 10; j++) {
                cout << "Movie #" << j + 1 << "\n";
                cout << "Title   : " << filmList[userChoice - 1][j].name << "\n";
                cout << "Length  : " << filmList[userChoice - 1][j].length << " minutes\n";
                cout << "Rating  : " << filmList[userChoice - 1][j].score << "/10\n";
                cout << "---------------------------------------------\n";
            }
        } else {
            cout << "\nInvalid choice. Please select a number between 1 and 5.\n";// error message if user selects a number other than 1 - 5
        }
        char continueOption;
        cout << "\nWould you like to explore another category? Yes = (y)  No = (n) : ";
        cin >> continueOption;

        if (continueOption != 'y' && continueOption != 'Y') {
            break;
        }
    }
    cout << "\n*****  Thank you for using the Amazon Prime Movie Recommender!  *****\n";
    return 0;// end of program
}
