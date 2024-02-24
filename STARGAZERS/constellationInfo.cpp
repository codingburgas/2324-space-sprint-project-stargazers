#include "ConstellationInfo.h"

void constellationInfo() {
    int choice;

    do {
        CLEAR_SCREEN();
        HANDLE hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 11);
        std::cout << "  .o88b.  .d88b.  d8b   db .d8888. d888888b d88888b db      db       .d8b.  d888888b d888888b  .d88b.  d8b   db .d8888. \n";
        std::cout << " d8P  Y8 .8P  Y8. 888o  88 88'  YP `~~88~~' 88'     88      88      d8' `8b `~~88~~'   `88'   .8P  Y8. 888o  88 88'  YP \n";

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << " 8P      88    88 88V8o 88 `8bo.      88    88ooooo 88      88      88ooo88    88       88    88    88 88V8o 88 `8bo.   \n";
        std::cout << " 8b      88    88 88 V8o88   `Y8b.    88    88~~~~~ 88      88      88~~~88    88       88    88    88 88 V8o88   `Y8b. \n";

        SetConsoleTextAttribute(hConsole, 13);
        std::cout << " Y8b  d8 `8b  d8' 88  V888 db   8D    88    88.     88booo. 88booo. 88   88    88      .88.   `8b  d8' 88  V888 db   8D \n";
        std::cout << "  `Y88P'  `Y88P'  VP   V8P `8888Y'    YP    Y88888P Y88888P Y88888P YP   YP    YP    Y888888P  `Y88P'  VP   V8P `8888Y' \n";

        std::cout << std::endl;
        std::cout << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;

        SetConsoleTextAttribute(hConsole, 7);
        std::cout << "   Select A Constellation ->                                                                                      " << std::endl;

        SetConsoleTextAttribute(hConsole, 9);
        std::cout << "+----------------------------------------------------------------------------------------------------------------------+" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "1" << "\033[95m" << "]" << "\033[0m" << " Orion                                   " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "9" << "\033[95m" << "]" << "\033[0m" << " Canis Major              " << "\033[95m" << "  [" << "\033[0m" << "0" << "\033[95m" << "]" << "\033[0m" << " Back" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "2" << "\033[95m" << "]" << "\033[0m" << " Ursa Major (The Big Dipper)             " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "10" << "\033[95m" << "]" << "\033[0m" << " Cygnus" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "3" << "\033[95m" << "]" << "\033[0m" << " Ursa Minor (The Little Dipper)          " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "11" << "\033[95m" << "]" << "\033[0m" << " Pegasus" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "4" << "\033[95m" << "]" << "\033[0m" << " Cassiopeia                              " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "12" << "\033[95m" << "]" << "\033[0m" << " Draco" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "5" << "\033[95m" << "]" << "\033[0m" << " Scorpius                                " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "13" << "\033[95m" << "]" << "\033[0m" << " Aquarius" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "6" << "\033[95m" << "]" << "\033[0m" << " Leo                                     " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "14" << "\033[95m" << "]" << "\033[0m" << " Sagittarius" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "7" << "\033[95m" << "]" << "\033[0m" << " Gemini                                  " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "15" << "\033[95m" << "]" << "\033[0m" << " Lyra" << std::endl;
        std::cout << "\033[95m" << "  [" << "\033[0m" << "8" << "\033[95m" << "]" << "\033[0m" << " Taurus                                  " << "\033[34m" << "|" << "\033[95m" << "  [" << "\033[0m" << "16" << "\033[95m" << "]" << "\033[0m" << " Andromeda" << std::endl;

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
                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@
                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                             @@@@@@@@@@@@@@@@@.  # .  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@
                             &&&&%&&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&
                             &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&/&.&.&&.&&&&&&&&&&&&&&&&&&&&&
                             &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                             &&&&&&&&(#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                             &&&&&&&&&&&&&&&&&&&&% &&&&&&&&&&&&&&#%& ##  &, .&&&&&&&&&&&&
                             &&&&&&&&&&&&&&&&&&&&&&&%&&&&%&&&&&&&&#&&&#&&&&&&&&&&&&&&&&&&
                             &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&&&&&&&&&& &/%/,&&&
                             %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%.%%%%%%%%%%%%%%%%%
                             %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%,#%%#%(..%%.%/(/(%%%
                             %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                             %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%%%%%%%%%%%%%%%%
                             %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
)" << std::endl << std::endl;
            std::cout << "                Orion: Orion is one of the most recognizable constellations in the night sky." << std::endl << std::endl;
            std::cout << "                It is named after Orion, a hunter in Greek mythology, and is depicted as a" << std::endl << std::endl;
            std::cout << "                warrior holding a club and shield, with a belt of three stars." << std::endl << std::endl;
            std::cout << "                The constellation is home to several bright stars and interesting celestial" << std::endl << std::endl;
            std::cout << "                objects, including the Orion Nebula, one of the closest regions of massive" << std::endl << std::endl;
            std::cout << "                star formation to Earth." << std::endl << std::endl;
            std::cout << "                Orion is located on the celestial equator and can be seen from both hemispheres." << std::endl << std::endl;

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
                            @@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@&@@&%##%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@&@&@@&@#@@(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@(&@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@
                            &&@@@@@@@@@@@@@@@@@@@#@(#@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            &@@@@@@@@@@@@@@@@@@@@(@@@@@@@@@@@%(&@@@@@@@@@@@@@@@@@@@@@@@@
                            &&@@@&&@@@@@@@@@@@@@@&@@@@@@@@@@@#@@@@@@@@&&@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@&@@@@@&(@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@
                            &&&&&&@&&&&@@@@@@&&@@@@@@&%###(@&@@@@@@@@@@@@@@@@@@@@@@&&@@@
                            &&&&&&&&&&&&&@@&&(&&@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@
                            &&&&&&&&&&&@&&&@@@&&@@@@@@@@@@@@@@@@@@@&&&@@@@@@@@@@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&&&&&&&@@&&@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&&&&&%@&@@@@@@@@@@&&@@@@@@@@%@@@@@@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&@@@@@@@@@@@@@&@@@@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&@&&&&&&&@@@@@@@@&@&&@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&&&&&&&@@@@&@@@@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@&@@@&@
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@
)" << std::endl << std::endl;
            std::cout << "                Ursa Major: Ursa Major, also known as the Great Bear, is one of the most" << std::endl << std::endl;
            std::cout << "                well-known and easily recognizable constellations in the night sky." << std::endl << std::endl;
            std::cout << "                It is named after a bear from Greek mythology and is often depicted as" << std::endl << std::endl;
            std::cout << "                a large bear with a long tail, although some cultures see it as a wagon or" << std::endl << std::endl;
            std::cout << "                a plow." << std::endl << std::endl;
            std::cout << "                Ursa Major contains several notable stars, including the seven bright stars" << std::endl << std::endl;
            std::cout << "                that form the Big Dipper asterism, which is part of the constellation." << std::endl << std::endl;
            std::cout << "                The Big Dipper is useful for navigation and is often used to find the North Star," << std::endl << std::endl;
            std::cout << "                Polaris." << std::endl << std::endl;

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
                            .  @&&&&&&&&&&@&@@&&&&&&&&&&@&&&&&&&&&&&&&&&&&&&&&&%&&&%&##@#  
                            /&&&&&&&&&&&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&&&&&&%&%&%%
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&&&&&&&%%#&&%&%&&&&#&&
                            &&&&&&&&%%&&&&&&&&&&&&%@&&&&%&&&&&&&&&&&&%&&&&&&&&&&&%&%%&&%&
                            &&&&&&&&&&&&&&%&&%&&&&&&&&&&&&&&&&&&&&&&%&%&&&&&%&%%&&&&&&%%&
                            &&&&&&&&&&&&&%&&&%&&&&&&&%&%&&&&&&&&&&&&%&%#&%&&&&%%&&&&%&%%%
                            &&&&&&&&&&&&&&&%&%&&&&&&&%&&&&%%%&&%&&%&%&%%%%&%%%%&&&%&%&%&&
                            &#&&&&&&&%&&&&&&&%&%&&&%%&&&&&&&&&&&&&&%%&&&&&/  *%%%&&%%&&&&
                            &&&&&&&&&&&&&&&&&&&%%%&&&%%&&&&&%&%&&#%%%%&&&%*%&%&&&%%  &&%%
                            &&&&&&&&&&&&&&&&&&&&%&&&&%&&&&%%%%%&%#%&&%%%%,&%%%%%&&%#/&&&&
                            &&&&&&&&&&&&&&&%&%#%%&&&&&%%%&%%%&%%%%%%%&&&/%%%%%%&%%&#&&&&%
                            &&&&&&&&&&&&&&&&&&&%&&%%&&%%&%%%%%%%%%%%&%%(%&%%&&%&#%&&&&%&&
                            &&&&&&&&&&&&&&&%%&%%&%&&&%&%%%&%%%%%%%%%%,,%&%&%%%%/%&&%&&%&&
                            &&&&&&&&&&&&&&&&&&&&%&%&%&&&&%%&&&%%%%%&,%&&%,&%&&,%%#%&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&%&&&&%&%&&&&%&&%/&%%&&&&&&( (&&&&%&&&%&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&&%(&&&&&&&&&&&&&&&&%&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&&*%&%&&&&&&&%&%%%&&&&&&%&%&&&
                            &&&&&&&%%&&&&&&&&&%&&&&&&&#*(&&&&%&&&%&&&&&&&&&&&&&%%&&&&&&&&
                            &&&&&&    %%%%%%%%%..&&&&&&&&&&&%&&&&%&&&&&&&&&&&&&&&&&&&&&&&
                            &@@&&&%&&&&%&&&&&&&&&%&&&&&&&&&&&&&&&&&&&%&&&&&&&%&&&&&&&&&&&
                            &&&&&#%&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&&&&%&&&&&&&&
                            &&&@&@&&&&&&&&@&&&&&&&&&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&
                            &@@&&&&&&&@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&&&
                            &@@@@@&&&@&&&@&&&@&&&&&&&&&&&&@&&&&&&&@&&&&&&&&&&&&&&&%&&&&&&
)" << std::endl << std::endl;
            std::cout << "                Ursa Minor: Ursa Minor, also known as the Little Bear, is a constellation" << std::endl << std::endl;
            std::cout << "                located in the northern sky." << std::endl << std::endl;
            std::cout << "                It is most famous for containing Polaris, the North Star, which marks" << std::endl << std::endl;
            std::cout << "                the direction towards the North Pole." << std::endl << std::endl;
            std::cout << "                Ursa Minor is often depicted as a small bear or a baby bear attached" << std::endl << std::endl;
            std::cout << "                to the tail of its larger counterpart, Ursa Major." << std::endl << std::endl;
            std::cout << "                Besides Polaris, Ursa Minor contains several other stars, although none" << std::endl << std::endl;
            std::cout << "                are as prominent as the North Star." << std::endl << std::endl;
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
                            @@@@@@@@@&@@@@@@@@@@@@@@@&@@@@@@@@@@@@&@@@@@@@@&@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@&&#*/%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@
                            @@@@@@@@@@@&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@/@@@@@@@@@&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@&&#@@@@@&%/%%&&@&&&#//#%&@@@@@@&@@&&&%%%&&@@@@@@@@&
                            @@@@@@@@@@@@@@@@@&&#/#&&@&&%#((%&&@@@@@@@@&&%/ ,#%&&@@@@@@@@
                            @@&@&@@@&@@@&&@@@@&&&&&@@@&&@&&&/&&&&&@@@&@*&%%%%&&&&@@@@@&&
                            @&@&&@&&&&@@@@@@&&&&&&&@@&&&&&&&&&&&&&&&*&@&&&&&&&@@&&@@@&@&
                            &&&&&&&&&&&&&&&&&&&&@@@&&@&&&&&&&%#.,,%%&&&&&&@&&&&&&&&&&&&&
                            &&&&&&%&&&&&&@&&&&&&&&&&&&&&&&&&&%%#(#%&&&&&&&&&&&&&&&&&&&&&
)" << std::endl << std::endl;
            std::cout << "                Cassiopeia: Cassiopeia is a prominent constellation visible in the northern hemisphere" << std::endl << std::endl;
            std::cout << "                It is named after Cassiopeia, the queen in Greek mythology and is often depicted" << std::endl << std::endl;
            std::cout << "                as a seated woman or a 'W' shape in the sky." << std::endl << std::endl;
            std::cout << "                Cassiopeia is known for its five bright stars that form the distinctive 'W' or 'M' shape," << std::endl << std::endl;
            std::cout << "                depending on its orientation in the sky." << std::endl << std::endl;
            std::cout << "                This constellation is part of the Perseus constellation family and contains several" << std::endl << std::endl;
            std::cout << "                notable deep-sky objects, including the open star cluster Messier 52 and the" << std::endl << std::endl;
            std::cout << "                supernova remnant Cassiopeia A." << std::endl << std::endl;

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
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@&&&&&&&@@@@(&&%%&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&/.%&%%&@@@@@@&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&((&&&&@@@@@@@&% #&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&.%&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&%%&&&&&&&&&&&&&(&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&%,(&&&&&&&&&&&&&&% #&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&%/&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&(%&&&&&/*(/&&&(%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&
)" << std::endl << std::endl;
            std::cout << "                Scorpius: Scorpius is a zodiac constellation located in the southern hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the scorpion in Greek mythology and is often depicted" << std::endl << std::endl;
            std::cout << "                as a creature with a long, curved tail and pincers." << std::endl << std::endl;
            std::cout << "                Scorpius is notable for its bright, red supergiant star, Antares, which marks" << std::endl << std::endl;
            std::cout << "                the heart of the scorpion." << std::endl << std::endl;
            std::cout << "                This constellation contains several deep-sky objects, including the globular" << std::endl << std::endl;
            std::cout << "                cluster Messier 4 and the Butterfly Cluster (M6)." << std::endl << std::endl;
            std::cout << "                Scorpius is also home to the famous Scorpius–Centaurus Association, one of" << std::endl << std::endl;
            std::cout << "                the nearest OB associations to the Solar System, containing many hot, massive stars." << std::endl << std::endl;

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
                            @@@@@@@&@@&&&&&&&%%%%%%&&&&&&&&&&&&&&&&&&&#&&&%&%%&&%%%%%%%%
                            @@@@@@@@@@&&&&&&&&&&&&&%&&&&&&&&&&&&&&&&&&&&&%(&&&&%&&%%%%%%
                            @@@@@@@@@@@@@&&&&&&&&&&%&&&&&&&&&&&&&&&&&&&&%/&&%#%&&&&&%&&&
                            @@@@@@@@@@@@@@@@&@&&&&&&&%&&&&&&&&&&&&&&&&&%&&&(%%#%%%&&&&&&
                            @@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&%. %&%&&/&&%*%%&&&&&
                            @@@@@@@@@@@@@@@@@@&&&%%%&&&&&&&&&&&&&&&&&#&&&&&&&&&&&#%&&&&&
                            @@@@@@&@@@@@@@@@@@%@&&%&&&&&&&&&&%%#(##(.%%&&&&&&&&&&&&&&&&&
                            @&&&&&&&&&&&&%@@@@@@@%&@@&@&&&&&&&&&&&&%&%#&&&&&&&&&&&&&&&&&
                            &&&&&&%*.%&&&@@@@@&&&#&&@&&&&&&&&&&&&&&&&&&% .%&&&&&&&&&&&&&
                            @@&&&&&&&&&&&&&&&&&@&&&@&@&%&&&&&&&&&&&&&&&&%&&&&&&&&@@#@&@@
                            &@@@@@@@@@@@@&&&&&&&&&&@@@&&&&&&&&&%%&&&&&&&#&&&&&@@@@@@@@@@
                            @@@@@@@@&@@&&&&&&&&&&@@@@@@@&&&&&&&&&&&&@&&% %&&&@@@@@@@@@@@
                            @@@@@@@&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@&@@@@&&%&@@@@@@@@%@@@@@
                            @@@@@@@&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@&@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "                Leo: Leo is one of the zodiac constellations, located in the northern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the Latin word for lion and is often depicted as a majestic" << std::endl << std::endl;
            std::cout << "                lion, with the bright star Regulus marking its heart." << std::endl << std::endl;
            std::cout << "                Leo is home to several notable deep-sky objects, including the Leo Triplet," << std::endl << std::endl;
            std::cout << "                a group of three interacting galaxies, and the famous spiral galaxy Messier 65," << std::endl << std::endl;
            std::cout << "                Messier 66, and NGC 3628, collectively known as the Leo Triplets." << std::endl << std::endl;
            std::cout << "                Additionally, the Leonids meteor shower, which peaks in November, radiates from" << std::endl << std::endl;
            std::cout << "                this constellation, originating near the bright star Algieba." << std::endl << std::endl;

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
                            @@@@@@@&@@@@@@&@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@&#&@@@&@@@@&@@@@@@@&@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#@@@
                            @@@@@&&&&&&&&&&&@&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            &@@@&&&&&&&&&&&&&&%*  ,%@@&&&&&&&&@@@@@@&&@@@@@@@@@@@@@@@@@@
                            @&&&&&&&&&&&&&&&&&&&&&&&&&/###%&&&&&&&&&&&&%&@@@@&@@@@@@@@@@
                            @@&&&&&&&%* .%&&&&&&&&&&&&&%#*%&&&&&&@&&@@@@@@%@@@@@@@@@@@@@
                            @&&&&&&&###,%%&&&&&&&&&&&&&&&&/&&%&&@@@@&@@@@&@@@@@@@@@@&@@@
                            &&&&&&&&&&&#&&&&&&&&&&&&&&&&&&&*&@&&%@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@&&&&&&%&&&&&&&&&&&&&&&&&&&&*@@&@@@@@@@&@&@@@@%@@@@@@@@@
                            @@@@@@&&&%*#%&@%&&&&&&&&&&&&&&&&&/&@&@&@@@@@@&@@%@@@@@&@@@@@
                            @@@@@@@@&%%%(&@@@@@@@%@%@&(@&&@&@&/%&&@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@&(&@@&&/&&&&&&@@&@@@@@@&@&, /*&&&&&&&&@&@&@&&&@@@@@@
                            @@@@@@@@@@@@@@@@&%.,%&@@@@@@@@&&&@#@&&&%(%%%..&&&@&**&@&&@@@
                            @@@@@@@@@@@@@@&&&&%%&&#&&@@@&@@@&&&&@&&&&&%%&@&&@&&&@@@@@@@@
                            @@@@@@@@@@@@@@@&@@@@@@@@&( #&&&&@%&&@@&@@&%@&&@@&&*&@@@@@@@@
                            @@@@@@@@&@&@@@@@@@@@@@@@&&%%(@@@&&&@@@@@/@&&@@%@&&@@@%@@@@@@
                            @@&@@@@&&@@&&@@@@@@@@&@&&&&&@&&%@@&&&&@&@@@@@@@@@@@@&@@@@@@@
                            @@&@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&*#%%(&&@@@@&@@@@@& &@@&&@@@
                            @@@&&&&&&&&&&&&&&&&&%%&&&&&&%&&@&%/  ,&&&@@@@&@@@@@@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&%&&&@@@@@@@@&&@@@&&@@@@@@
                            &&&&&&%#&&&&&&&&&&&&&&&&&&&&&%&&&%&&@@@@@@@@@@@@@@@@@@@&@@@@
                            &&&&&&&&&&&&&&&&&%&&&&&&&&&&@&%(..(&@@&@@@@@@@@@@@@@@@@@@@@@
                            &&&&&&&&&&&&&%(%%%&&&&&&&&&&&&&&&&@&@&@@@@@@@@&&&@@@@@@@@@&@
                            &&&&&&&%&%%&%&&%%&&&&&&%&&&&&&&@@&@&&@@@@@@@@@@@@@@@@@@@@@@&
)" << std::endl << std::endl;
            std::cout << "                Gemini: Gemini is one of the zodiac constellations, located in the northern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the Latin word for twins and is often depicted as two human figures," << std::endl << std::endl;
            std::cout << "                Castor and Pollux, from Greek mythology, representing the twin brothers." << std::endl << std::endl;
            std::cout << "                Gemini is home to several notable deep-sky objects, including the open star cluster M35," << std::endl << std::endl;
            std::cout << "                the Eskimo Nebula (NGC 2392), and the Medusa Nebula (Abell 21)." << std::endl << std::endl;
            std::cout << "                The bright stars Castor and Pollux mark the heads of the twins, with Pollux being" << std::endl << std::endl;
            std::cout << "                slightly brighter and more orange in color than Castor." << std::endl << std::endl;

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
                            @&@@&&@@@@@@%@&@@@@@%&@@&@&@@@@@@@@@@@@@@&@@@@@&&@@@&&@@@@@@
                            @@@@@@@@@@@@@@&@@@@@@@@@@&&@@@@@@@@@@@@@@@&@@@@@&&@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@&@@@@@@@@@&&@@@@@&@@@@&&@@@@&&&&@&@@&@@@@
                            @@@@@@@@@&@@@@@@@@@@@&@&&@@@@@@@@&&&&&&@%@&@@@&@&&&&@&@@&@&@
                            @@@@@@@@@@&@@@&@&@@@@@@@&@@@@@@@@@&@&&&&&&&&@&@@&&&@&&@&@@@&
                            @@@@@@@@@@@@&@&&@@@@@@&&@&@&&@@@&&@&&@&@&&&@@&@@@&&&@&&&&@&&
                            &@@@@@@@&@@@&@@@@@@&&@@&@@@@@@@&@@&&&&@@@&&&&@&&@&&&&&&&@@&&
                            @@@@@@@&@@@@&@@@&@&@&@@@@&&@&@@@&@&@&&&&&&&&&&&&&&&&@&&@&@@&
                            @@@&@@@@@@**&&&@@@@&@@@@&@@@&&&&@&@@&@&&&&@&&&@&&@&&&&@@@&&@
                            @@@@@@@@@@&&&@/&&&&&&@&&@&@&&&&@&&@&&&&&&&&&&&&&&%&&@&&&&&&&
                            @@@@@@@@@&@@@&&&@&/&@&&@&&&&@@&@@&&&&@&&&&&&@&&&&&&&&&&&&&@@
                            &&@@&@@@@@@@@@@@@@&@@@,&@&%&%&&&&&&&&&&@@&&@&&&&&&@&&&@&@&@&
                            @@@&@&@@&@@@@@@@@@&@@&&%&#@&&@&&@&@&&&&&&&&@&&&@&&&@@&@@&&@&
                            @@@@@&&&(%@&@&&@&@@@&@@@&&&&&&&&&@&&&@&&@&&&&&&&&@&&&&&&&&@&
                            @@@@@@@&@@@&@&@,&@%@&&&@@&&@@@&&&&@&@&@&@@&&&&&&&&&@&@@@@@&&
                            &@&@@@@@&@@@@&&@&@@&&%(&&&&&&&&//&&&&&&&&@@@&&&&&&@&@&@@&@@@
                            @@@@@@@@@@@@&@@@@@@&@&&@@&&&/%%&&&&@&@&&@&&&@&@&&&@@@@&&@@&@
                            @@@@&@@@@@@&&@@@@@@&@@@&@@@&@@@&@&&&(&@&&&&&@&&@&&&&&@&&@@@&
                            @@@@&@@@@@@@&@@@@@&@@@&@@@@&@@@&@@&&&&&#.(/((#%&&&#/&@@@@@@@
                            @@@@@@@&@&@@@@@@&@@@&&@@@@&@&@&@&@@&&@@&&&%&@&&&&%&&&&&@@&@@
                            @@@@@@@@@&&@&@@&@@@@@@@@&@@&&&@&&&/.&&@&@&@&@@@&&&&&&(&@@&@@
                            @@@@@@@@&@@&@@&@@&@@@@&%@@@@@@&@&&@&(&&&@&@@@@@@@&@@@@&&@&&@
                            @@@@@@@@&@@@@@@@@@@@@&@@@@@@@@@@@@@&@@.@@@@@&@@@@@@@@@@@@@@&
                            @@@%@@@@@@@@%@@@@@@@&@@&@@@@@@@@&&&@@@@@@@@@@@@&@&&@@&@@@&&@
                            @@@@&@&@@@&@@&@@@@&@@@@@@&@@@@@@@@@@@@@@@@@@@&&@@@&@@@@@&@@@
                            @@@@@@@@@@@%%@@@@@@@@&@@@@@@@&@&@@@@@@@@@&@@&#&@@&@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@
                            @@&@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@&
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@&@&@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@
)" << std::endl << std::endl;
            std::cout << "                Taurus: Taurus is one of the zodiac constellations, located in the northern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the Latin word for bull and is often depicted as a charging bull," << std::endl << std::endl;
            std::cout << "                representing the bull from Greek mythology that was sent by Zeus to ravage the land." << std::endl << std::endl;
            std::cout << "                Taurus is home to several notable deep-sky objects, including the Pleiades star cluster," << std::endl << std::endl;
            std::cout << "                also known as the Seven Sisters, and the Hyades star cluster, which form the bull's face." << std::endl << std::endl;
            std::cout << "                The bright star Aldebaran marks the eye of the bull and is one of the brightest stars" << std::endl << std::endl;
            std::cout << "                in the night sky." << std::endl << std::endl;

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
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@%,%*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@((@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@%&@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@(@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@&@&#@@@@&@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@#&((%@@@#@@@@@@%/%@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@&&* %&%#(.   .%&@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@(&@@@@@@@%&&@@@@@@@@@@%#(#..&@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(@&@@@@@@@@@@@@@@@&&@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@**&@#@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@(&@&&##*&&@@@@@@@@@@@@@@@@@@@@@@@
                            &@&@@@@@@@&@&@&@&@&@&@&@@&(&&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@&@
                            &&&&&&&&&&&&&&&&&&&&&&&@&%@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&@(&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&@&@&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&#/%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&##((&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&(&&&&&&#&&&&*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&(&&&&&&&&&&&# .%&&&&@&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&/&, /&&&&&&&&&&&&&&%%&&&&&&&&%#(/(%&&&&&&&&&&&,&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%*%&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&%&%#&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%#&&&&&&&&&&&&&&&&&&&&&&&&&&&&
)" << std::endl << std::endl;
            std::cout << "                Canis Major: Canis Major is a constellation located in the southern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the Latin phrase for 'greater dog' and is often depicted as a" << std::endl << std::endl;
            std::cout << "                large dog following the constellation Orion, the hunter." << std::endl << std::endl;
            std::cout << "                Canis Major is home to Sirius, the brightest star in the night sky, also known as" << std::endl << std::endl;
            std::cout << "                the Dog Star. Sirius holds great significance in various cultures throughout history." << std::endl << std::endl;
            std::cout << "                The constellation also contains several other notable stars and deep-sky objects," << std::endl << std::endl;
            std::cout << "                including the open star clusters Messier 41 and NGC 2362." << std::endl << std::endl;

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
                            @@@@&@@@@@@@@@@@@@@@@@@@@@&@@@&@@&&@@&@@&@@&@@&@%@&&@@@@@&@@
                            @@@@@@@@@@@@@@@@&@@@@@@&&@@@@@&&@&@@@@@&&&@@@@@&&&&&&@&&@&@&
                            @@@@@@@@@@&@@#@@@@@@@&@@@@&&@@@&&@&&&&@@@&&&&@@&&@&&&@&@&@@&
                            @@@@@@@@&@&@&@&@@&@&@@@&&@@@&&@&&&&&&@@&&@&&&@&@&@%&&&&&@%&&
                            @@@@@@@@@@@@&@@@@@@@&@@@&&@&&&@@&@&@&@&&&&%@&&%&&&&&&&&@&@&@
                            @@@@@@@@@@@@@@@&@@@@@@@@@@@@&@&@&&&&&&@&&@&&&&#&@&&&&&@@&&@@
                            @@@@&@@@@@@@@@@@&@@&&@&&&@@&&&&&&&&&@&@@&&&&%*&&&&&@&&@&@&&&
                            @@@@@&@@@@@@@&&@@@@&@&(./&&&@@&&&&@&&@&&&&&&&&&&&&&&&@&&&&&@
                            @@@@@@@@@@@@@@@&@@&@@&%@/&%&&@&&&&@&@&&&&&&%,&&&&&&&&&&&&@@&
                            @@@&@&@@@@@@@@@&@@&@@@@&&&(&&&@&@&&&&&&@%&&&&&&&&&&@&&@&&&@&
                            @@@@@@@@@&@&@%&@@@@@@@@@@&@@&&&&&&&@*&&&&&&&&&@@@&&&&&&&&&@&
                            @@@@@&@@@@@&@@@@@@&@&@@@@&&&&#%&(@&&&&&&&@&&&&&&@&&&&&@@@@&&
                            @@&&@@@@&@@@@@&@@@@@&&@@&@@&&%%(&&&&&&&&@&&@&@&@&@&&@@@&&@@&
                            @@@&@@@@&@@@&@@@@@@&@@&&@&&/&&&&%&*&&&&&&@&&@&@&&@@@@@@@@@@@
                            @@@@@@&&@@@&&@@&@@@&&&&&&#&&&@&@&@&&&&&&&&&&@@&@@@&%&&@&@@@@
                            @@@@@@@@&&@@&@@@@@&&&&@@%&@&@@@@@@@&&&&.#&&&&@&@@&@@%&%@&@&&
                            @@@@@@@@@&@@@@@@&&&%//&&&@&@@@&&&@@@&&&%&/&&@&&@&&%&@@@@@&@&
                            @@@@@@&@@@&@@@@#&@&&@&@@@@@&&@@@&@@@@@@@@&&/&&@@%@&@@@&@@@@@
                            @@@@@@@@@&@*@@%&@@@@%@@@@&@@@&&@&@@&@@@@@@@&&,&&@@&@&@@@@&@@
                            @@@@@@@&&%@&&@@&@@&@@#@@@@@@@@@@&@@@&@@&&@&&@@@,&&%@&@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@&@@&@@@@@&@@@&&@@@@@@@&@@&@@@&(@&&@@@&%@
                            @@@@@@@@&@@@@@@@@@@@&&@&@@@@@@@@@@&@@@@@%@@@@@@@@@@@@@@&&@@@
                            @@@@@@@@@@@@@@@@@@@@&@@@@@@@@@&@@@@@@@&&@&@@@@@@@@@@@@@@@@&@
                            @@@@@@&@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@&@@@
)" << std::endl << std::endl;
            std::cout << "                Cygnus: Cygnus is a prominent constellation visible in the northern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the Latin word for 'swan' and is often depicted as a flying swan," << std::endl << std::endl;
            std::cout << "                with the bright star Deneb marking its tail." << std::endl << std::endl;
            std::cout << "                Cygnus is home to several notable deep-sky objects, including the North America Nebula" << std::endl << std::endl;
            std::cout << "                (NGC 7000), the Veil Nebula, and the Cygnus Loop supernova remnant." << std::endl << std::endl;
            std::cout << "                The constellation also contains the famous asterism known as the Northern Cross," << std::endl << std::endl;
            std::cout << "                formed by the bright stars Deneb, Sadr, and Albireo, among others." << std::endl << std::endl;

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
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,@@@@@@@%  &@@@@@@@@@@@@@@@
                            @@@@@@%.*&@@@@@@@@@@@@@@@@@@@@@@#.(%(&@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@/&@@@@@&&#((%&&@@@@%%@&(&&#&@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@%@@@@@@@@@@@@@@@@@@&*.%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@&%@@@@@@@@@@@@@@@@@@@%&@#(%@@@@@@@@@@%  %%(/(, %@@@@@@@
                            @@@@@(@@@@@@@@@@@@@@% /@@@(@@&%/ ,(#&&@@&@&/(@@@@@@@(*@@@@@@
                            @@@&&&@@@@@@@@@@@@@@&#.@@&(@@@@&/ &@@@@@@@@@&@@@@@@@@@@@@@@@
                            @@@@(@@@@@@@@@@@@@@@@@@@@&#&@@@@&&&@@@@@@@@@@@@@@@@@@@@@@@@@
                            &&&#@&@&@&&&&&&&&&&&&&&&&&%@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&* *%%#(//(#%&&&&&&&@@&&##&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&
                            &&&& &@&&&&&&&&&&&&&&&&&%**(&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&@
                            &&&&&&&&&&&&&&&&&&&&&&&&%@&&&&(&&&&&&&&&&&&&&&&&&&&&&&&%##&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&/ ,&&&&&&&&&&&&&&&&%..%&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&&&(%&&&&&&&&&&%(&%%%,&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&(%##%#&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#%&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
)" << std::endl << std::endl;
            std::cout << "                Pegasus: Pegasus is a constellation visible in the northern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the winged horse from Greek mythology and is often depicted" << std::endl << std::endl;
            std::cout << "                as a flying horse with outstretched wings." << std::endl << std::endl;
            std::cout << "                Pegasus is notable for its distinctive 'Great Square' asterism formed by four" << std::endl << std::endl;
            std::cout << "                bright stars: Alpheratz, Scheat, Markab, and Algenib." << std::endl << std::endl;
            std::cout << "                The constellation also contains several deep-sky objects, including the famous" << std::endl << std::endl;
            std::cout << "                Andromeda Galaxy (M31), one of the nearest spiral galaxies to the Milky Way." << std::endl << std::endl;

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
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&,(@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&. @@@
                            @@@@@@@&(&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(@@@@@
                            @@@@@@@&/#@@,&,@@@/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*,@&#&@@@@@@
                            @@@@@@@&(&@@# (@# %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&,%@@@@@@@
                            @@@@@%,* *%%###. &@&#&%(&&@@@@@@@@@@@@@@@@@@@@@@@@(&@@@@@@@@
                            @@@@@@@&/@@@@@&.&#@&&@@&&@@@@@@@@@@@@@@@@@@@@@@&@(@@@@@@@@@@
                            @@@@@@@@(@@@@@@@@&(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@&@@@@@@@@
                            &&&&&&&&%&&&&&&&&&&(@@&@&&&&&&&&&&&&&&&&&&&&&&@%&@&&&&&&&&&&
                            &&&&&&&@&&@&&&&&&@@% ./.@&&&&&&&&&&&&&&&&&&@&&. %&&&&&&&&&&&
                            &&&&&&&@&%&&&&&&&&&&&&(&&&&&&&&&&&&&&&&&&&&&(&&&&&&&&&&&&&&&
                            &&&&&&&&&#&&&&&&&&&&&&&&/&&@,&&&&&&&&&&&&&(@&&&&&&&&&&&&&&&&
                            &&&&&&,/&(&&&&&&&&&&&&&&@/ .@&&&&&&% @&%&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&%*/&&&&&&&&&&&&&&&&&(&&&&&&%.,&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&%&&&( %&%&&&&&&&&&&&&&#/&&&&&%&&&@&&&&&&&&&&&&&&&&&&&
                            &&&%  ,%&&%/&&&&%,#* %&&&&&&&%*&&&&&&&&*#/&(&&&&&&&&&&&&&&&&
                            &&&&.&&&&&%(%(&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
)" << std::endl << std::endl;
            std::cout << "                Draco: Draco is a constellation located in the northern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the Latin word for 'dragon' and is often depicted as a serpentine dragon," << std::endl << std::endl;
            std::cout << "                winding its way between the constellations Ursa Major and Ursa Minor." << std::endl << std::endl;
            std::cout << "                Draco is home to several notable deep-sky objects, including the Cat's Eye Nebula (NGC 6543)," << std::endl << std::endl;
            std::cout << "                the Spindle Galaxy (NGC 5866), and the famous Draco Dwarf Galaxy, one of the nearest" << std::endl << std::endl;
            std::cout << "                satellite galaxies to the Milky Way." << std::endl << std::endl;
            std::cout << "                The constellation is also known for containing Thuban, a former pole star." << std::endl << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 13:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@&@@%@*&@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@& /@@@&@@(@@@@@@*#@&@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@#(@%@@&&@@#@@@@@@&%@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@#@@@@@&&@@#@@@@@@@@#@@@@@@@@@@@# %@&@@@@@@@@@@@@@
                            @@@&@@@&@@@&@@&&(( &@@@@@@@@&,(,@@@@@@@@@@@@@(&@@@@@@@@@@@@@
                            &@@(#(@&&& %@@@@@&#@@@@@,.&@@&&@@@@@@@@@@@@@@@@(@@@@@@# /%(&
                            &&&&&&&&(&@&&&&&&&&&&&&@&&&&&&@%&&&&&&&&&&&&&&&&&,,&@&@&@&&&
                            &&&/&&&&&&&&&&&&&&& #/&&&&&&&&&&,&&&&&&&&&&&&&&&&#&&##/(&@&&
                            &&& (&&&&&&&&&&&&%/&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&
                            &&&%&&&&&&&&&&&&&%&.&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&%&(&&&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&%#%(#.&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
)" << std::endl << std::endl;
            std::cout << "                Aquarius: Aquarius is a constellation located in the southern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the Latin word for 'water-bearer' and is often depicted as a" << std::endl << std::endl;
            std::cout << "                figure pouring water from a vessel." << std::endl << std::endl;
            std::cout << "                Aquarius is home to several notable deep-sky objects, including the Helix Nebula" << std::endl << std::endl;
            std::cout << "                (NGC 7293), the Saturn Nebula (NGC 7009), and the globular cluster Messier 2." << std::endl << std::endl;
            std::cout << "                The constellation is also known for containing the radiant point of the Eta Aquarids" << std::endl << std::endl;
            std::cout << "                meteor shower, which occurs annually in May." << std::endl << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 14:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,@*(@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@%*@%@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@&/*&@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@*@@
                            @@@@@@@@@@@@@@@@@@@@@@&&@**@@@@@@@@@@@&*@#/@@@@@//@,@@@@(#&@
                            @@@@@@@@@@@@@@@@@@@@@@@&  #%,(,@@@@@@@@@@@@@@@,,(/&@@*@@&@@@
                            @@/*@*(%&@@@@@@@@@@@@@@@@@&#&&(*(@@@@.@@@@@@@@@(&&@@*/@&@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@##%@@&@(@@@@@@&%##@ @@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@&/,&/&@@@@@@@@# ,/#(@@@@*#(@@@@@@
                            @@@/,@/#&@&@@@@@@@@@@@@@ *(&&#, /((,%##@,*&&@@(&,@@@@@,@@@@@
                            @@@@@&%&@@@@@@@@@@@&&@&&@&./&@@@%%&@@&(&@@&%&@@@&@@@@@@@@@@@
                            @@@@&&&&@@@@@@@@@@@@@@@@@@@( *&@@&@@&@@&@&(%*#&&.@@@@@@@@@@@
                            &&&&&&&&@&&@&/*&%%/@&&&&@&*&%&#/*@&%@&&(@,&&*(&%(( ,%,/@&&&&
                            &&&&&&&%@&&&&&@&&@@@&&&&&&&&&&&&@&#,&&@#%,@&&@&@#&&&&&&&&&&&
                            &&&&&&&#&&&&&&&&&&&&&&&&&&&&&&&% (@#@&%#@&&(&#&&&&&&&&&&&&&&
                            &&&&&&&(@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@%  (&&&&&&&&&&&&&&&
                            &&&& %* (&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&/&&&&&&&&&&&&&&&
                            &&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&((&((&&&&&&&&&&&
                            &&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&(&&&&&&&&&&#*#&*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&(&&&#(%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&#%/%&%#/%&&&&&&&% %&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&%  %&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&&&%%*#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
)" << std::endl << std::endl;
            std::cout << "                Sagittarius: Sagittarius is a constellation located in the southern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the Latin word for 'archer' and is often depicted as a centaur" << std::endl << std::endl;
            std::cout << "                holding a bow and arrow, aiming towards the heart of the Milky Way galaxy." << std::endl << std::endl;
            std::cout << "                Sagittarius is home to several notable deep-sky objects, including the Lagoon Nebula" << std::endl << std::endl;
            std::cout << "                (Messier 8), the Trifid Nebula (Messier 20), and the globular cluster Messier 22." << std::endl << std::endl;
            std::cout << "                The center of the Milky Way, which lies in the direction of Sagittarius, is a" << std::endl << std::endl;
            std::cout << "                region of intense star formation and contains a supermassive black hole known as Sagittarius A*." << std::endl << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 15:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ **&%&@@@@@@@@@@@@@@@@@&%&@@
                            @@@@@@%/&(,@@@@@@@@@@@@@@@@@@@@@@@@%.(#@@@@@@@@@@@@@@@@#,%@@
                            @@@@@@&#&@@@@@@@@@@@@@@@@@@@@@@@@@@@(@@@@&.   &%@@@@@@@@@@@@
                            @@@&(#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(@@@@&/. (@@@@@@@@@@@@@@
                            @@@@#%@(@@@@@@@@@@@@@@@@@@@@@@@@@@@@(@%%@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#  #@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@*%(/%(%@@@@@(@@&@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@(%&@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@&&@@@@@@@&%@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@/@@@@@@@&(@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@%&@@@@@@@&&@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@&%&@@@@@@&/@&@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@(@&&@@@@&%&&@@@@@@@@@@@@@@@@@@@@@@@@@@
                            &&&&&&&&&&&&&&&&&&@@&%&@&@@@@&&%@@@&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&,&&%&&&@&&#, .&*&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&/  %&&(##*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&@%*%@&&&&%.&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&&#%@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&###%@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
                            &&&#%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
)" << std::endl << std::endl;
            std::cout << "                Lyra: Lyra is a constellation located in the northern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the lyre, a musical instrument played by Orpheus in Greek mythology." << std::endl << std::endl;
            std::cout << "                Lyra is notable for its bright star Vega, one of the brightest stars in the night sky" << std::endl << std::endl;
            std::cout << "                and one of the vertices of the Summer Triangle asterism." << std::endl << std::endl;
            std::cout << "                The constellation also contains the famous Ring Nebula (Messier 57), a planetary nebula," << std::endl << std::endl;
            std::cout << "                and the double-double star Epsilon Lyrae, which can be resolved into two separate binary stars" << std::endl << std::endl;
            std::cout << "                with a small telescope." << std::endl << std::endl;

            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            std::cout << "                                    Press any key to continue...";
            std::cin.ignore();
            std::cin.get();
            break;
        case 16:
            CLEAR_SCREEN();

            SetConsoleTextAttribute(hConsole, 7);
            std::cout << R"(
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@#@@@@@@@/#(((@@@@@@@@@@@@@%*/%&@@@@&@@@@
                            @@@@@@@@@@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@&@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@#@&@@@@@@@@@@@@@@@@@@@*@%%%%%%/@@&@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@,@@@@@@&@@@@@@@@@@,@@@@@@@@@@@@@@@@@@@#@@
                            @@@@@@@@@@@@@@@@@@@@@%@@#@&@@@@@/@*@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@%@*@@&@(&%@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@&@@@@@@@*@@@@@@@@@&@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@&%@@@@@@@@@@@@@@@@@@@#,@/%@@@@@@@@@@@@@&@@@@@@@@@@@@@@
                            @@@@@@@*@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#(@&@@@@@&@@@@@@@@@@@@@@@
                            @@@@@@@@@@@@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "                Andromeda: Andromeda is a constellation located in the northern celestial hemisphere." << std::endl << std::endl;
            std::cout << "                It is named after the princess Andromeda from Greek mythology, who was chained to a rock" << std::endl << std::endl;
            std::cout << "                as a sacrifice to a sea monster but later saved by Perseus." << std::endl << std::endl;
            std::cout << "                Andromeda is notable for containing the Andromeda Galaxy (M31), the nearest spiral galaxy" << std::endl << std::endl;
            std::cout << "                to the Milky Way and the largest galaxy in the Local Group." << std::endl << std::endl;
            std::cout << "                The constellation also hosts several other galaxies visible with amateur telescopes," << std::endl << std::endl;
            std::cout << "                such as M32 and M110, which are satellite galaxies of M31." << std::endl << std::endl;

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
