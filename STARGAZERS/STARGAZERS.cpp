#include <iostream>
#include <iomanip>

#include "ConvertYears.h"
#include "ConvertWeight.h"
#include "PlanetInfo.h"
#include "MoonsInfo.h"
#include "StarsInfo.h"
#include "Credits.h"

#ifdef _WIN32
#include <windows.h>
#define CLEAR_SCREEN() system("cls")
#elif defined(__unix__) || defined(__APPLE__)
#include <cstdlib>
#define CLEAR_SCREEN() system("clear")
#else
#define CLEAR_SCREEN() std::cout << "\033[2J\033[1;1H"
#endif

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
        std::cout << "\033[95m" << "  [" << "\033[0m" << "6" << "\033[95m" << "]" << "\033[0m" << " Contstellar Information                               " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "7" << "\033[95m" << "]" << "\033[0m" << " Credits                                    " << std::endl;
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
        case 4:
            moonsInfo();
            break;
        case 5:
            starsInfo();
            break;
        case 6:
            // constellarInfo();
            break;
        case 7:
            Credits();
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
