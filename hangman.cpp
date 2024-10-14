#include <iostream>
#include <cstring>
#include <unistd.h>
using namespace std;

string randWordGen() //random number generator
{
    string randWord[100] = {"poke",
        "cave",
        "charge",
        "wink",
        "weight",
        "bedroom",
        "stale",
        "vacation",
        "chess",
        "embarrass",
        "cure",
        "picture",
        "fretful",
        "warlike",
        "numberless",
        "dizzy",
        "boundless",
        "linen",
        "teaching",
        "aberrant",
        "hulking",
        "manage",
        "voiceless",
        "woman",
        "river",
        "hair",
        "flavor",
        "partner",
        "basketball",
        "visitor",
        "internal",
        "peck",
        "nondescript",
        "aromatic",
        "expert",
        "eyes",
        "fowl",
        "jazzy",
        "bat",
        "report",
        "mug",
        "poison",
        "mere",
        "concentrate",
        "fork",
        "stick",
        "frantic",
        "connect",
        "maniacal",
        "friendly",
        "guiltless",
        "desert",
        "tiger",
        "crush",
        "entertaining",
        "secretary",
        "far",
        "drawer",
        "absurd",
        "fruit",
        "juggle",
        "afternoon",
        "stupid",
        "introduce",
        "ice",
        "land",
        "incandescent",
        "deserted",
        "drop",
        "selfish",
        "crabby",
        "bored",
        "miniature",
        "pathetic",
        "crime",
        "frame",
        "kettle",
        "nifty",
        "number",
        "sweet",
        "squeak",
        "profuse",
        "crowd",
        "trail",
        "explain",
        "nippy",
        "scrub",
        "untidy",
        "test",
        "rush",
        "drink",
        "two",
        "remarkable",
        "border",
        "ship",
        "slow",
        "radiate",
        "shape",
        "tax",
        "protest"};

    int  number;
    int  i;
    srand(time(NULL));

    number = rand() % 100+1;
    srand(1);

    return randWord[number];
}
void lives7()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|        /|\\         |" << endl;
    cout << "|        / \\         |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives6()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|        /|\\         |" << endl;
    cout << "|          \\         |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives5()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|        /|\\         |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives4()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|        /|          |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives3()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives2()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives1()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         x          |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}

