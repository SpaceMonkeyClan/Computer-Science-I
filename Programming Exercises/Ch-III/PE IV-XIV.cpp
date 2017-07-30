// Programming Exercise 4.14 - V 1.0.0
// Author: Dena, Rene
// Last Modified: 6/30/17


#include <iostream>

using namespace std;

// ____________________________________________MISC....__________________________

void grind_coffee()
{
    cout << "\tSet your grinder to medium (or whatever the machine maker recommends)." << endl;
    cout << "\tYou can also use pre-ground coffee, though this is not recommended as the beans lose about 60 percent of aroma after 15 minutes." << endl;
    cout << "\tSelection of beans is key." << endl;
    return;
}

void filter_placement()
{
    cout << "\tFollowing the instructions for your particular coffee maker, use the right size filter and place in the basket." << endl;
    cout << "\tIf it's removable, you can rinse the filter and basket in hot water to remove any paper flavor." << endl;
    cout << "\tThere are also reusable gold filters available for many coffee makers. These cut down on paper waste, add no flavor at all to the brew, and are easily cleaned." << endl;
    return;
}

void add_grounds()
{
    cout << "\tMost coffee makers like to have about 2 tablespoons (30 ml) per cup. Adjust this proportion to taste: stronger coffee means more grounds, lighter coffee means less." << endl;
    cout << "\tIf you brew it too strong, you can always add some hot water to your cup." << endl;
    return;
}

void fill_reservior()
{
    cout << "\tUse the carafe as a measuring cup by filling it with the appropriate amount of water for the amount of coffee you have used." << endl;
    cout << "\tHint: (Most coffee pots have measurements on the side.)" << endl;
    return;
}


void turn_on()
{
    cout << "\tPress the 'On' or Power button/switch. After a minute or two as the machine pre-heats the water, your coffee should begin brewing." << endl;
    cout << "\tSome machines brew quickly, but others brew slowly. Slow isn't actually all bad though; it gives the end result a more rounded flavor." << endl;
    cout << "\tPlay some music or entertain yourself for a few minutes while your coffee is brewing. The coffee is done when you stop hearing bubbling sounds." << endl;
    return;
}

void enjoy()
{
    cout << "\tALL DONE!!! Pour yourself a cup and add cream and/or sugar if desired. :)" << endl;
    return;
}


void Standard()
{
    cout << "Awesome! You've selected the begin the coffee making process." << endl;
    cout << "Let's begin.....\n\n" << endl;

    cout << "STEP 1: GATHER YOU INGRIDENTS.\n" << endl;
    cout << "\tYou will need a coffee maker with a clean carafe and filter, a grinder, and a cup." << endl;

    cout << "\n\nSTEP 2: GRIND THE COFFEE BEANS.\n" << endl;
    grind_coffee();

    cout << "\n\nSTEP 3: PLACE THE FILTER INTO COFFEE MAKER.\n" << endl;
    filter_placement();

    cout << "\n\nSTEP 4: ADD THE GROUNDS.\n" << endl;
    add_grounds();

    cout <<"\n\nSTEP 5: FILL THE RESERVIOR.\n" << endl;
    fill_reservior();

    cout <<"\n\nSTEP 6: TURN IT ON.\n" << endl;
    turn_on();

    cout <<"\n\nSTEP 7: DRINK UP!\n" << endl;
    enjoy();

    return;
}

// ____________________________________________FUNCTIONS_________________________

void MainII()
{
    cout << "\n\n\t\t\tWelcome to the MAIN CONSOLE!\n\n" << endl;
    cout << "When ready to begin, please ENTER 'start': ";

    string optionI;
    cin >> optionI;
    if (optionI == "start")
        Standard();

    return;
}

// ____________________________________________STRICKLY SCRIPT______________________


int main()
{
    cout << "\n\n\t\t\tWelcome to the \"Coffee Maker script!\"\n\n" << endl;
    cout << "In this script, we will essentially output the instructions in order to guide you in your coffee making process.\n" << endl;
    cout << "So let's get started. You will now be taken to the MAIN CONSOLE.\n" << endl;
    cout << "LOADING...............\n\n" << endl;
    MainII();



    return 0;
}
