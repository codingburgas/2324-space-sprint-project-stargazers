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
    double earthYears, lightYears;
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
        std::cout << "   Options ->                                                                                                           " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "1" << "\033[95m" << "]" << "\033[0m" << " Earth to Light years                      " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "2" << "\033[95m" << "]" << "\033[0m" << " Light to Earth years                      " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "0" << "\033[95m" << "]" << "\033[0m" << " Back                                      " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        std::cout << std::endl;
        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "Enter your choice (0-2): ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter Earth years: ";
            std::cin >> earthYears;
            lightYears = earthYears * 0.3066;
            SetConsoleTextAttribute(hConsole, 7);
            std::cout << "Converted to Light years: " << lightYears << std::endl;
            SetConsoleTextAttribute(hConsole, 13);
            std::cout << "Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 2:
            std::cout << "Enter Light years: ";
            std::cin >> lightYears;
            earthYears = lightYears / 0.3066;
            SetConsoleTextAttribute(hConsole, 7);
            std::cout << "Converted to Earth years: " << earthYears << std::endl;
            SetConsoleTextAttribute(hConsole, 13);
            std::cout << "Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 0:
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            std::cout << "Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
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
        std::cout << "Enter your choice (0-16): ";
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
            std::cout << "| " << "\033[0m" << "Enter weight in kilograms :" << "\033[95m" << "             | " << std::endl;
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
            std::cin >> weight;
            newWeight = weight * weights[choice - 1];
            std::cout << "Your weight on the selected planet: " << newWeight << " kg" << std::endl;
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "|  0. Back                                |" << std::endl;
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
        std::cout << "Enter your choice (0-16): ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            showPlanetInfo("Mercury", "Mercury is the smallest planet in our solar system.");
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


int main() {
    int choice;

    do {
        CLEAR_SCREEN();
        std::cout << "Main Menu:\n";
        std::cout << "1. Convert Years\n";
        std::cout << "2. Convert Weight\n";
        std::cout << "3. Planets Information\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice (0-3): ";
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
        case 0:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}