int main()
{
    int word_counter = 0;
    int lives = 7;
    char response;
    bool response_acc = false;
    string updatedRes;
    string randomWord = randWordGen();
    int randWordLen = randomWord.length();
    bool toggle_me = true;
    int counter = 0;
    bool toggle_letter[randWordLen] = {false};
    bool word_entirety = false;
    string response_plus = ""; // set response_plus to nothing
    bool repeat_letter = false;
    std::system("clear"); // clear system




    lives7(); //Display lives 7
    //cout << randomWord << endl; //display radnom word for debug analysis
    char array_underscore[randomWord.size()];


    for(int m = 0; m < randomWord.size(); m++) // set underscore length for the word
    {
        array_underscore[m] = '_';
        cout << array_underscore[m];
    }
   
    cout << endl << endl;
    while(toggle_me == true) 
    {
        cout << "There are " << randomWord.size() << " letters in this word!" << endl << endl;
        char wordProgress[randomWord.size()]; //set wordProgress to the size of the random word
        cout << "Guess a letter: ";
        cin >> response;
        if(response >= 65 && response <= 90) // uppercase to lowercase converter (just in case)
        {
            response = response + 32;
        }

        char char_array[randomWord.size() + 1];

        for(int k = 0; k < randWordLen; k++)
        {
            if(response == char_array[k])
            {
                response = array_underscore[k];
                response_acc = true;
                k = randWordLen + 1;
                word_entirety = true;
            }
        }

        strcpy(char_array, randomWord.c_str());
        if(word_entirety == false)
        {
        for(int i = 0; i <= randWordLen; i++) // this will check if response from user is valid
        {   
            for(int s = 0; s <= randWordLen; s++) 
            {
                // if(response == array_underscore[s])
                // {
                //     response = array_underscore[s];
                //     response_acc = true;
                //     i = randWordLen + 1; // exit for loop i
                //     toggle_letter[s] = true;
                // }
            }
            if(response == array_underscore[i]) //repeat letter warning for user
            {   
                cout << "\033[31m";
                cout << endl << "You've already tried that letter try something else! " << endl;
                cout << "\033[0m";
                usleep(2000000); //display the warning for 2 seconds
                repeat_letter = true;
                i = randWordLen + 1;
            }
            if(response == char_array[i])
            {
                array_underscore[i] = response;

                response_acc = true;

                if(char_array[i] == array_underscore[i] && toggle_letter[i] == false) 
                {
                    word_counter++; 
                    toggle_letter[i] = true;
                    response_acc = true;
                }
            }

        }
        }
        if(response_acc == false)
        {
            lives--;
        }
        if (lives == 7)
        {
            lives7();
            cout << "This is your current lives: "; cout << "\033[32m"; cout << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << "\033[32m" << endl;
                cout << endl << "That was correct!" << endl;
                cout << "\033[0m";
            }
            else
            {
                cout << "\033[31m";
                cout << endl << "Ouch! That was a wrong answer!" << endl;
                cout << "\033[0m";
            }
            
        }
        else if(lives == 6)
        {
            lives6();
            cout << "This is your current lives: "; cout << "\033[32m"; cout << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << "\033[32m" << endl;
                cout << endl << "That was correct!" << endl;
                cout << "\033[0m";
            }
            else
            {
                cout << "\033[31m";
                cout << endl << "Ouch! That was a wrong answer!" << endl;
                cout << "\033[0m";
            }
            //cout << word_counter << endl;
        }
        else if(lives == 5)
        {
            lives5();
            cout << "This is your current lives: "; cout << "\033[32m"; cout << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << "\033[32m" << endl;
                cout << endl << "That was correct!" << endl;
                cout << "\033[0m";
            }
            else
            {
                cout << "\033[31m";
                cout << endl << "Ouch! That was a wrong answer!" << endl;
                cout << "\033[0m";
            }
        }
        //cout << "\033[35m"; pink 
        //cout << "\033[36m"; light blue
        else if(lives == 4)
        {
            lives4();
            cout << "This is your current lives: "; cout << "\033[33m"; cout << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << "\033[32m" << endl;
                cout << endl << "That was correct!" << endl;
                cout << "\033[0m";
            }
            else
            {
                cout << "\033[31m";
                cout << endl << "Ouch! That was a wrong answer!" << endl;
                cout << "\033[0m";
            }
        }
        else if(lives == 3)
        {
            lives3();
            cout << "This is your current lives: "; cout << "\033[31m"; cout << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << "\033[32m" << endl;
                cout << endl << "That was correct!" << endl;
                cout << "\033[0m";
            }
            else
            {
                cout << "\033[31m";
                cout << endl << "Ouch! That was a wrong answer!" << endl;
                cout << "\033[0m";
            }
        }
        else if(lives == 2)
        {
            lives2();
            cout << "This is your current lives: "; cout << "\033[31m"; cout << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << "\033[32m" << endl;
                cout << endl << "That was correct!" << endl;
                cout << "\033[0m";
            }
            else
            {
                cout << "\033[31m";
                cout << endl << "Ouch! That was a wrong answer!" << endl;
                cout << "\033[0m";
            }
        }
        else
        {
            lives1();
            cout << "This is your current lives: "; cout << "\033[35m"; cout << lives - 1 << endl;
            cout << endl << "\033[31m";
            cout << "YOU HAVE DIED!" << endl;
            cout << "\033[0m";
            cout << endl << "The correct word was: "; cout << "\033[35m"; cout << randomWord << endl;
            //cout << word_counter << endl;
            return -1;
        }
        for(int p = 0; p < randWordLen; p++)
        {
            cout << array_underscore[p];
        }
        cout << endl;
        if(repeat_letter == true)
        {
            response_plus =  response_plus + "";
        }
        else
        {
            response_plus =  response_plus + " " + response;
        }
        cout << "Your attempted letters are:"; cout << "\033[35m"; cout << response_plus; cout << "\033[0m" << endl;
        response_acc = false;
        repeat_letter = false;
        counter++;
        
        if(word_counter == randWordLen)
            {
                toggle_me = false;
            }
    }

    cout << "\033[32m";
    cout << endl << "Great job, you got it!" << endl << endl;
    return 0;
}
