#include "StarsInfo.h"

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