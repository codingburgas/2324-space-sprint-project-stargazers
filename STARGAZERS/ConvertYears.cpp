#include "ConvertYears.h"

void convertYears() {
    int choice;
    double earthYears;
    const double conversionFactors[] = {
        0.3066,     // Earth to Light years
        1.0,        // Light years to Earth
        5.879,      // Miles to Light Years
        9.461,      // Kilometers to Light Years
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
        std::cout << "\033[95m" << "  [" << "\033[0m" << "1" << "\033[95m" << "]" << "\033[0m" << " Earth to Light years       " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "5" << "\033[95m" << "]" << "\033[0m" << " Mercury                          " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "13" << "\033[95m" << "]" << "\033[0m" << " Kepler-186f      " << "\033[95m" << "          [" << "\033[0m" << "0" << "\033[95m" << "]" << "\033[0m" << " Back" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "2" << "\033[95m" << "]" << "\033[0m" << " Light to Earth years       " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "6" << "\033[95m" << "]" << "\033[0m" << " Venus                            " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "14" << "\033[95m" << "]" << "\033[0m" << " Proxima Centauri b               " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "3" << "\033[95m" << "]" << "\033[0m" << " Light Years to Miles       " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "7" << "\033[95m" << "]" << "\033[0m" << " Earth                            " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "15" << "\033[95m" << "]" << "\033[0m" << " TRAPPIST-1e          " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "4" << "\033[95m" << "]" << "\033[0m" << " Light Years to Kilometers  " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "8" << "\033[95m" << "]" << "\033[0m" << " Mars                            " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "16" << "\033[95m" << "]" << "\033[0m" << " HD 219134 b          " << std::endl;
        std::cout << "                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "9" << "\033[95m" << "]" << "\033[0m" << " Jupiter                         " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "17" << "\033[95m" << "]" << "\033[0m" << " WASP - 121b            " << std::endl;
        std::cout << "                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "10" << "\033[95m" << "]" << "\033[0m" << " Saturn                         " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "18" << "\033[95m" << "]" << "\033[0m" << " K2 - 18b               " << std::endl;
        std::cout << "                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "11" << "\033[95m" << "]" << "\033[0m" << " Uranus                         " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "19" << "\033[95m" << "]" << "\033[0m" << " TRAPPIST - 1f          " << std::endl;
        std::cout << "                                 " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "12" << "\033[95m" << "]" << "\033[0m" << " Neptune                        " << "\033[34m" << " | " << "\033[95m" << " [" << "\033[0m" << "20" << "\033[95m" << "]" << "\033[0m" << " Gliese 581g          " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;


        std::cout << std::endl;
        SetConsoleTextAttribute(hConsole, 13);
        std::cout << "\033[35m" << "> " << "\033[0m" << "Choice?" << "\033[35m" << " (" << "\033[0m" << "0 - 20" << "\033[35m" << ") " << "\033[0m" << ":" << std::endl;
        std::cin >> choice;

        switch (choice) {
        case 1:
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "| " << "\033[0m" << "Enter Earth Years:  " << "\033[34m" << "                    | " << std::endl;
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
        case 2:
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "| " << "\033[0m" << "Enter Light Years:  " << "\033[34m" << "                    | " << std::endl;
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
        case 3:
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "| " << "\033[0m" << "Enter Light Years:  " << "\033[34m" << "                    | " << std::endl;
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
        case 4:
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "| " << "\033[0m" << "Enter Light Years:     " << "\033[34m" << "                 | " << std::endl;
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
        case 19:
        case 20:
            SetConsoleTextAttribute(hConsole, 9);
            std::cout << "+-----------------------------------------+" << std::endl;
            std::cout << "| " << "\033[0m" << "Enter Earth Years:  " << "\033[34m" << "                    | " << std::endl;
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