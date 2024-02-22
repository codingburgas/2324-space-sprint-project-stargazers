#include <iostream>
#include <iomanip>

#ifdef _WIN32
#include <windows.h>
#define CLEAR_SCREEN() system("cls")
#elif defined(__unix__) || defined(__APPLE__)
#include <cstdlib>
#define CLEAR_SCREEN() system("clear")
#else
#define CLEAR_SCREEN() std::cout << "\033[2J\033[1;1H"
#endif


void convertYears() {
    int choice;
    double earthYears;
    const double conversionFactors[] = {
        0.3066,     // Earth to Light years
        1.0,        // Light years to Earth
        0.240846,   // Mercury
        0.615197,   // Venus
        1.0,        // Earth
        1.880815,   // Mars
        11.862615,  // Jupiter
        29.447498,  // Saturn
        84.016846,  // Uranus
        164.79132,  // Neptune
        129.945,    // Kepler-186f
        11.186,     // Proxima Centauri b
        6.099,      // TRAPPIST-1e
        3.093,      // HD 219134 b
        1.274,      // WASP-121b
        32.939,     // K2-18b
        9.206,      // TRAPPIST-1f
        37.09       // Gliese 581g
    };

    do {
        CLEAR_SCREEN();
        HANDLE hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << "        .o88b.  .d88b.  d8b   db db    db d88888b d8888b. d888888b      db    db d88888b  .d8b.  d8888b. .d8888." << std::endl;

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << "       d8P  Y8 .8P  Y8. 888o  88 88    88 88'     88  `8D `~~88~~'      `8b  d8' 88'     d8' `8b 88  `8D 88'  YP" << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "       8P      88    88 88V8o 88 Y8    8P 88ooooo 88oobY'    88          `8bd8'  88ooooo 88ooo88 88oobY' `8bo." << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "       8b      88    88 88 V8o88 `8b  d8' 88~~~~~ 88`8b      88            88    88~~~~~ 88~~~88 88`8b     `Y8b." << std::endl;

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "       Y8b  d8 `8b  d8' 88  V888  `8bd8'  88.     88 `88.    88            88    88.     88   88 88 `88. db   8D" << std::endl;

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "        `Y88P'  `Y88P'  VP   V8P    YP    Y88888P 88   YD    YP            YP    Y88888P YP   YP 88   YD `8888Y'" << std::endl;


        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        SetConsoleTextAttribute(hConsole, 7);
        std::cout << "   Select An Options ->      " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[0m" << "          Light Years            " << "\033[34m" << "|" << "\033[0m" << "          In The Solar Sytem           " << "\033[34m" << "|" << "\033[0m" << "           Out Of The Solar System " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "1" << "\033[95m" << "]" << "\033[0m" << " Earth to Light years       " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "3" << "\033[95m" << "]" << "\033[0m" << " Mercury                          " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "11" << "\033[95m" << "]" << "\033[0m" << " Kepler-186f      " << "\033[95m" << "          [" << "\033[0m" << "0" << "\033[95m" << "]" << "\033[0m" << " Back" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "2" << "\033[95m" << "]" << "\033[0m" << " Light to Earth years       " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "4" << "\033[95m" << "]" << "\033[0m" << " Venus                            " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "12" << "\033[95m" << "]" << "\033[0m" << " Proxima Centauri b               " << std::endl;
        std::cout << "                                 " <<"\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "5" << "\033[95m" << "]" << "\033[0m" << " Earth                            " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "13" << "\033[95m" << "]" << "\033[0m" << " TRAPPIST-1e          " << std::endl;
        std::cout << "                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "6" << "\033[95m" << "]" << "\033[0m" << " Mars                            " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "14" << "\033[95m" << "]" << "\033[0m" << " HD 219134 b          " << std::endl;
        std::cout << "                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "7" << "\033[95m" << "]" << "\033[0m" << " Jupiter                         " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "15" << "\033[95m" << "]" << "\033[0m" << " WASP - 121b            " << std::endl;
        std::cout << "                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "8" << "\033[95m" << "]" << "\033[0m" << " Saturn                          " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "16" << "\033[95m" << "]" << "\033[0m" << " K2 - 18b               " << std::endl;
        std::cout << "                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "9" << "\033[95m" << "]" << "\033[0m" << " Uranus                          " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "17" << "\033[95m" << "]" << "\033[0m" << " TRAPPIST - 1f          " << std::endl;
        std::cout << "                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "10" << "\033[95m" << "]" << "\033[0m" << " Neptune                        " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "18" << "\033[95m" << "]" << "\033[0m" << " Gliese 581g          " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;


        std::cout << std::endl;
        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "\033[35m" << "> " << "\033[0m" << "Choice?" << "\033[35m" << " (" << "\033[0m" << "0 - 18" << "\033[35m" << ") " << "\033[0m" << ":" << std::endl;
        std::cin >> choice;

        switch (choice) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "| " << "\033[0m" << "Enter Earth Years :" << "\033[34m" << "                     | " << std::endl;
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
            std::cout << "->";
            std::cin >> earthYears;
            std::cout << "Converted years: " << std::fixed << std::setprecision(2) << earthYears * conversionFactors[choice - 1] << std::endl;
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "| " << "\033[0m" << "0. Back" << "\033[34m" << "                                 | " << std::endl;
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cin >> choice;
            break;
        case 0:
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}

void convertWeight() {
    int choice;
    double weight, newWeight;

    do {
        CLEAR_SCREEN();
        HANDLE hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << " .o88b.  .d88b.  d8b   db db    db d88888b d8888b. d888888b      db   d8b   db d88888b d888888b  d888b  db   db d888888b\n";

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << "d8P  Y8 .8P  Y8. 888o  88 88    88 88'     88  `8D `~~88~~'      88   I8I   88 88'       `88'   88' Y8b 88   88 `~~88~~'\n";

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "8P      88    88 88V8o 88 Y8    8P 88ooooo 88oobY'    88         88   I8I   88 88ooooo    88    88      88ooo88    88\n";

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "8b      88    88 88 V8o88 `8b  d8' 88~~~~~ 88`8b      88         Y8   I8I   88 88~~~~~    88    88  ooo 88~~~88    88\n";

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "Y8b  d8 `8b  d8' 88  V888  `8bd8'  88.     88 `88.    88         `8b d8'8b d8' 88.       .88.   88. ~8~ 88   88    88\n";

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "`Y88P'   `Y88P'  VP   V8P    YP    Y88888P 88   YD    YP          `8b8' `8d8'  Y88888P Y888888P  Y888P  YP   YP    YP\n";

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        SetConsoleTextAttribute(hConsole, 7);
        std::cout << "   Select a planet ->                                                                                                   " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[0m" << "             In The Solar Sytem               " << "\033[34m" << "|" << "\033[0m" << "                    Out Of The Solar System " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "1" << "\033[95m" << "]" << "\033[0m" << " Mercury                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "9" << "\033[95m" << "]" << "\033[0m" << " Kepler-186f              " << "\033[95m" << "  [" << "\033[0m" << "0" << "\033[95m" << "]" << "\033[0m" << " Back" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "2" << "\033[95m" << "]" << "\033[0m" << " Venus                                   " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "10" << "\033[95m" << "]" << "\033[0m" << " Proxima Centauri b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "3" << "\033[95m" << "]" << "\033[0m" << " Earth                                   " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "11" << "\033[95m" << "]" << "\033[0m" << " TRAPPIST-1e" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "4" << "\033[95m" << "]" << "\033[0m" << " Mars                                    " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "12" << "\033[95m" << "]" << "\033[0m" << " HD 219134 b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "5" << "\033[95m" << "]" << "\033[0m" << " Jupiter                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "13" << "\033[95m" << "]" << "\033[0m" << " WASP-121b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "6" << "\033[95m" << "]" << "\033[0m" << " Saturn                                  " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "14" << "\033[95m" << "]" << "\033[0m" << " K2-18b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "7" << "\033[95m" << "]" << "\033[0m" << " Uranus                                  " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "15" << "\033[95m" << "]" << "\033[0m" << " TRAPPIST-1f" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "8" << "\033[95m" << "]" << "\033[0m" << " Neptune                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "16" << "\033[95m" << "]" << "\033[0m" << " Gliese 581g" << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        std::cout << std::endl;
        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "\033[35m" << "> " << "\033[0m" << "Choice?" << "\033[35m" << " (" << "\033[0m" << "0 - 16" << "\033[35m" << ") " << "\033[0m" << ":" << std::endl;
        std::cin >> choice;

        const double weights[] = { 0.38, 0.91, 1.0, 0.38, 2.34, 1.06, 0.92, 1.19, 0.53, 0.06, 0.85, 0.16, 0.38, 0.14, 0.93, 0.57 };

        switch (choice) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "| " << "\033[0m" << "Enter weight in kilograms :" << "\033[34m" << "             | " << std::endl;
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
            std::cout << "->";
            std::cin >> weight;
            newWeight = weight * weights[choice - 1];
            std::cout << "Your weight on the selected planet: " << newWeight << " kg" << std::endl;
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "| " << "\033[0m" << "0. Back" << "\033[34m" << "                                 | " << std::endl;
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cin >> choice;
            break;
        case 0:
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}


void showPlanetInfo(const std::string& planetName, const std::string& description) {
    CLEAR_SCREEN();
    std::cout << std::endl << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << description << std::endl << std::endl;
    std::cout << "Press any key to continue...";
    std::cin.ignore();
    std::cin.get();
}

void planetInfo() {
    int choice;

    do {
        CLEAR_SCREEN();
        HANDLE hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << "                            d8888b. db       .d8b.  d8b   db d88888b d888888b .d8888.\n";

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << "                            88  `8D 88      d8' `8b 888o  88 88'     `~~88~~' 88'  YP \n";

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "                            88oodD' 88      88ooo88 88V8o 88 88ooooo    88    `8bo.   \n";

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "                            88~~~   88      88~~~88 88 V8o88 88~~~~~    88      `Y8b.  \n";

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "                            88      88booo. 88   88 88  V888 88.        88    db   8D \n";

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "                            88      Y88888P YP   YP VP   V8P Y88888P    YP    `8888Y' \n";

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        SetConsoleTextAttribute(hConsole, 7);
        std::cout << "   Select a planet ->                                                                                                   " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[0m" << "             In The Solar Sytem               " << "\033[34m" << "|" << "\033[0m" << "                    Out Of The Solar System " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "1" << "\033[95m" << "]" << "\033[0m" << " Mercury                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "9" << "\033[95m" << "]" << "\033[0m" << " Kepler-186f              " << "\033[95m" << "  [" << "\033[0m" << "0" << "\033[95m" << "]" << "\033[0m" << " Back" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "2" << "\033[95m" << "]" << "\033[0m" << " Venus                                   " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "10" << "\033[95m" << "]" << "\033[0m" << " Proxima Centauri b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "3" << "\033[95m" << "]" << "\033[0m" << " Earth                                   " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "11" << "\033[95m" << "]" << "\033[0m" << " TRAPPIST-1e" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "4" << "\033[95m" << "]" << "\033[0m" << " Mars                                    " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "12" << "\033[95m" << "]" << "\033[0m" << " HD 219134 b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "5" << "\033[95m" << "]" << "\033[0m" << " Jupiter                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "13" << "\033[95m" << "]" << "\033[0m" << " WASP-121b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "6" << "\033[95m" << "]" << "\033[0m" << " Saturn                                  " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "14" << "\033[95m" << "]" << "\033[0m" << " K2-18b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "7" << "\033[95m" << "]" << "\033[0m" << " Uranus                                  " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "15" << "\033[95m" << "]" << "\033[0m" << " TRAPPIST-1f" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "8" << "\033[95m" << "]" << "\033[0m" << " Neptune                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "16" << "\033[95m" << "]" << "\033[0m" << " Gliese 581g" << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        std::cout << std::endl;
        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "\033[35m" << "> " << "\033[0m" << "Choice?" << "\033[35m" << " (" << "\033[0m" << "0 - 16" << "\033[35m" << ") " << "\033[0m" << ":" << std::endl;
        std::cin >> choice;

        switch (choice) {
        case 1:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@&#**//*(/%@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@#(((((///#////////*///%@@@@@@@@@@@@@
                                    @@@@@@@@@@@((((/(/(((((#(((((//(((/*///(@@@@@@@@@@
                                    @@@@@@@@(#(((/((((((####((((/(*((((/////*/(@@@@@@@
                                    @@@@@@/(((((((((((*((/*((((//(/((((((#((#///&@@@@@
                                    @@@@@((*(((//(((((/(((/(((*(((/(//(/(##(((((//@@@@
                                    @@@@#(((/(((((((#(#(((((//*/((/((/(//(#(#(///(/@@@
                                    @@@(#(#((#*(*(((###(((/(/#(((((//,/(/*((/(#(/*/#@@
                                    @@@(((/(#(/(/(,(/((#(((((#(((((((/(//*/((/###(//@@
                                    @@@(((/((((//(((*/(((((/#(##(((#//(/((/(#(((((*/@@
                                    @@@(((((((/(,/,((((##(//((((((((((/*//((((((((/(@@
                                    @@@((((((*(//*,(((##@(((#(#####(#//,,//((((#(((%@@
                                    @@@@(/((((#((/(((#((((#(/(#((##(#/(*((///((((((@@@
                                    @@@@@@(((((/(((((((((/(((//(//(((((((((((/((/(#@@@
                                    @@@@@@#/(((((((((#/###(((((//,//#(#//(((((((@@@@@@
                                    @@@@@@@@//(((((((#(#(#((##%#(((##(/(((#(((@@@@@@@@
                                    @@@@@@@@@@@/((*((#(#(((##(#(((((((((((/(@@@@@@@@@@
                                    @@@@@@@@@@@@@@&(((#(#((((//(((((((((@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "                                    Mercury is the smallest planet in our solar system." << std::endl << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 2:
            showPlanetInfo("Venus", "Venus is the second planet from the Sun and similar in size to Earth.");
            break;
        case 3:
            showPlanetInfo("Earth", "Earth is the third planet from the Sun and the only known planet with life.");
            break;
        case 4:
            showPlanetInfo("Mars", "Mars is known as the 'Red Planet' and has the largest volcano in the solar system.");
            break;
        case 5:
            showPlanetInfo("Jupiter", "Jupiter is the largest planet in our solar system.");
            break;
        case 6:
            showPlanetInfo("Saturn", "Saturn is known for its beautiful rings made of ice and dust.");
            break;
        case 7:
            showPlanetInfo("Uranus", "Uranus is the seventh planet from the Sun and has a unique rotation.");
            break;
        case 8:
            showPlanetInfo("Neptune", "Neptune is the eighth planet from the Sun and has the strongest winds in the solar system.");
            break;
        case 9:
            showPlanetInfo("Kepler-186f", "Kepler-186f is an exoplanet orbiting within the habitable zone of the star Kepler-186.");
            break;
        case 10:
            showPlanetInfo("Proxima Centauri b", "Proxima Centauri b is an exoplanet orbiting the closest star to the Sun, Proxima Centauri.");
            break;
        case 11:
            showPlanetInfo("TRAPPIST-1e", "TRAPPIST-1e is one of the seven exoplanets orbiting the ultracool dwarf star TRAPPIST-1.");
            break;
        case 12:
            showPlanetInfo("HD 219134 b", "HD 219134 b is an exoplanet orbiting the star HD 219134, located in the constellation of Cassiopeia.");
            break;
        case 13:
            showPlanetInfo("WASP-121b", "WASP-121b is an exoplanet orbiting the star WASP-121, known for its extreme heat and close proximity to its host star.");
            break;
        case 14:
            showPlanetInfo("K2-18b", "K2-18b is an exoplanet orbiting the red dwarf star K2-18, located within the habitable zone and potentially having liquid water on its surface.");
            break;
        case 15:
            showPlanetInfo("TRAPPIST-1f", "TRAPPIST-1f is one of the seven exoplanets orbiting the ultracool dwarf star TRAPPIST-1.");
            break;
        case 16:
            showPlanetInfo("Gliese 581g", "Gliese 581g is an exoplanet orbiting the red dwarf star Gliese 581, located within the habitable zone and considered a potential candidate for extraterrestrial life.");
            break;
        case 0:
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);
}

void starsInfo() {
    int choice;


    do {
        CLEAR_SCREEN();
        HANDLE hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << R"(                                    .d8888. d888888b  .d8b.  d8888b. .d8888.)" << std::endl;
        std::cout << R"(                                    88'  YP `~~88~~' d8' `8b 88  `8D 88'  YP)" << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << R"(                                    `8bo.      88    88ooo88 88oobY' `8bo.   )" << std::endl;
        std::cout << R"(                                      `Y8b.    88    88~~~88 88`8b     `Y8b.)" << std::endl;

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << R"(                                    db   8D    88    88   88 88 `88. db   8D)" << std::endl;
        std::cout << R"(                                    `8888Y'    YP    YP   YP 88   YD `8888Y')" << std::endl;



        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        SetConsoleTextAttribute(hConsole, 7);
        std::cout << "   Select a star:                                                                                                   " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "1" << "\033[95m" << "]" << "\033[0m" << " Sun                                     " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "2" << "\033[95m" << "]" << "\033[0m" << " Proxima Centauri                        " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "3" << "\033[95m" << "]" << "\033[0m" << " Sirius                                  " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "4" << "\033[95m" << "]" << "\033[0m" << " Procyon                                 " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "5" << "\033[95m" << "]" << "\033[0m" << " Canopus                                 " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "6" << "\033[95m" << "]" << "\033[0m" << " Arcturus                                " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "0" << "\033[95m" << "]" << "\033[0m" << " Back                                    " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        std::cout << std::endl;
        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "\033[35m" << "> " << "\033[0m" << "Choice?" << "\033[35m" << " (" << "\033[0m" << "0 - 6" << "\033[35m" << ") " << "\033[0m" << ":" << std::endl;
        std::cin >> choice;
        switch (choice) {
        case 1:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     @@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&%%%%#(%%%&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@&&&&&&&&&%#%#,(*,,,.,,,,,.,*/(##%%&&&&&&&&@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@&&&&%&%%#((/,,,/*((*#(/(##(#(/*,,,*((#%&&&&&&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@&&&&&&%%#*..,**/%%&%&&&&&(//(/(###,**,..*(%&&&&&&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@&&&%###(..**#%%#%#%((#@@&@&%%#%&&%%#(#(,,*##%&&&&&@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@&&&&%&%/.*/(%%%##&%##(&@@@@&#&&&&%%/%%(/*/,*#%%%&&&&@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@&&&%%#%(,*//#&&%%%@#%((#%&@@&#%#(&@&%@&%#(/(,,((%%&&&@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@&&&&%%#*,/(((/&&%%((&&&@&%&&&%%&@@%#%&&(&%(#,,*%%&&&&&@@@@@@@@@@@@@
                     @@@@@@@@@@@@&&&&&&#(.**(*#&(#&&&&%%%%&@%(%%&@@@&%&#&%%&%(**,#%%&&&&&@@@@@@@@@@@@
                     @@@@@@@@@@@@&&&&&%%(.*//((((*%%&(%&&@@@@@&%##/(&/*(%%###((*,/(/#&&&&@@@@@@@@@@@@
                     @@@@@@@@@@@&&&&%%#**,*,**(/((%&&&&&&@@&@@@@@&%%#@&@@&%##/*,*#%&%&&&@@@@@@@@@@@@@
                     @@@@@@@@@@@@&&&&%%%#,.,,***(#%&&&&%%@@&#@@@@///%%&#&%%#(/*,/*#&&&&&@@@@@@@@@@@@@
                     @@@@@@@@@@@@&&&&&%%#**.,(/%%&#&%&%#%@&&%(#%@@&&&%&&&*#(*,,(/#%&&&&&@@@@@@@@@@@@@
                     @@@@@@@@@@@@@&&&&&%#/(*,,*,((&%%%&##&%&@&//&@@&%%%##((/,.,/&#&&&&&@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@&&&&&&#(*,,,//#%%%#%&(&%&&(%&&%%/%%/#,,,(%%%&&&&&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@&&&&&&%/#*,.,///##/&%##%#%%%#/#(/*,*###%&&&&&&&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@&&&&&&%%%((,,.,***/***(//*,,,*(%%&&&&&&&&&@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&%((#(*(/((/*/,*(%&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&%%%&&&&&&%%%&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         The Sun is a huge, hot ball of gas at the center of our Solar System. It gives off light and heat, which" << std::endl << std::endl;
            std::cout << "         are essential for life on Earth.People in many cultures have admired and worshipped the Sun throughout" << std::endl << std::endl;
            std::cout << "         history. Scientists have also studied it for a long time to understand how it works and how it affects" << std::endl << std::endl;
            std::cout << "         our planet. It's important for us to learn about the Sun because it helps us understand the world we" << std::endl << std::endl;
            std::cout << "         live in and the universe around us. The distance between the Sun and Earth is about 93 million miles" << std::endl << std::endl;
            std::cout << "         or 8.3 light minutes. Which means that the light from the sun reaches Earth's surface in 8.3 minutes." << std::endl << std::endl;
            

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 2:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@%@@@@@@@@@@@@@&@&@@&@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@%@@@@@@@&&&&&&&&&&&&&&&@&&&@@@@@@@@@@@@@@&@@@@@@@@@@@%@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@&#@&&&&&&&&&%&&&&&&&&%&&&@&@@&&&&&&&&&&&&&&@@@@@@&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@&&&(&&&%%%%%%%%%&&&%&&&&&&&&&%&&&&&&&&&&&&&&&&%&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@&&&&&&&&%/#((((((##(%%%&&&&&&&&&&&%&&%&%%%##%%&%&&&&@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@&&&&&&%##(,*,*,*/((#%%%%&&&&&&&&&%%#*(((/(#*#%%&&&&&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@&&&&%%%(/*,.   .*/((%%%%&&&&&&&%%%##(*.. .*/(#%%&&&&&&@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@&&&%%#//*,.,.//((%%%&&&&&&&&&%%%#/*... */(##%%&&&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@&&%%,#((/////((#%%&&&&&&&&&&&&%##((/////(#%%%&&&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@&&&&%&%%%%%%%%%*&&&&&&&&&&&&/&%%%%###%%%%%&&&&&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@%@@@&&&&&&&&&&&&&&&&&@@@@@@@&@&&&&&&%&&&&&&&&#&&@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@&@@@@@@@@@@@&&&&&&@@@@@@@(@@&@@@@@@@@&&&&&&@@@@@@@&@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Proxima Centauri is a red dwarf star located in the constellation of Centaurus. It is the closest known" << std::endl << std::endl;
            std::cout << "         star to the Sun and is part of the Alpha Centauri star system, which also includes Alpha Centauri A and" << std::endl << std::endl;
            std::cout << "         Alpha Centauri B. Proxima Centauri is approximately 4.24 light-years away from the Solar System, making" << std::endl << std::endl;
            std::cout << "         it the closest known exoplanetary system. Discovered in 1915 by Scottish astronomer Robert Innes," << std::endl << std::endl;
            std::cout << "         Proxima Centauri is a relatively dim and cool star compared to the Sun. It has about 12% of the Sun's" << std::endl << std::endl;
            std::cout << "         mass and emits much less energy. Proxima Centauri is classified as a red dwarf, a type of low-mass star" << std::endl << std::endl;
            std::cout << "         that is the most common type in the Milky Way galaxy." << std::endl << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 3:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     @@@@@@@&@@@@@&&@@@@&@@@@@@@&@&&&&@@@@&&@@@@@&%@@@@&&&@@&@@&&&&&&&&&@@%&@@&&&@%&@
                     @@@&&@@@&@@@&@@@@&%@@@@&@@@@&&&@%@@&%@@@&&@&&&@&&&&@@&@@&&&&@@@@@&&@@&@&@&%&%@@@
                     &@@@@@@@&@&@@@@@@@&@&@@&&@&@@&@&&&&&%%%&&&&&&&&&&@@&&&@&&@&&@@&@&&&&&&@&@&&@@&%&
                     @@@%@@@@@@%@@&@&&&@@@@&@&&&&&&&&%%%####((######%%%%&&&%@&&@&&&@@&&&&@&&&&&&&&@&@
                     @@@@@@&@&@&@@@@&&@@@@&@&&&&&%%###/*...........,((#%%&&&@&@&@@@@&@&@@&@&@&@#&&@&@
                     &&&&@@&@&@&@@&@&&@@@&@&&&&&%#(*...,,,,*,,,,,,,,.../##%&&&&@@&@%@@&&&%@@&@&&@%@&&
                     &@@@@&&@&&&&@@%%&@&@&&&&%#%(/..,,,,,,,,,*******,,,../##%&&&&&&@@@&&&%&&@&@&&&&&&
                     @@&&&@&&&&@&@@&@&&&@&&&&%%(*.,,,,,,**,*,***,,**,*,,,.*(%%%&&&&&&&&&&&&@%@@@@&@&&
                     &&&&@@@&&&&&@@&&%@&&&&&%##/..,,**,,,,,,*,,,,***,*,,,../#%%&&&@@&@@&&@&&@&@@@&&@&
                     @&&@&&&&&&&&&&&&@&&&&&&%%#*..,,,****,*,,,,**,,*,*,,,../#%%&&&@@@@@@&&&@@&&&&@@%&
                     &&&&&&&@@@%&&&&&&%&@&&&%%#/..,,**,******,*,*,*,,*,,,..(#%&&&&&@@@&&%@@&&&@&&@@@@
                     &&@&&&&&&&&%&&&%%&%&&&&%%#(*.,,,,*,/,,,,*,,,**,,,,,..*##%&&@@@@&@@@&@@@&&%@%&@%&
                     &&&&&&&#&&&&&%%&&&&#&%&&%%/#/..,,,,*,,*,*,,,,,,,,,../#%%&&&&@@@@@@&@@@@@@@@@&@@&
                     &&&@&%&@&&@&&&&&%&&&&&&&%&#%##/...,,,,,,,*,,,,..../#%%%&&#&&&&&&@&@#&&&%&&&&&@&&
                     &&&&%&%&&&%&&@&@&&&&&&&@&&&&%%###/*..........,/(##%%%&&&&&&&@@@@&&&@@%@&@&&%@@@@
                     &&%&&&&&%%&&&&&&&&&%&&&@&&%%&&&&%%%%####((####%%%&&%%%&&&&&&&&@&@&&&&&@@&@@&@@&@
                     &&#&%&&%%&&&&&&&&&&&&&#@&#&&&&%&&&&&&&&%&%&&%&&&&&&&&&&&@&&&&@@@@@&&@@@&&@%&&@@&
                     &&&#&%%%&&&&&&&&&&&&@&&@&@&@&&&%&&&&&&&&&&&%@@&&&&&&&@&&&&@&&&&@@&&&&&&@@&&%@&@&
)" << std::endl << std::endl;
            std::cout << "         Sirius is the brightest star in the night sky, known as the Dog Star. It's in the constellation Canis Major." << std::endl << std::endl;
            std::cout << "         Close to Earth at about 8.6 light-years away, Sirius is actually two stars: Sirius A, the big bright one" << std::endl << std::endl;
            std::cout << "         we see, and Sirius B, a fainter white dwarf. Ancient civilizations, like the Egyptians, Greeks, and Romans," << std::endl << std::endl;
            std::cout << "         valued Sirius for calendars and navigation. Scientists study Sirius to learn more about stars" << std::endl << std::endl;
            std::cout << "         and confirm theories like Einstein's relativity." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 4:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&%%%%%%%#########%%%%&&&&&&@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@&&&&%%%##((((/(//////(###%%%%&&&&&@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@&&&&%%###(//*,,,,,,,,,,*/((###%%%&&&&@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@&&&&%%%#(//*,.,.. .    .,,*//(##%%%&&&&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@&&&&%%%#((/*,,           ..,*//(##%%%&&&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@&&&&%%%##(/*,..            .,,*/((##%%&&&&@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@&&&&%%%#((/*,..            .,,*/(##%%%&&&&@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@&&&&%%##(//*,..           ,,**//(#%%%&&&&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@&&&%%%#((//*,,,,... . ,.,***//(##%%&&&&&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@&&&&%%##(((//****,,,,,***//((###%%%%&&&@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@&&&&%%%###(((////****///(###%%%%%&&&&@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@&&&&&%%%%####((((((((####%%%&&&&&&&@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&%%%%%######%%%%%&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&%%%%%%&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Procyon, also known as Alpha Canis Minoris, is a binary star system consisting of two stars: Procyon A," << std::endl << std::endl;
            std::cout << "         the primary star, and Procyon B, its faint white dwarf companion. Procyon is the brightest star" << std::endl << std::endl;
            std::cout << "         in this constellation and one of the brightest stars in the night sky, with an apparent magnitude" << std::endl << std::endl;
            std::cout << "         of 0.34. It is relatively close to Earth, lying approximately 11.4 light-years away from our Solar System." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 5:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     @@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&%%&&&&&%%&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@%@@@@
                     @&@@&@@@@@@@&@@&&&&&&&&&&&&&&&%%%%%%%%%%%%%%%%%%%%&%&&&&&&&&&&&@&&@@@@@@&@@@@@@@
                     @@@@&@@&@@@@&@&&&&&&&&&&&&%%%%%%%%%%%%%%#%%%%%%%%%%%%%%%&&%&&&&&&&&&&@@@@@@@@@&@
                     @@@@@@&@@&@&&&&&&&&&&&%%%%%%%%###(######(#########%%%%%%%%%%&&&%%&&&&&&@@@@@@@@@
                     @@@@@@@@&#&&&&&&&&&%%%%%%%#######(/(((((((((((((#######%%%%%%%&&&&&&&&&&@@@@@@@@
                     @@@@@&@@&&&&%&&#%%%%%%#####(((((///////*//////(((((((####%%%%%%%&&&&&&&&@@&@@@@@
                     @@@@@@&&&&&&&&&%%%%%%####(((((///*******,******/////((((####%%%%%%&&&&&&&&&&@@@@
                     @@@@&&&&&&&&&%&%%%######(((///***,,,,,,,.,,,,,,****///(((#####%#%%%&&&&&&&&&&@@@
                     @@@@&@&&&&&&&&%%%%%###(((///***,,,.............,,,***///(((######%%&%&&&&&&&&@@&
                     @@@&&&&&&&&&%%%%%%###(((///**,,....           ...,,,***//(((####%%%%&&&&&&@&&@@&
                     @@&&&&&&&&&&%%%%%%#(((((/***,,...               ..,,,**//((((##%%%%%%&&&&&&&&@@&
                     @@@&&&&&&&&%&%%%####(((//**,,,..                ...,,***//((####%%%%%%&&&&&&@&@@
                     @@@&&&&&&&&&&%%%%###((((****,,...               ...,,***//(((##%%%%%%&&&&&@&&@&@
                     @&@&&&&&&&&&%%%%%%##((((//***,,...             ...,,***//(((####%%%%&&&&&&&&&@&@
                     @@@@&&&&&&&&%%%%%#####((///***,,....         ....,,,**///((####%%%%%%&&&&&&&@@@@
                     @@@@&&&&&&&&&&%%%%%####(((///***,,,,.........,,,,***////(((####%%%%%&&&&&&&&&@@@
                     @@@&@&&&&&&&&&%%%%%%####(((////*****,,,,,,,,,,****////(((###%%%%%%%&&&&&&&&@@@@@
                     @@@@&@&&&&&&&&&&%%%%%%####((((//////*********/////(((((####%%%%%%%&&&&&&&&&&@@@@
                     @@@@@@&&&&&&&&&&%&%%%%%%######((((((////////((((((((#####%%%%%%%&&&&&&&&@@&@@@@@
                     @&@@@@@@@&@&&&&&&&&&%%%%%%%%######((((((((/((((######%%%%%%%%%&&&&&&&&&&@@@@@@@@
                     @&&@@@@@@@@&&&&&&&&&&%%%%%%%%%%%%###############%#%%%%%%%%%&&&&&&&&&&&@@@@@@@@@@
                     @@@@@@@@@@@@@@&&&&&&&&&&&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%&&&&&&&&&#&@&&@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Canopus is the second brightest star visible in the night sky, outshone only by Sirius. Emitting a brilliant" << std::endl << std::endl;
            std::cout << "         white light, Canopus is classified as a supergiant, dwarfing the Sun in size and luminosity. Despite its" << std::endl << std::endl;
            std::cout << "         considerable distance from Earth(approximately 310 light-years) it holds significant cultural importance in" << std::endl << std::endl;
            std::cout << "         ancient mythologies and navigation practices. Astronomers study Canopus to gain insights into the life cycle" << std::endl << std::endl;
            std::cout << "         of massive stars and utilize its brightness for calibrating instruments and measuring distances in the cosmos," << std::endl << std::endl;
            std::cout << "         making it a captivating celestial object for both scientific research and cultural fascination." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 6:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     %%%%%%&%%%%%%%&&%%%%%%%###%###%##(#%(((#%#(##((####%%%%%%%%%%&&&%%%%%%#%%%%%%%%%
                     %&%%%%%%%%%%%%%&%%%%%##(/*///**///,**,,,*,.,,.,/*/((##%%%%%%#%%%%%%%%%%%%%%%%&&&
                     %%%%%%%%%%%%%%%%%%##((//**,........,,,,,,,,,,....,,,//((###%%%%%%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%%%%##(/*,.  .. ,,,,,,,.,,,.,*,..,**...,,*//(##%%%%%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%%%%%##/**.  ,**,,,..,.. .,,**.,*..,.,...,,*/(##%%%%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%%%%##(/*,..,,,**.,,,,... . ..,*,.*,..,*,..,**((##%%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%%%%#(*,,..,***,....,.........,.....,,,.,,,..,*/(##%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%%##((*,..,,***,*.,. .    .  .. . ...,.,,,,...,*/(#%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%#/#(/*,.,/**,,,,.,...,....  ........,,.,.,. ,*/(##%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%%##(/,. .,,*,,..,,...,,.......... ....,***, ,,*(##%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%#(//**.. /*/,*,*,,....... ..............,*. ..*(##%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%##(/*,... ,*,,*..*,,..... ........,,.,,,,/, ...*/(#%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%##(//*.....**,****.,...........,.,,,*,,,,. .,,*/(#%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%%##////,......//*.,,,,...........,**/*,..,**/((###%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%%%#(((//*,     ,*,,,,.,..,.,,.,.*,**,.,****/(#%%%%%%%%%%%%%%%%%%%%
                     %%%%%%%%%%%%%%%%%%#(/*,.       .....,,*,,,,... .....,,*/##%%%%%%%%%%%%##%%%%%%%%
                     %%%%%%%%%%%%%%%%##((*,,... ..**,,..,,,,. .,,,,,**/(///(##%%%%%%%%%%%%%%%%%&&%&%%
                     %&%%%%%%%%%%%%%%%#(((///,,,*///****/****,///(##%###%%%%%%%#&%%%%%%%%%%%%%&%%&%&&
                     &&&&&&&&&&&&%%%%%%%####(///((#(((#/#/(/((#(#%%#%%%%%%&&&&&%%%%&&&&&&&&&&%%%&&&&&
                     &&&&&&&&&&&&&&&%%%%%%%%%#%%%%%%%%%%%%%%%%%%%%%%&&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&
)" << std::endl << std::endl;
            std::cout << "         Arcturus is renowned as the fourth brightest star visible in the night sky, characterized by its striking" << std::endl << std::endl;
            std::cout << "         orange glow. As an orange giant, Arcturus surpasses the Sun in size, boasting a diameter about 25 times larger." << std::endl << std::endl;
            std::cout << "         Despite its relative proximity ( approximately 36.7 light-years away), Arcturus has captivated civilizations" << std::endl << std::endl;
            std::cout << "         throughout history, featuring prominently in mythologies and serving as a navigational guide for travelers." << std::endl << std::endl;
            std::cout << "         Its significance extends beyond cultural lore, as astronomers utilize Arcturus to delve into the complexities" << std::endl << std::endl;
            std::cout << "         of stellar evolution, leveraging its brightness and proximity for scientific exploration and instrument" << std::endl << std::endl;
            std::cout << "         calibration." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 0:
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}



int main() {
    int choice;

    do {
        CLEAR_SCREEN();

        HANDLE hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << "           ______  ________   ______   _______    ______    ______   ________  ________  _______    ______  \n";
        std::cout << "          /      \\|        \\ /      \\ |       \\  /      \\  /      \\ |        \\|        \\|       \\  /      \\ \n";
        std::cout << "         |  $$$$$$\\ $$$$$$$$|  $$$$$$\\| $$$$$$$\\|  $$$$$$\\|  $$$$$$\\ \\$$$$$$$$| $$$$$$$$| $$$$$$$\\|  $$$$$$\\\n";

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "         | $$___\\$$  | $$   | $$__| $$| $$__| $$| $$ __\\$$| $$__| $$    /  $$ | $$__    | $$__| $$| $$___\\$$\n";
        std::cout << "          \\$$    \\   | $$   | $$    $$| $$    $$| $$|    \\| $$    $$   /  $$  | $$  \\   | $$    $$ \\$$    \\ \n";
        std::cout << "          _\\$$$$$$\\  | $$   | $$$$$$$$| $$$$$$$\\| $$ \\$$$$| $$$$$$$$  /  $$   | $$$$$   | $$$$$$$\\ _\\$$$$$$\\\n";

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "         |  \\__| $$  | $$   | $$  | $$| $$  | $$| $$__| $$| $$  | $$ /  $$___ | $$_____ | $$  | $$|  \\__| $$\n";
        std::cout << "          \\$$    $$  | $$   | $$  | $$| $$  | $$ \\$$    $$| $$  | $$|  $$    \\| $$     \\| $$  | $$ \\$$    $$\n";
        std::cout << "           \\$$$$$$    \\$$    \\$$   \\$$ \\$$   \\$$  \\$$$$$$  \\$$   \\$$ \\$$$$$$$$ \\$$$$$$$$ \\$$   \\$$  \\$$$$$$ \n";

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        SetConsoleTextAttribute(hConsole, 7);
        std::cout << "   Main Menu                                                                                                   " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "1" << "\033[95m" << "]" << "\033[0m" << " Convert Years                                 " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "2" << "\033[95m" << "]" << "\033[0m" << " Convert Weight                                   " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "3" << "\033[95m" << "]" << "\033[0m" << " Planets Information                                   " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "4" << "\033[95m" << "]" << "\033[0m" << " Moons Information                                    " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "5" << "\033[95m" << "]" << "\033[0m" << " Stars Information                                    " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "6" << "\033[95m" << "]" << "\033[0m" << " Back                                    " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "7" << "\033[95m" << "]" << "\033[0m" << " Back                                    " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "0" << "\033[95m" << "]" << "\033[0m" << " Back                                    " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        std::cout << std::endl;
        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "\033[35m" << "> " << "\033[0m" << "Choice?" << "\033[35m" << " (" << "\033[0m" << "0 - 7" << "\033[35m" << ") " << "\033[0m" << ":" << std::endl;
        std::cin >> choice;

        switch (choice) {
        case 1:
            convertYears();
            break;
        case 2:
            convertWeight();
            break;
        case 3:
            planetInfo();
            break;
        case 5:
            starsInfo();
            break;
        case 0:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}