#include <iostream>

using namespace std;

int main ()
{
    char input;
    int health = 100;
    int lives = 3; 

    
    cout << "Welcome to Sloan" << endl;
    cout << "You are a special operative in MARSOC" << endl;
    cout << "You are in a mission in Benghazi to retreive an important document that was stolen by Russians" << endl;
    do
    {
        cout << "Welcome to Benghazi" << endl;
        cout << "~*~*~*~*~*~" << endl << endl;

        cout << "f - You encountered a friendly pie-der." << endl;
        cout << "s - Someone ate your last slice of pie. Ouch :(" << endl;
        cout << "i - You get stuck in an infinite loop. But at least there are 12 kinds of pie." << endl;

        cin >> input;

        switch (input)
        {
            case 'f': health = health + 25;
                      cout << "His name is King George, and he likes pie." << endl;
                      break;
            case 's': health = health - 50;
                      cout << "They didn't even leave any crumbs :/" << endl;
                      break;
            case 'i': health = health + 10;
                      cout << "You broke out with the power of [Ctrl + [C]" << endl << endl;
                      break;
            default: cout << "This is not one of your options given by your AI" << endl;           
        }

        while (health <= 0)
        {   
            health = 100;
            lives--;

            if (health < 0)
                health = 100;


        }

        if (health >= 100)
            health = 100;

        cout << "Total Health: " << health << endl << endl;
        cout << "Total Lives: " << lives << endl << endl;

    } while (lives > 0);

    cout << "YOU HAVE PERISHED!" << endl;

    return 0;

}
