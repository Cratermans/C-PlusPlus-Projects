// Project 2: Rock Paper Scissor
// User is asked to make choices based on both computer ans user  choices.
// The results are displayed showing both computer and user choices.
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;


int main()
{

    char selection;
    char com_selection;
    int min = 1;
    int max = 3;
    cout << "Welcome to Rock Paper Scisors!" << endl;
    cout << "Make your selection (e.g R, P, S): ";
    cin >> selection;
    cout << endl;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min, max);

    int randomValue = distrib(gen);

    switch(randomValue)
    {

        case 1:
            com_selection = 'R';
            cout << "Computer choose rock" << endl;
            break;
        case 2:
            com_selection = 'P';
            cout << "Computer choose paper" << endl;
            break;
        case 3:
            com_selection = 'S';
            cout << "Computer choose scissors" << endl;
            break;
        default:
            cout << "Error" << endl;
    }

        if(selection == 'R' && com_selection == 'R')
        {
            cout << "Tie" << endl;
        }
        else if(selection == 'R' && com_selection == 'P')
        {
            cout << "Computer Wins" << endl;
        }
        else if(selection == 'R' && com_selection == 'S')
        {
            cout << "You Win" << endl;
        }
        else if(selection == 'P' && com_selection == 'P')
        {
            cout << "Tie" << endl;
        }
        else if(selection == 'P' && com_selection == 'S')
        {
            cout << "Computer Wins" << endl;
        }
        else if(selection == 'P' && com_selection == 'R')
        {
            cout << "You Win" << endl;
        }
        else if(selection == 'S' && com_selection == 'S')
        {
            cout << "Tie" << endl;
        }
        else if(selection == 'S' && com_selection == 'R')
        {
            cout << "Computer Wins" << endl;
        }
        else if(selection == 'S' && com_selection == 'P')
        {
            cout << "You Win" << endl;
        }
    return 0;
}