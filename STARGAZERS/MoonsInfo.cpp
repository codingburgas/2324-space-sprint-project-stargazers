#include "MoonsInfo.h"

void moonsInfo() {
    int choice;


    do {
        CLEAR_SCREEN();
        HANDLE hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << R"(                                    .88b  d88.  .d88b.   .d88b.  d8b   db .d8888.)" << std::endl;
        std::cout << R"(                                    88'YbdP`88 .8P  Y8. .8P  Y8. 888o  88 88'  YP)" << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << R"(                                    88  88  88 88    88 88    88 88V8o 88 `8bo.)" << std::endl;
        std::cout << R"(                                    88  88  88 88    88 88    88 88 V8o88   `Y8b.)" << std::endl;

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << R"(                                    88  88  88 `8b  d8' `8b  d8' 88  V888 db   8D)" << std::endl;
        std::cout << R"(                                    YP  YP  YP  `Y88P'   `Y88P'  VP   V8P `8888Y')" << std::endl;



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
        std::cout << "\033[95m" << "  [" << "\033[0m" << "1" << "\033[95m" << "]" << "\033[0m" << " Earth's Moon                            " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "9" << "\033[95m" << "]" << "\033[0m" << " Osiris-19b " << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "2" << "\033[95m" << "]" << "\033[0m" << " Titan                                   " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "10" << "\033[95m" << "]" << "\033[0m" << " Kepler-1625b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "3" << "\033[95m" << "]" << "\033[0m" << " Enceladus                               " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "11" << "\033[95m" << "]" << "\033[0m" << " Proxima Centauri b" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "4" << "\033[95m" << "]" << "\033[0m" << " Europa                                  " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "12" << "\033[95m" << "]" << "\033[0m" << " Trappist-1d" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "5" << "\033[95m" << "]" << "\033[0m" << " Io                                      " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "0" << "\033[95m" << "]" << "\033[0m" << " Back" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "6" << "\033[95m" << "]" << "\033[0m" << " Triton                                  " << "\033[34m" << "|"<< std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "7" << "\033[95m" << "]" << "\033[0m" << " Ganymede                                " << "\033[34m" << "|"<< std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "8" << "\033[95m" << "]" << "\033[0m" << " Miranda                                 " << "\033[34m" << "|"<< std::endl;

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
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@&/////((///*,*&@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@%&%%%#((((##(#(((#%#((/(/@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@%&&&&&%%%%%%%&&&&%%%%%((((####(*#@@@@@@@@@@@@
                     @@@@@@@@@@@@@&&&&&%#%%%%%%%&&&&%%%%%###(((/(##(///@@@@@@@@@@
                     @@@@@@@@@@@%&&&&&&%%%%&%%&%%%%%#%%####%#%%%#%###(((/@@@@@@@@
                     @@@@@@@@@##&&&&&&&&%%&%%##%%%%%%%%###(#%%%%%%%###((((#@@@@@@
                     @@@@@@@@###&&&&&&%%##%%###((###%%####%%&%%%%%%&(//////(@@@@@
                     @@@@@@@###&&&&&&&&%%%%%###%%%#%%%%%%%%##%/%%%&%(#(((/((%@@@@
                     @@@@@@@##&#&&&&&&&&%%%%%###%%%%%%(####%(##&%&&%%%%(/#%%(@@@@
                     @@@@@@%####%%%&&&%&%##&%%##%#(#(##((//*(#%%%&&&&&%%/#%%#@@@@
                     @@@@@@&####%%%##(%%&&%&%%%#%&((((((((////(%%%%%%%%#%((##@@@@
                     @@@@@@@##/((##%&&&%##%%%%%%%#%(((((/////*/#%#(#(#%%%%(##@@@@
                     @@@@@@@#####((#%&&%%%#%&%%%%((/(////(//////##(/(%%%%%##&@@@@
                     @@@@@@@@##%#######%%##(%%%%#/((/(((((//(/*(%%#((%%%#/#%@@@@@
                     @@@@@@@@@###%%###(##(((///**,**////(((////#(#####%%###@@@@@@
                     @@@@@@@@@@&####%##((((////****/////*///(((((/((#(##%&@@@@@@@
                     @@@@@@@@@@@@%###%##(((//****/**//*//((((((((/*/(##%@@@@@@@@@
                     @@@@@@@@@@@@@@%#(#((((/*/(//*////(((/(((((((((#%&@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@#((((/////(///((((/((####%&@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@&#(/*///(((((####&@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Earth's Moon: Earth's Moon, also known as Luna, is Earth's only natural satellite." << std::endl << std::endl;
            std::cout << "         It has a rocky surface covered in impact craters, mountains, and plains called Maria." << std::endl << std::endl;
            std::cout << "         The Moon's gravitational pull affects the tides on Earth. It takes about 27.3 days" << std::endl << std::endl;
            std::cout << "         for the Moon to orbit around Earth, and it is tidally locked, meaning the same side" << std::endl << std::endl;
            std::cout << "         always faces Earth. Earth's Moon is located about 238,855 miles (384,400 kilometers)" << std::endl << std::endl;
            std::cout << "         away from Earth on average." << std::endl << std::endl;

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
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@(////*******/(@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@///////****,,,,,,,,**/&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@///(/////*,,,,,,,,,*****//((@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@((((/////***,***//********///(((@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@(#(##((/*******////////////(((((##&@@@@@@@@@@
                     @@@@@@@@@@@@@@#((#%##(//////(//(/((#%##///((######@@@@@@@@@@
                     @@@@@@@@@@@@@##%%#%%%%%#####/(#%#%#(%#(((((##%%%###@@@@@@@@@
                     @@@@@@@@@@@@@#(((#%%%%%#%%%%%%%%%(#%##(%#%%%%#%%%#%@@@@@@@@@
                     @@@@@@@@@@@@@####((%#(((#%%%((((#((##%%%%###%%%%%%%@@@@@@@@@
                     @@@@@@@@@@@@@&%###(((##%%%%#%%%%%#(#%%%%%%##%%%%%%&@@@@@@@@@
                     @@@@@@@@@@@@@@%%%####%%%%%%##((##(((#%#%%%#%%%%%%%@@@@@@@@@@
                     @@@@@@@@@@@@@@@@&%%%######(##(###########%%%%%&&&@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@&&%%%%%###############%%%%&&&&@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@&&&&&%%%%%%%%%%%%%&&&&&&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Titan (Saturn's Moon): Titan is the largest moon of Saturn and is shrouded in a thick orange" << std::endl << std::endl;
            std::cout << "         atmosphere. It is the only moon in the solar system to have a dense atmosphere, similar to" << std::endl << std::endl;
            std::cout << "         Earth's. Scientists believe that beneath its hazy exterior, Titan may have lakes and rivers of" << std::endl << std::endl;
            std::cout << "         iquid methane and ethane. Titan (Saturn's Moon): Titan is located in the Saturn system, which is" << std::endl << std::endl;
            std::cout << "         approximately 746 million miles (1.2 billion kilometers) away from Earth on average." << std::endl << std::endl;


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
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@#,,,,,,,,,,*,,,,,***&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@,,,,,,,,,,,,,,,,*,,****,,,**,@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@#,,,,,,,,,,*,**,****,,***,**,,***,,,&@@@@@@@@@@
                     @@@@@@@@@@@,,,,,,,,,*,,,****,,,,,,*/*,,,,,*,*****,*/@@@@@@@@
                     @@@@@@@@@,,,,,,,,,********,,,,,,,,,,,,**////***,,,*,*/@@@@@@
                     @@@@@@@&,,,,,,,,*,*,,*,,,**,**,,,,,,*/*,***//*,,,,,,,,,@@@@@
                     @@@@@@#,,,,,,,*,,,,,,,,,,,,,***************//*,,,,,,,,/,@@@@
                     @@@@@@,,,,,,,*,,*,,,,,,,,,************/////***,,,,,,,.,,,@@@
                     @@@@@,,.,,,,,,,,,,,,,,,,******************//**,,,,,,,,,,,,@@
                     @@@@@.,,,*,,**,,,,**,,*,,,********************,,,,,,,,,,,,@@
                     @@@@&,*.*,,,**,,,,,,,,**********************/***,,,,,,,,,,@@
                     @@@@@,,.,,,,,,,,,,,,,,*,,,,***************,*****,,,,......@@
                     @@@@@,.,,,,,,,,,,,,,**,*****,*,***,**********,**,,.......,@@
                     @@@@@,,,,,,,,,,,,,,,*,,,,,,*,*,,,,,*,,,,***.,,,,........@@@@
                     @@@@@@%,,,,,..,,,,,,,,*,,,*,,,,*,,,,,,,,,,,***,.........@@@@
                     @@@@@@@@.,.......,,,,,,*,*,*****,,,,,,,,,,,,,,,........@@@@@
                     @@@@@@@@@,......,,,,,,***/,,,,,,,,,,,,,,,,,,,,.......%@@@@@@
                     @@@@@@@@@@@,,.,,*,,,,*,*,,,,,,,,,,,,,,,,,.,,.......(@@@@@@@@
                     @@@@@@@@@@@@@&.,,......,.,,,,,,,,,,,,,,.........,@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@..,,,,,,,,,,,,,,,,,,........*@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@*,,,,,,,,,,,,...../@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Enceladus (Saturn's Moon): Enceladus is a small moon of Saturn that has captured the interest of scientists" << std::endl << std::endl;
            std::cout << "         These geysers shoot out plumes of water vapor and ice particles from beneath its icy surface. due to" << std::endl << std::endl;
            std::cout << "         its geysers. Enceladus is considered a prime candidate for the potential existence of life beyond Earth." << std::endl << std::endl;
            std::cout << "         Enceladus (Saturn's Moon): Enceladus is located in the Saturn system, which is approximately 746 million" << std::endl << std::endl;
            std::cout << "         miles (1.2 billion kilometers) away from Earth on average." << std::endl << std::endl;

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
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@&###(((#%@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@#((#(/(((//(///(((#&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@#/**/////(((//*//*(///(##@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@&/*((((/((((*/((((##%####(#((@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@#((/((((((/(((#(#((%(((#%#((#((&@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@(#((((/(/(((((((((///%(###%%##%#@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@#%#(///(///(/*/(/(//(*/(#(#%##(#/%@@@@@@@@@@@
                     @@@@@@@@@@@@@@@#%(((((((//***((/(//(**((####((/#&@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@///(((((/**////(////**//((####((@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@&/////*///////***/*. .,///((/((@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@(****,**/******,,*,,***/**/(@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@////******/******/**/*/(@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@/(//*//*//////////@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@&##(#&@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Europa (Jupiter's Moon): Europa, one of Jupiter's largest moons, has a smooth and icy surface with" << std::endl << std::endl;
            std::cout << "         intriguing cracks and ridges. Scientists believe that beneath its icy crust lies a vast subsurface" << std::endl << std::endl;
            std::cout << "         ocean, making it another moon with the potential for hosting extraterrestrial life. Europa" << std::endl << std::endl;
            std::cout << "         (Jupiter's Moon): Europa is located in the Jupiter system, which is approximately 484 million" << std::endl << std::endl;
            std::cout << "         miles (778 million kilometers) away from Earth on average." << std::endl << std::endl;

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
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@%#((###((//((##(%@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@(//###((#****//////##/,**/(@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@#/((#(/(///////**/(////(*,*(,//*/(&@@@@@@@@@@@
                     @@@@@@@@@@@@((/(//****////***/***/***//**,**//*///(@@@@@@@@@
                     @@@@@@@@(#/,,*/////**/*,***/*****/*****.,,* ,**(/#*@@@@@@@@@
                     @@@@@@@@##/.*//**//****/*,,******,..,*,./,.*,,*,*,,***%@@@@@
                     @@@@@@@//,.,*///**,,,**,*/, ,*,,,,.,...,(* ..,,,*,/**,,/@@@@
                     @@@@@@/*,.,,,.*,**.,,*,,,,,.,,,,,,.,./... ...,,,,*(**,,.#@@@
                     @@@@@@*,,,,,..,.,,.,,,,,,,,,,........   ..  ....,,,,,,,.,@@@
                     @@@@@**,,,,*,**.,,,*,*,,....  ..,..   .  .  ..  ,..,,,.,,&@@
                     @@@@@/*,,,*,*,.,,,,/,.*/,....  .  .  , . ...........,,,,,(@@
                     @@@@@(***,*/,,,,,,,.,,...,....    *,.,,*.,.,.,../...,,.,*&@@
                     @@@@@@****,,**,*,,,,,,,,,,,,...... *, ...,.. ...,,,,*,,,(@@@
                     @@@@@@(,******//*/,***,*,**,*,,,,...,.,..,,,,.,,. ,*,,,,&@@@
                     @@@@@@@#**////////**,/*,,,,,,.,,****,,,,,,,,,,,**,,**,,#@@@@
                     @@@@@@@@@(////*/////////***,,,,,,***,,,,,...*//***/*..@@@@@@
                     @@@@@@@@@@#((////////////#**,,,/**#/**,*/*///(((/(*//@@@@@@@
                     @@@@@@@@@@@@#((((((%(///(/***/********/****////(/*/@@@@@@@@@
                     @@@@@@@@@@@@@@@(((#(((#(#(/*/#/((//*////***/(##(@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@%##%%%%#(#(((((####((//(#%%@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@#%(((##%%%%((#%@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Io (Jupiter's Moon): Io, one of Jupiter's moons, is known for its vibrant colors and active volcanic activity." << std::endl << std::endl;
            std::cout << "         Its surface is covered in sulfur compounds, giving it a yellow, orange, and red appearance. Io is the most" << std::endl << std::endl;
            std::cout << "         volcanically active body in the solar system, with hundreds of active volcanoes. The intense gravitational" << std::endl << std::endl;
            std::cout << "         forces from Jupiter and its other moons cause tidal heating, fueling Io's volcanic activity. Io is located" << std::endl << std::endl;
            std::cout << "         in the Jupiter system, approximately 484 million miles (778 million kilometers) away from Earth on average." << std::endl << std::endl;


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
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@(,,,,,,,,,,,,,,,,,,,&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@&*,,,,,,,,,,,,,,,,,,,....,,...@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@#*,,,,,,,,,,,,,,,,,,,,,...,,......,,@@@@@@@@@@@
                     @@@@@@@@@@@*,,,,,,,,,,,,..,,,,,,,,,,,,,,,,..,,...,.*@@@@@@@@
                     @@@@@@@@@.,,,,,,,,,,,,,,,,,,*,,,,,,,,,,,,,,,,,......./@@@@@@
                     @@@@@@@&,,,,,,,,,*,,***,***/*,,,,.,,,,,.,,,,,,........,@@@@@
                     @@@@@@#,,,,**,,,,,,,*,,***,,,**,******,**,*,,*,,,,....,,@@@@
                     @@@@@@*,,,,,**,,,,,*,*,,,,*,****,***,****,,,,**,,,*,...,,@@@
                     @@@@@,,,,,,,****,,,,,,,,*,,*,*,,,*,*****,,,,,,,,,**,,,...,@@
                     @@@@@*,,,,,,,****.,.,*,*******,*********,,,,,,,,,,,,.,,..,@@
                     @@@@&**,..,,,,,**,,,,**********,,,,,*,,,,**,,,,,.,,.,.,..,@@
                     @@@@@*,,,.,,,../*,,,*,************,*,,,,,,,,,,,,,,..,.,..,@@
                     @@@@@*,,.,,*,,,*,,,,***,*,,,,,*,,*,,*.,,,,,,,.,,,,,,...,.,@@
                     @@@@@@,,,,,,*,,,,,****,,,,,,,,.,,.,,.,,,,,,,,,,,,,,,,,.,,@@@
                     @@@@@@&,,,,,.., .,//(*.,,....,.,,...,,.,,,,,,.,,,,,,,,,,@@@@
                     @@@@@@@@,/,,,**,,. *. . ,......,..,,...,.,..,.,,,,,,,,,@@@@@
                     @@@@@@@@@*,.,,*,*,.. ....... .,.........,........,,,*&@@@@@@
                     @@@@@@@@@@@***.,,,/,.,,,, ..,..,,.,..,,....,.,..,,*%@@@@@@@@
                     @@@@@@@@@@@@@@*,.*,**,.....,,,,,. .,. ..*.,..,,**@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@,,,...,,.,,..,........ .,,,.(@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@/,*....,,.,,,,,,,*#@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Triton: Triton is the largest moon of Neptune and has a retrograde orbit." << std::endl << std::endl;
            std::cout << "         It is believed to have been captured by Neptune's gravity, suggesting it was not originally " << std::endl << std::endl;
            std::cout << "         formed around the planet. Triton has an icy surface, nitrogen frost, and geysers erupting nitrogen" << std::endl << std::endl;
            std::cout << "         gas and dust. Scientists believe these geysers are a result of tidal heating caused by Triton's" << std::endl << std::endl;
            std::cout << "         eccentric orbit. It has surface features such as ice volcanoes, cryovolcanoes, and plains covered in" << std::endl << std::endl;
            std::cout << "         nitrogen ice. Triton is located approximately 2.7 billion miles (4.4 billion kilometers) away from Earth." << std::endl << std::endl;
            std::cout << "         Its unique characteristics make it an intriguing subject for studying the formation and evolution of moons." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 7:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@%*////**/////////***&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@&*////,,,,,,,****/****////////@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@%//(*//,****,,((((*./(##&/(#%%%%/,**@@@@@@@@@@@
                     @@@@@@@@@@@##(#(.*****(#%%((*(##(%#%##&((**/(##(/#//@@@@@@@@
                     @@@@@@@@@%%%#*/(//#(%%&%&(%%#(/##(/#%%(/*(/((##(/((((#@@@@@@
                     @@@@@@@@%%##(%(/*//(%&#(/((((((#(/(//,/**/((((#((####((@@@@@
                     @@@@@@&%##((#(***/%%(%%%%#%%%#(#/*****/,,*//*((/((((((((@@@@
                     @@@@@@%/#(##(/////#%%%%%%%%(%%%%#/***,,..,,//((((((((,(((@@@
                     @@@@@(#((*(((((/(//(/((#((/////*//*/****..*////(((###(#(((@@
                     @@@@@(#(((((((((((((((%(//(*(((****//*/***//(#((((####(#((@@
                     @@@@@((((#((#((#(/((((///((((////*****/*(#((*#(((*((#((((#@@
                     @@@@@(((##((((#(((((((/////////(////////#(((#/(((((/(#((((@@
                     @@@@@((((##/####%#(((((//////#///(///#(#(/////##(((#((##(#@@
                     @@@@@@#(((((((##((((((/(((%%((//(((/((///#(/((((##(##%#(#@@@
                     @@@@@@@((#((((((#((((((((((//((/*/((((//((((#(((((((((##@@@@
                     @@@@@@@@/*/(*((((((((///(/*////(/////#((/((((/((((#####@@@@@
                     @@@@@@@@@//*////*/(/,,..*#///*****/*(#((%(#(//(((##%%%@@@@@@
                     @@@@@@@@@@@(/////*,//,.,,,*,*#(((/(/#((*(/*///#%##/#@@@@@@@@
                     @@@@@@@@@@@@@@/*(.*//////**#####((&&#/##(//%//(#/@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@/////,/**/***,**/,*%,**///(/(@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@#///(*///((//(////%@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Ganymede: Ganymede is the largest moon of Jupiter and has a retrograde orbit." << std::endl << std::endl;
            std::cout << "         It is believed to have been captured by Jupiter's gravity, suggesting it was not originally formed" << std::endl << std::endl;
            std::cout << "         around the planet. Ganymede has an icy surface, nitrogen frost, and geysers erupting nitrogen gas" << std::endl << std::endl;
            std::cout << "         and dust. Scientists believe these geysers are a result of tidal heating caused by Ganymede's" << std::endl << std::endl;
            std::cout << "         eccentric orbit. It has surface features such as ice volcanoes, cryovolcanoes, and plains covered" << std::endl << std::endl;
            std::cout << "         in nitrogen ice. Ganymede is located approximately 2.7 billion miles (4.4 billion kilometers) away" << std::endl << std::endl;
            std::cout << "         from Earth. Its unique characteristics make it an intriguing subject for studying the formation" << std::endl << std::endl;
            std::cout << "         and evolution of moons." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 8:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@%@######(%##&@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@#@#(((#(#(##(((/(#((###&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@#(#((#(#//##/////(#//((&//(/(#@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@&#(//####*###/(/(/#(((#(##%,(/(&#&/@@@@@@@@@@@
                     @@@@@@@@@@@@@&(((&##(/(///#((//((#((#%#&*@%((/(##,@@@@@@@@@@
                     @@@@@@@@@@@@*(/((((((((//#((#/###(,###/(./(#(#(,@@.(@@@@@@@@
                     @@@@@@@@@@@#/(((((((((#((*((((###(#((**(%##((#*#(#@&@@@@@@@@
                     @@@@@@@@@@*%*(#/((#//(##(((##((/##//##((##((#(*(&#,/*(@@@@@@
                     @@@@@@@@@@&#((.((((##(((((((((,#%#(/((((//(#((((///#(%@@@@@@
                     @@@@@@@@@@(#(*(#((#(((##((((((((%@(/(#%#((//((%(((#/(%@@@@@@
                     @@@@@@@@@@@#(%(#/###(/(((((((#(((//#(((((/((/(/#((@/(@@@@@@@
                     @@@@@@@@@@@(((/(#(#((#((//((((//*((#((*/*(###/##&/(/@@@@@@@@
                     @@@@@@@@@@@@#(((((#(/#((((/(&(/((##%@%%#//#(/((/((##@@@@@@@@
                     @@@@@@@@@@@@@@(#%/#(((///##(#%##((((/////(###(#(((@@@@@@@@@@
                     @@@@@@@@@@@@@@@@#%///((/#((*(/((//#(%%#**.((/((#@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@#(,(((#(#(##(####@###((#&//#@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@(,(##((##(#(//,.(###@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Miranda: Miranda is a moon of Uranus and has a retrograde orbit." << std::endl << std::endl;
            std::cout << "         It is believed to have been captured by Uranus' gravity, suggesting it was not originally formed" << std::endl << std::endl;
            std::cout << "         around the planet. Miranda has a varied and bizarre landscape, including cratered plains, winding valleys," << std::endl << std::endl;
            std::cout << "         parallel grooves, fault scarps, and terraced layers. It has experienced geological activity, likely caused" << std::endl << std::endl;
            std::cout << "         by tidal heating when it was in orbital resonance with its neighbor Umbriel. The moon's appearance suggests" << std::endl << std::endl;
            std::cout << "         that it may have been shattered multiple times during its evolution, with portions of the core exposed" << std::endl << std::endl;
            std::cout << "         and the surface buried. Miranda is located in the Uranian system and is one of the five major moons" << std::endl << std::endl;
            std::cout << "         of Uranus. Its unique characteristics and geological history make it a fascinating object of study." << std::endl << std::endl;
            std::cout << "         Miranda is approximately 238,855 miles (384,400 kilometers) away from Earth on average." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 9:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     &&&&&&&&&&&&&&&&@&&@@@@@@@@@@@@@@@@@@@@@@@@@&&@&&&&&&&&&&&&&
                     &&&&&&&&&&&@&&&&&&&@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&
                     &&&&&&&&&&@@@&&@@@@&&&&&@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&
                     &&&&&&&&&@@@@@@&@@@@&@@@@@@&&&&((***,*/&&&&&&&&&&&&&&&&&&&&&
                     &&&&&&&&&&@@@@&&&&&@@@@@@@(,///####(((//(/*#&&&&%%%%%&&&&&&&
                     &&&&&&&&&&&&&&&&&&&&&&&&#**/(#####%%####(/((/(&&&&&&&&&&&&&&
                     %&&&&&&&&&&&&&&&&&&&&&&###((((######%&%%###(/**&&@%%&&&&&&&&
                     &&&&&&&&&&&&&&&&&&&&&&&&&%%%#(##%%%%%#%&&%%##(/(&&&&&&&&&&&&
                     &&&&&&&&&&&&&&&&&&&&&@&@@@@&&&%####%%%%%###%%%#(@@@@@@@@@@@@
                     &&&&&&&&&&&&&&&&@@@@@@@@@@@@@@&&&%######%%##((/(@@@@@@@@@@&&
                     &&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@&&%%##(((//**&&&@@@&@@@&@@
                     @@@@@@&&&&&&&&&&@@@@@@&&@@@@@@@@@@@@@&%%%#((/%@@@@@@@@@@@@@@
                     @@@@@@@@&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@&&%%@@@@@@@@@@@@@@@@@
                     @@@@@@@@@&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@&&&&&&&&&@@@&&&&@@&&&&&&@@@@@@@@@@@@@@@@@@@@@@@&&
)" << std::endl << std::endl;

            std::cout << "         Osiris-19b: Osiris-19b is an exomoon candidate detected around the exoplanet HD 209458 b, also known as" << std::endl << std::endl;
            std::cout << "         Osiris. It is considered a terrestrial-mass exomoon, with a mass ranging from 0.76 lunar masses to 0.34" << std::endl << std::endl;
            std::cout << "         Earth masses. The mass depends on the planet's mass and the moon's orbital period." << std::endl << std::endl;
            std::cout << "         Osiris-19b is part of the HD 209458 system, which is located approximately 150 light-years away from" << std::endl << std::endl;
            std::cout << "         Earth. This exomoon candidate Osiris-19b was detected based on limited observations." << std::endl << std::endl;
            std::cout << "         constellation Pegasus. Further studies are needed to confirm its existence." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 10:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     &&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@
                     &&&@@&&@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@&@@@@@%@@@@@@@@@@@@@@@@
                     @@@@@@@@@@&&@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@&@@@@@@@@@@@@@@@@@@@@@@%@@@@
                     @@@@@@@@@@@@@@&&&@@@&@@@@@@@@@&%%%%%&&&@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@%@&@@@@@@@@@@@@@%((##%#%%&&&&&@@@@@@@@@@@@@@@&@@
                     @@@@@@@@@@@@@&@@@@@@@@@@@@&(/((###%%%%%&%&&&@@@@@@@@@@@@&&&&
                     @@@@@@@@@@@@@@@@@@@@@@@@@%(((((((/##%%%%&&&@@@@@@@@@@@@&&&&&
                     @@@@@@@@@@@@@@@@@@@@@@@@@///(/(,(((/#%%%%%&&@@@@@@@&&&&&&@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@&**/(//,/#/*((%%%&%&&@@@@@@&@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@(//*/*,/(##(%##&#%&&@@@@@@&&@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@***,//,(##%%%%%%&&&@@@@@&&&&&&@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@%/((((((###(#%#%&&@@@@@@@&&&&&@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#/(/(##%#%%&&&&@@@@@@@@&&&&@@@
                     @@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@&&&&&&@@@@@@@@@@&@&@@@&@&
                     @@@@@@@@@@@@@@@@@@@@&&@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@&@
                     @@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@
                     @@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;

            std::cout << "         Kepler-1625b: Kepler-1625b is an exomoon candidate detected around the exoplanet Kepler-1625b." << std::endl << std::endl;
            std::cout << "         It is located approximately 8,000 light-years away in the constellation Cygnus." << std::endl << std::endl;
            std::cout << "         Kepler-1625b is considered a gas giant exoplanet, with a mass estimated to be around 1.5 times that of Jupiter." << std::endl << std::endl;
            std::cout << "         The exomoon candidate Kepler-1625b was detected using the transit method, where astronomers observed the dip" << std::endl << std::endl;
            std::cout << "         in brightness as the exomoon passed in front of its host star. Further observations and follow-up studies are" << std::endl << std::endl;
            std::cout << "         needed to confirm the existence of Kepler-1625b's exomoon." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 11:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     &@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     &&@@@@&@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@&@@@@@@@@@@@@&&&@@@@@@@@@&&&&&@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@&&@&&@@@@@@@@@@@@@&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@&&&@@@&@@@@@@@@@@%%%%%&&&@@@@@@@@@@@@@@@@@@%@@@
                     @@@@@@@@@@@&@@@@@@@@@@@@@@@%(####%%%&&&&&@@@@@@@@@@&@@&@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@%(//(####%%%%&%&&@@@@@@@@@@@@&&&&&&
                     @@@@@@@@@@@@@@@@@@@@@@@@%//(/((/(#%%%%%%&%@@@@@@@@@@@@&&&&&&
                     @@@@@@@@@@@@@@@@@@@@@@@@*//(/(*((#(#%%%%%&&@@@@@@@&&&&&@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@&**/(*/*/#/*(#%%%&&&&&@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@//*///*/###(%%#&&&&&@@@@@@&%&@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@///,//*(##%%%%%%&&&@@@@@&&&&%&@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@%/(((((/###(%%#%&&@@@@@@@&&&&&@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@#/(/(###%%%%&&&@@@@@@@@@&&&@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&@@@@@@@@@@@@&@@@@@@@
                     @@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@
                     @@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;

            std::cout << "         Proxima Centauri b: Proxima Centauri b is an exomoon candidate detected around the exoplanet Proxima Centauri b." << std::endl << std::endl;
            std::cout << "         It is located approximately 4.24 light-years away in the Alpha Centauri star system, making it the closest known" << std::endl << std::endl;
            std::cout << "         exoplanet to Earth. Proxima Centauri b is considered a rocky exoplanet with a mass similar to Earth." << std::endl << std::endl;
            std::cout << "         The exomoon candidate Proxima Centauri b was detected using the radial velocity method, where astronomers measure" << std::endl << std::endl;
            std::cout << "         the wobble of the host star caused by the gravitational pull of the exomoon. Further observations and follow-up" << std::endl << std::endl;
            std::cout << "         studies are needed to confirm the existence of Proxima Centauri b's exomoon." << std::endl << std::endl;


            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 12:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@&@@@@@@@@@@@@@@@@@&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@&@@@@@@@@@@@@@@@##((((###%%&@&&&&@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@(/*****/(##%%%&&&&&&&@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@(*,,,,,***//(#%%%&&&&&&%&@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@&,,.,,,,,,**///(#%%&&&&&%&&@@@@@@@@@@@@@@@@
                     @@@@@@@@ /%@@@@@@/*,...,,,,**//((#%%&&&&&&&%@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@&**,......,***/((#%&&&&&&%&@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@/*,....,,**/(##%&&&&&&&&&@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@////****//((#&&&&&&&&@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@((////((##%&&&&&@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@&&%&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                     @&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;

            std::cout << "         Trappist-1d: Trappist-1d is an exomoon candidate detected around the exoplanet Trappist-1d." << std::endl << std::endl;
            std::cout << "         It is located approximately 39 light-years away in the constellation Aquarius." << std::endl << std::endl;
            std::cout << "         Trappist-1d is considered a rocky exoplanet with a mass estimated to be similar to that of Earth." << std::endl << std::endl;
            std::cout << "         The exomoon candidate Trappist-1d was detected using the transit method, where astronomers observed" << std::endl << std::endl;
            std::cout << "         the dip in brightness as the exomoon passed in front of its host star. Further observations and follow-up" << std::endl << std::endl;
            std::cout << "         studies are needed to confirm the existence of Trappist-1d's exomoon." << std::endl << std::endl;


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