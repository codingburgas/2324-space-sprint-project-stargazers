#include "ConvertWeight.h"

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
