//james nguyen progaming lab 3


#include <iostream>
#include <string>
#include "die.h"
using namespace std;
int main()
{
  

    string side;
    int coupterTotal = 0;
    int userTotal = 0;
    string input;
    int ndie;
    string in;

    //ask how many dices to roll
    cout << "*** DND dice roller ***" << endl;
    cout << "how many dice you want to roll: ";
    cin >> ndie;

    cout << endl;

    //get the side of dice
    cout << "press the number for a :4 sided,6 sided, 8 sided, 16 sided or even 20 sided die :";
    cin >> side;
    cout << endl;

    //create the object
    die die3(ndie);

    int total = 0;
    if (side == "4") {
        cout << endl << "would you like to roll the dice?" << endl;
        cout << "enter Y for yes or N for no: ";
        //loop how many to roll
        //ask if they want to continies the roll
        for (int i = 0; i < ndie + 1; i++) {
            //roll the 4 die
            getline(cin, in);

            if (in == "y" || in == "Y") {
                die3.dieFour();
                //get the random number
                int u = die3.getFour();
                cout << endl << "**** roll " << i << " was " << u << " point ****";
                cout << endl << "enter Y for yes or N for no to continues: ";
                //total the number
                total += die3.getFour();

            }
        }
        //print out the total
        cout << endl << endl;
        cout << "you have " << total << " points";
    }
    if (side == "6") {
        cout << endl << "would you like to roll the dice?" << endl;
        cout << "enter Y for yes or N for no: ";
        //loop how many to roll
        for (int i = 0; i < ndie + 1; i++) {
            //roll the 4 die
            getline(cin, in);

            if (in == "y" || in == "Y") {
                die3.diesix();
                int u = die3.getsix();
                cout << endl << "**** roll " << i << " was " << u << " point ****";
                cout << endl << "enter Y for yes or N for no to continues: ";
                //total the number
                total += die3.getsix();
            }
        }
    }
    if (side == "8") {
        cout << endl << "would you like to roll the dice?" << endl;
        cout << "enter Y for yes or N for no: ";
        //loop how many to roll
        for (int i = 0; i < ndie + 1; i++) {
            //roll the 4 die
            getline(cin, in);

            if (in == "y" || in == "Y") {
                die3.dieEight();
                int u = die3.getEight();
                cout << endl << "**** roll " << i << " was " << u << " point ****";
                cout << endl << "enter Y for yes or N for no to continues: ";
                //total the number
                total += die3.getEight();
            }
        }
        //print out the total
        cout << endl << endl;
        cout << "you have " << total << " points";
    }
    if (side == "12") {
        cout << endl << "would you like to roll the dice?" << endl;
        cout << "enter Y for yes or N for no: ";
        //loop how many to roll
        for (int i = 0; i < ndie + 1; i++) {
            //roll the 4 die
            getline(cin, in);

            if (in == "y" || in == "Y") {
                die3.dietweleve();
                int u = die3.gettweleve();
                cout << endl << "**** roll " << i << " was " << u << " point ****";
                cout << endl << "enter Y for yes or N for no to continues: ";
                //total the number
                total += die3.gettweleve();
            }
        }
        //print out the total
        cout << endl << endl;
        cout << "you have " << total << " points";
    }
    if (side == "20") {
        cout << endl << "would you like to roll the dice?" << endl;
        cout << "enter Y for yes or N for no: ";
        //loop how many to roll
        for (int i = 0; i < ndie + 1; i++) {
            //roll the 4 die
            getline(cin, in);

            if (in == "y" || in == "Y") {
                die3.dietwenty();
                int u = die3.gettwenty();
                cout << endl << "**** roll " << i << " was " << u << " point ****";
                cout << endl << "enter Y for yes or N for no to continues: ";
                //total the number
                total += die3.gettwenty();
            }
        }
        //print out the total
        cout << endl << endl;
        cout << "you have " << total << " points";
    }
   
}
