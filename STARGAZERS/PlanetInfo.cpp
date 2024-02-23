#include "PlanetInfo.h"

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
            std::cout << "         Mercury, closest to the Sun, is small with a rocky surface covered in craters." << std::endl << std::endl;
            std::cout << "         It has a thin atmosphere and extreme temperature variations, ranging from -290°F to 800°F." << std::endl << std::endl;
            std::cout << "         Mercury lacks moons, rotates slowly, and its surface is heavily cratered." << std::endl << std::endl;
            std::cout << "         Despite its proximity to the Sun, it's not the hottest planet due to its thin atmosphere." << std::endl << std::endl;
            std::cout << "         Studying Mercury offers insights into terrestrial planet formation." << std::endl << std::endl;
            std::cout << "         Its average distance from the Sun is about 36 million miles." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@%%(#%######(###(&@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@&#%%#(%#%%#####(#((/((####@@@@@@@@@@@@
                                    @@@@@@@@@&##%#%%####(((((##%#%#((((((((((@@@@@@@@@
                                    @@@@@@@%#%((#(#((#(###(//#/((((##(((/*((((/&@@@@@@
                                    @@@@@@%(#((#%%%#((((((((/(((///(/((((#((%////@@@@@
                                    @@@@@%#%(#&%%/%(((#(((((/((*///////(###**/**(/@@@@
                                    @@@@%(#((((#%%(/(((((##(((((/(,,///*/(/*//*/**(@@@
                                    @@@(#((((((((((/(((/(/((((/(,((/,*//****/*//#*(#@@
                                    @@@/(///**(((((#((/((/((#(#(##//*.,**//*//*//(((@@
                                    @@@/#(,*,,*(*###/#(((/(/#%%###,,*/*****/**/((//(@@
                                    @@@,/*//,.,**/((//###%(***#*/,,/(/(/(//#**/(#((#@@
                                    @@@@*****,(//****///****,*//**#%%%(/#(((/(////(@@@
                                    @@@@&((*/**((((/*/(#(/**##(/(#%%(%%%###((/#((/@@@@
                                    @@@@@@#//#**//////##(%##%#(#(##%##%%%####(##(@@@@@
                                    @@@@@@@%#%#/(//#(%##(####%%##%#%##%%%%#%%##@@@@@@@
                                    @@@@@@@@@&#(###########%%#########(#%#%##@@@@@@@@@
                                    @@@@@@@@@@@@&##((####%#%%%%%#(########@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@%(#((######%#%&%&@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Venus is the second planet from the Sun and is similar in size and composition to Earth." << std::endl << std::endl;
            std::cout << "         It has a thick and toxic atmosphere, making it the hottest planet in our solar system." << std::endl << std::endl;
            std::cout << "         The planet's surface is characterized by vast plains, mountains, and thousands of volcanoes." << std::endl << std::endl;
            std::cout << "         Venus does not have any natural satellites and rotates in the opposite direction compared to most other" << std::endl << std::endl;
            std::cout << "         planets. Due to its extreme conditions, Venus is considered inhospitable to life as we know it." << std::endl << std::endl;
            std::cout << "         However, studying Venus provides valuable insights into planetary formation and climate change." << std::endl << std::endl;
            std::cout << "         On average, the distance between Venus and Earth is about 25 million miles (40 million kilometers)." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@#****/***((/* */%@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@#(*///,,#%&%%#(%#%/(#/.%%#@@@@@@@@@@@@
                                    @@@@@@@@@#(((/(#(*##*..,,***,***/*//%&&%%@@@@@@@@@
                                    @@@@@@@###&*/(/(##%%%%%&&&&&&&&&%%%%%%&%%%%&@@@@@@
                                    @@@@@#%(&%&##//(/&#&&&%%&&&&&%#&%**/#%&&&&%%*@@@@@
                                    @@@@%#(/(#&&&#(#&&%,,,*%*&#&%%%/* ##%%&&&&&&&,(@@@
                                    @@@%&&%#/,%%/%&&&&#*#(,#.*,*(/(*,,(%&%&&&&&&%(.%@@
                                    @@&%%%&%&##,#((#/.*/,,*#(/(/#(. ./&/&%&&*&&%&&(.@@
                                    @@%%&&&&(&#(**(##/%&%%%//.%%#.##%%&%%&##((#(&&&%@@
                                    @@&&&&&&&&&&&#&%%&%%//%/((%#%.*,((%%&%##%&&&&&&%@@
                                    @@%&&&&&%%%&%%%%##((#%##%%%&&%%%%%%%%%%%%%%&&&%%@@
                                    @@@##&%%&%&%&&%%(#(/(//((/#(%%%%#%%%%##%&&&%&%%&@@
                                    @@@@%&&%%&%%&%&&%&%((%%#%#(//(%%%%##%#%&#&&%%%%@@@
                                    @@@@@#,#%%%%(/%%&#((###%&%(//%%%#%%%%%&%&#%%#@@@@@
                                    @@@@@@@/*/%##%%%%%#(#&%#%%%(#########*,###((@@@@@@
                                    @@@@@@@@@.,///#(###%%#%%/,,*(/##%#*..*##/#@@@@@@@@
                                    @@@@@@@@@@@@//(/((/#*/,##*((,*(((((///%@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@%*.*/,,/..,/////*/@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Earth, the third planet from the Sun, is the only known planet to support life." << std::endl << std::endl;
            std::cout << "         It has diverse environments, including oceans, continents, and polar ice caps." << std::endl << std::endl;
            std::cout << "         Earth's atmosphere contains nitrogen, oxygen, carbon dioxide, and traces of other gases." << std::endl << std::endl;
            std::cout << "         The planet's surface is marked by mountains, valleys, and vast bodies of water." << std::endl << std::endl;
            std::cout << "         Earth has one natural satellite, the Moon, which influences tides and ecosystems." << std::endl << std::endl;
            std::cout << "         It rotates on its axis, creating day and night, and orbits the Sun in 365.25 days." << std::endl << std::endl;
            std::cout << "         The study of Earth sciences helps understand natural phenomena and climate patterns." << std::endl << std::endl;
            std::cout << "         Earth's distance from the Sun varies, with an average of about 93 million miles." << std::endl << std::endl;
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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@/(//////((((#%%%#//@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@(//,///***///*//(((#%##%##(@@@@@@@@@@@
                                    @@@@@@@@@@////////**/////////(((/((#%&%%#@@@@@@@@@
                                    @@@@@@@@(///////**,...*(//*//////((((###%#(@@@@@@@
                                    @@@@@@@(//*////*/////////////////#(/((####%(@@@@@@
                                    @@@@@@///*,,/(/*/////((/(/(//***/(#(##((%%#((@@@@@
                                    @@@@@@/*//./*(/**,*/(/(/////////((((#%((##(/(@@@@@
                                    @@@@@@//*(((((/*,,,,*,,*/*//*/////((/(((/((/(@@@@@
                                    @@@@@@////(///**/,*,//*,,,,,,*/****(((//(/((#@@@@@
                                    @@@@@@****///**,///*///*,,,*,,/,**(/(##(((#%(@@@@@
                                    @@@@@@@/,*,**,*//*,,///(/##/*/(////((####(#%@@@@@@
                                    @@@@@@@@**,,*****((/**,,/((///((#((###(#((#@@@@@@@
                                    @@@@@@@@@@/*//////********/(((((########%@@@@@@@@@
                                    @@@@@@@@@@@@/#(///(/(*((#####(#((##%%%#@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@(/##(((/(#(####(((*@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Mars, the fourth planet from the Sun, is often referred to as the 'Red Planet' due to its reddish appearance." << std::endl << std::endl;
            std::cout << "         It has a thin atmosphere primarily composed of carbon dioxide, with traces of nitrogen and argon." << std::endl << std::endl;
            std::cout << "         Mars' surface features dry riverbeds, valleys, polar ice caps, and expansive deserts." << std::endl << std::endl;
            std::cout << "         Olympus Mons, the tallest volcano in the Solar System, and Valles Marineris, one of the largest canyons," << std::endl << std::endl;
            std::cout << "         are prominent features on Mars. It has two small moons, Phobos and Deimos, which are believed to be captured" << std::endl << std::endl;
            std::cout << "         asteroids. Mars experiences extreme temperature variations, ranging from as low as -195°F (-125°C) to as" << std::endl << std::endl;
            std::cout << "         high as 70°F (20°C). Studying Mars provides insights into the potential for past or present life beyond" << std::endl << std::endl;
            std::cout << "         Earth and the challenges of future human exploration. Its average distance from the Sun is about 142" << std::endl << std::endl;
            std::cout << "         million miles (228 million kilometers)." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@&%%%%%%%&&&&@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@%%########(#######%%%%&&@@@@@@@@@@@@@
                                    @@@@@@@@@&%##((/((((//((((((((((###%%%%&@@@@@@@@@@
                                    @@@@@@@%##((//////******/*****///(((##%%%&&@@@@@@@
                                    @@@@@%#(((/(///**,/*//*//*,/(/(/(////((###%&&@@@@@
                                    @@@@%((((///*/**//***,*,********/////((((##%&&@@@@
                                    @@@%#((####((((//(//#(,/(/*/(((####(#(#/###%%&&@@@
                                    @@&#(/////*,,*,*,,,,,,...,**,,******////((##%%&@@@
                                    @@#(/***,,,,,,..,.....,,,*.....,,,,****(//(##%&@@@
                                    @@#/**/**/****/*/,,,*/*//**,,*/,,/*/(//((((##%&&@@
                                    @@@#(##//**,*/*,**,,*,/*////(/////*/((#/##(#%%&@@@
                                    @@@&##(///*,,*//,((##/*,,,.,,,,,//**//((((##%&@@@@
                                    @@@@@(///**,*,,,,,,,.,,,,,/,**,******//(((#%&@@@@@
                                    @@@@@@##((((//******,****/(*///((#((#(#%#%&&@@@@@@
                                    @@@@@@@@##((((/(//(/////(((//((((((#%#%%&&@@@@@@@@
                                    @@@@@@@@@@@%%###(#(((((((((((#####%%&&@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@%%%%%#%####%%%%%&&@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Jupiter, the fifth planet from the Sun, is the largest planet in the Solar System." << std::endl << std::endl;
            std::cout << "         It is a gas giant with a thick atmosphere mainly composed of hydrogen and helium." << std::endl << std::endl;
            std::cout << "         Jupiter's iconic feature is the Great Red Spot, a massive storm that has been raging for centuries." << std::endl << std::endl;
            std::cout << "         The planet has a strong magnetic field and numerous moons, with the four largest known as the Galilean moons." << std::endl << std::endl;
            std::cout << "         Jupiter experiences powerful atmospheric phenomena, including lightning and intense winds." << std::endl << std::endl;
            std::cout << "         Studying Jupiter provides insights into planetary formation and the dynamics of gas giants." << std::endl << std::endl;
            std::cout << "         Its average distance from the Sun is about 484 million miles (778 million kilometers)." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#(((((##@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#(#/((((((&#%@@
                                    @@@@@@@@@@@@@@@@@@@%##((((/(((#%@@@&&&@&&#(/#&@@@@
                                    @@@@@@@@@@@@@@@@%((////*****///(((%@@@&#/%#@@@@@@@
                                    @@@@@@@@@@@@@@#(///**************/(&%/(#@@@@@@@@@@
                                    @@@@@@@@@@@@@#/*****,,,,,**,,,,*#%(((@@@@@@@@@@@@@
                                    @@@@@@@@@@@@&//****,,**,...,,#(////(#@@@@@@@@@@@@@
                                    @@@@@@@@@@@@#(/**/*,,....*&(//****/(@@@@@@@@@@@@@@
                                    @@@@@@@@@#%(#(/*,,,,,/&(//**,***//(@@@@@@@@@@@@@@@
                                    @@@@@@@(/(&@@@@((%&(///**,**,**/#@@@@@@@@@@@@@@@@@
                                    @@@@%#/(#&&&&%(((((//*/*////(%@@@@@@@@@@@@@@@@@@@@
                                    @@%#%/((((/#(#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @%#((((#&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Saturn, the sixth planet from the Sun, is known for its stunning ring system." << std::endl << std::endl;
            std::cout << "         It is a gas giant with a thick atmosphere primarily composed of hydrogen and helium." << std::endl << std::endl;
            std::cout << "         Saturn's rings are made up of icy particles and debris, forming a complex and beautiful structure." << std::endl << std::endl;
            std::cout << "         The planet has a unique hexagonal-shaped storm at its north pole, known as the 'hexagon'." << std::endl << std::endl;
            std::cout << "         Saturn has numerous moons, with Titan being the largest and known for its dense atmosphere." << std::endl << std::endl;
            std::cout << "         It experiences strong winds and intense lightning storms in its atmosphere." << std::endl << std::endl;
            std::cout << "         Studying Saturn helps scientists understand planetary formation and the dynamics of ring systems." << std::endl << std::endl;
            std::cout << "         Its average distance from the Sun is about 886 million miles (1.4 billion kilometers)." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@%(((#&@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@,.........    .....,@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@*.,.....                ...@@@@@@@@@@@@
                                    @@@@@@@@@*,,,.....                   ...,@@@@@@@@@
                                    @@@@@@@/*,,,......                    ....(@@@@@@@
                                    @@@@@@/**,,........                   ....,,@@@@@@
                                    @@@@@#/*,,,,.........                 .....,*@@@@@
                                    @@@@@(/**,,,..............           .....,,,@@@@@
                                    @@@@@(/***,,,,...........................,,,,%@@@@
                                    @@@@@%(/***,,,,,,,,.....................,,,,*@@@@@
                                    @@@@@@#(/****,,,,,,,,,...............,,,,,**/@@@@@
                                    @@@@@@@#(//*****,,,,,,,,,,,,,,,,,,,,,,,,***/@@@@@@
                                    @@@@@@@@&#(///*****,,,,,,,,,,,,,,,,*****//(@@@@@@@
                                    @@@@@@@@@@&#((////*******************///(@@@@@@@@@
                                    @@@@@@@@@@@@@%##(((////////////////(((#@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@&%###(((((((((###%@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Uranus, the seventh planet from the Sun, is an ice giant with a distinct blue-green color." << std::endl << std::endl;
            std::cout << "         It has a mostly hydrogen and helium atmosphere, with traces of methane that give it its color." << std::endl << std::endl;
            std::cout << "         Uranus' unique feature is its extreme axial tilt, causing it to rotate on its side." << std::endl << std::endl;
            std::cout << "         The planet has a system of faint rings and a set of moons, the largest of which is Titania." << std::endl << std::endl;
            std::cout << "         Uranus experiences strong winds and extreme seasons due to its axial tilt." << std::endl << std::endl;
            std::cout << "         Studying Uranus provides insights into the dynamics of ice giants and planetary evolution." << std::endl << std::endl;
            std::cout << "         Its average distance from the Sun is about 1.8 billion miles (2.9 billion kilometers)." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@&%%%%%%%%%%%&&@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@%###((#########%%%%%%&&&@@@@@@@@@@@@@
                                    @@@@@@@@@@%#################%%%%%%%%&&&&@@@@@@@@@@
                                    @@@@@@@@%#######(#(((((((#######%%%%%&&&&@@@@@@@@@
                                    @@@@@@%#####(((((((((((((((((#####%%%%%&&&&@@@@@@@
                                    @@@@@%####((((((((((((((((((((#####%%%%%&&&@@@@@@@
                                    @@@@%####((((((((/((((((((/(((((####%%%%%&&&@@@@@@
                                    @@@@%###(((((((((((((((/############%%%%%&&&@@@@@@
                                    @@@%%###(((((((((((((((((((((((######%%%%&&&@@@@@@
                                    @@@&%####((((((((((((((((((((######%%%%%%&&&@@@@@@
                                    @@@@%#####((((((((((((((##########%%%%%&&&&@@@@@@@
                                    @@@@&%%#########################%%%%%%&&&&&@@@@@@@
                                    @@@@@&%%%##%##%########%%%%%%%%%%%%%&&&&&@@@@@@@@@
                                    @@@@@@@%%%%%%%%%%%%%%%%%%%%%%%%%&&&&&&&@@@@@@@@@@@
                                    @@@@@@@@@&%%%%%%%%%######%%%%%%&&&&&&@@@@@@@@@@@@@
                                    @@@@@@@@@@@&&&&%%%%%%%%%%%%%%&&&&&@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Neptune, the eighth and farthest planet from the Sun, is a deep blue gas giant." << std::endl << std::endl;
            std::cout << "         It has a thick atmosphere composed primarily of hydrogen, helium, and methane." << std::endl << std::endl;
            std::cout << "         Neptune's atmosphere features the fastest winds in the Solar System, reaching speeds of up to 1,300 mph." << std::endl << std::endl;
            std::cout << "         The planet has a system of faint rings and a set of moons, with Triton being the largest." << std::endl << std::endl;
            std::cout << "         Neptune's bluish color is due to the presence of methane in its atmosphere." << std::endl << std::endl;
            std::cout << "         Studying Neptune provides insights into the outer reaches of the Solar System and planetary dynamics." << std::endl << std::endl;
            std::cout << "         Its average distance from the Sun is about 2.8 billion miles (4.5 billion kilometers)." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@&%%%%%&@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@#((//**,,,***/((#%%&@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@(/**,.,,............,*/(%&@@@@@@@@@@@
                                    @@@@@@@@@@&(***...(.#/,,( ,, , .,.**((##&@@@@@@@@@
                                    @@@@@@@@@(/*((*/###*,,///* ..####/(######&&@@@@@@@
                                    @@@@@@@@(((//*/.,.*(((((((###*/,*/####(%#(%&@@@@@@
                                    @@@@@@@(((((/////*/**,*,,/((((((((/**(#%%#%%@@@@@@
                                    @@@@@@@((((//(./  ,,.*,,.***//*,///(##%%%%%%&@@@@@
                                    @@@@@@@((////////**,*,****////**/(((*((#(%%&&@@@@@
                                    @@@@@@@(((/(///*****/*,,*/*,,,******/*/(##&&&@@@@@
                                    @@@@@@@@(((((//*,,,,***//**//*////**//((##&&@@@@@@
                                    @@@@@@@@@((///*///*******/(/*/,(****//(##%&@@@@@@@
                                    @@@@@@@@@@(///**#,,,,,(*,,,,,#,,,,,**/(#%&@@@@@@@@
                                    @@@@@@@@@@@@#/*,,/...,,,. ....,..,*((#%&@@@@@@@@@@
                                    @@@@@@@@@@@@@@@#(/***/*/....,,**/(#%&@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@%%######%%%&@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Kepler-186f is an exoplanet orbiting within the habitable zone of the red dwarf star Kepler-186." << std::endl << std::endl;
            std::cout << "         It is located about 582 light-years away from Earth in the constellation Cygnus." << std::endl << std::endl;
            std::cout << "         Kepler-186f is roughly the same size as Earth and receives a similar amount of sunlight." << std::endl << std::endl;
            std::cout << "         It is considered a potentially habitable exoplanet, although much about its atmosphere and" << std::endl << std::endl;
            std::cout << "         surface remains unknown. Studying Kepler-186f provides insights into the diversity of planetary" << std::endl << std::endl;
            std::cout << "         systems beyond our own." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@,.,,,..,,. .,,*@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@&*,,,,,,,.**,,,,.,,,,,@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@&,***,((,,,,*/***,,,*,,,*,@@@@@@@@@@@@
                                    @@@@@@@@@@@/*****(***,*,*,**,********,,%@@@@@@@@@@
                                    @@@@@@@@@@%(///*/**//***/****//**///****@@@@@@@@@@
                                    @@@@@@@@@@(#((#(/((//(//((////(/(///////(@@@@@@@@@
                                    @@@@@@@@@@######(##((##%(#((/(((((((((((#@@@@@@@@@
                                    @@@@@@@@@@@######(((#((&#(((((###((((#((@@@@@@@@@@
                                    @@@@@@@@@@@@######(#((###((&%(((/((((((@@@@@@@@@@@
                                    @@@@@@@@@@@@@#######(##(###(&#/((((((#@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@&%############(((((#@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@&%%%%#######@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Proxima Centauri b orbits within the habitable zone of the red dwarf star Proxima Centauri." << std::endl << std::endl;
            std::cout << "         It's the closest exoplanet to Earth, about 4.24 light-years away in the constellation Centaurus." << std::endl << std::endl;
            std::cout << "         With a mass similar to Earth's, it orbits in the habitable zone where liquid water could exist." << std::endl << std::endl;
            std::cout << "         Proxima Centauri b is potentially Earth-like, but much about its atmosphere and surface remains unknown." << std::endl << std::endl;
            std::cout << "         Studying it provides insights into habitable worlds around low-mass stars." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@*,,.,**,,/***(((/#@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@,.,..*,..,*....,//#*%#(#%%@@@@@@@@@@@@
                                    @@@@@@@@@/.   .  *(*... .,*,*(,*(#/(/#%&%@@@@@@@@@
                                    @@@@@@@,.. .*,,.,. .(/ ....,.,,*((/(#(####&@@@@@@@
                                    @@@@@&,. .. .,. ..,*.*,,#.,.,,,*/*//*#(((#%&@@@@@@
                                    @@@@/. ,/, ,*(....,,. ..,,,,,**/,/*((((#%%%%%@@@@@
                                    @@@@/.,/.*.*,,*,..*.,((,,,,//,,(//((/((&%#%&&@@@@@
                                    @@@%.,/.((*,*,..//*,*****,*,((//((((&%(##&%&&@@@@@
                                    @@@/**,,,.....*,,(/,,/,*(#*#***((##((##%&#%%&&@@@@
                                    @@@/#*,/..*/,..,,*.,,,*,(//%#(/(%((#(%%%&%%%&@@@@@
                                    @@@@(((*((,//(/**/(***%/##/*(/((((&%#%&%%&&@@@@@@@
                                    @@@@%&(/%%(#/(%%((&(/*/(#((&(((###&&&%%%&&@@@@@@@@
                                    @@@@@&%#(((((%#//((#/((#(#(#%%%#(%#%&&%@@@@@@@@@@@
                                    @@@@@@@%%%#((##(####(/%##%%%%%&%%&%&&@&@@@@@@@@@@@
                                    @@@@@@@@@&####&%%%%%%&&%%&&%%%%%&&&@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@%%&%#&&%%%%&@&&&&@&&&@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         TRAPPIST-1e is an exoplanet located within the habitable zone of the ultracool dwarf star TRAPPIST-1." << std::endl << std::endl;
            std::cout << "         It is approximately 39 light-years away from Earth in the constellation of Aquarius." << std::endl << std::endl;
            std::cout << "         TRAPPIST-1e is similar in size to Earth and receives a comparable amount of energy from its star." << std::endl << std::endl;
            std::cout << "         It is one of the seven known planets orbiting TRAPPIST-1 and is considered a potentially habitable exoplanet." << std::endl << std::endl;
            std::cout << "         Studying TRAPPIST-1e provides valuable insights into the prevalence of habitable environments in our galaxy." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@%@@@@@@&&&%%%%&&&&&&@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@&%(((((#((#%%%%%&&&@@&&@@@%@@@@@@@@@@
                                    @@@@@@@@@&&%////(((######%##%#%&&&@&@@@@@@@@@@@@@@
                                    @@@@@@@@%#/*/,*(((///(###(###%&&&@@@@@@@@@@@@@@@@@
                                    @@@@@@&#*****///(//(/#%###%%%%&&&@&@@@@@@@@@@@@@@@
                                    @@@@@&#/****/////*/((((#((###%%&&&&&@@@@@@@@@@@@@@
                                    @@@@&#/**,,,*,//*(*#(#(((%(%%%&&&&&&&&@@@@@@@@@@@@
                                    @@@@#***(//,*,,(*,*((/#%#%#%%#&&&&&&@@@@@@@@@@@@@@
                                    @@@&%//****/,,,,****///#/#%%%%%&&%&&&@@@@@@@@@@@@@
                                    @@@&%****,*,///*/***/(###%%#%%%&%&&&@@@&@@@@@@@@@@
                                    @@@@&#/**/**,*((*//###(#(##%%%%&&&@&@&@@@@@@@@@@@@
                                    @@@@@&#**/*//((((((((/(((##%&&&%&&@@@@@@@@@@@@@@@@
                                    @#@@@@&#//*/*/*(#(//((#(/%#%%%&&&&@@@@@@@@@@@@@@@@
                                    @@@@@@@&&#(**((//*//(((((#%#%%&&&@&@@@@@@@@@@@@@@@
                                    @@@@@@@@@@&%//////(((((##%%&&&&&&&@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@&%/(((/(###%%%&&&@@@@@@@@%@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@&&&%%%%&&@@&&@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         HD 219134 b is an exoplanet orbiting the star HD 219134, located in the constellation of Cassiopeia." << std::endl << std::endl;
            std::cout << "         It is approximately 21 light-years away from Earth." << std::endl << std::endl;
            std::cout << "         HD 219134 b is classified as a super-Earth, with a mass about 4.5 times that of Earth." << std::endl << std::endl;
            std::cout << "         It orbits very close to its star, completing one revolution in just 3 days." << std::endl << std::endl;
            std::cout << "         Studying HD 219134 b provides insights into the diversity of exoplanetary systems and planet formation." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@%#####(((#####@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@##((((((////(((((((##@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@%###(((((((((((((((((((###@@@@@@@@@@@@
                                    @@@@@@@@@@@%%##(((((((((((((((((((####%%@@@@@@@@@@
                                    @@@@@@@@@@%%%#######((((((((((((#######%%@@@@@@@@@
                                    @@@@@@@@@&%%%###((((((((((((((((((#####%%@@@@@@@@@
                                    @@@@@@@@@&&%%%%#####################%%%%&@@@@@@@@@
                                    @@@@@@@@@@&&%%%%%%################%%%%%&&@@@@@@@@@
                                    @@@@@@@@@@@&%%%%###################%%%&&@@@@@@@@@@
                                    @@@@@@@@@@@@@&&&&%%%%%%%%%%%%%%%%%&&&&@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@&&&&&&&&%%%&&&&&&&&@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@&&&&&&&&&@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         WASP-121b is an exoplanet orbiting the star WASP-121, located in the constellation of Puppis." << std::endl << std::endl;
            std::cout << "         It is approximately 850 light-years away from Earth." << std::endl << std::endl;
            std::cout << "         WASP-121b is a hot Jupiter exoplanet, with a mass about 1.18 times that of Jupiter." << std::endl << std::endl;
            std::cout << "         It orbits very close to its star, with a period of just 1.27 days." << std::endl << std::endl;
            std::cout << "         Studying WASP-121b provides insights into the extreme conditions of close-in exoplanets." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@%##%%#((((((##%%&@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@%(//(/#%%((%*%%#(#%&&&@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@%(##/((*,/#%##%%%%%*/(%%&&@@@@@@@@@@@@
                                    @@@@@@@@@@@###**(((/(.(,/#.,*(%&&&&((#%&@@@@@@@@@@
                                    @@@@@@@@@@//,#(/((((,* ,,((#%%&&&/((*&@@%@@@@@@@@@
                                    @@@@@@@@@#%#(##(#((#(###%%##%(*&%,&(&&&&&@@@@@@@@@
                                    @@@@@@@@@%/(.,(/////(##%((/((##/%%&&&&%%%@@@@@@@@@
                                    @@@@@@@@@@%(..(/*///((((((((#..%%%%&&&%%&@@@@@@@@@
                                    @@@@@@@@@@#%%&%#/(*/(((######,,/#*%&&&#%&@@@@@@@@@
                                    @@@@@@@@@@@%*/(((/*(((  ,(#(,*..&%%%&((&@@@@@@@@@@
                                    @@@@@@@@@@@@@(*,,//.(/((((*/#,*#%%&&&@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@/**,,,,,,/##%%%%%#&@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@(//%(//(%%@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         K2-18b is an exoplanet orbiting the red dwarf star K2-18, located in the constellation of Leo." << std::endl << std::endl;
            std::cout << "         It is approximately 124 light-years away from Earth." << std::endl << std::endl;
            std::cout << "         K2-18b is classified as a super-Earth, with a mass about 8.6 times that of Earth." << std::endl << std::endl;
            std::cout << "         It orbits within the habitable zone of its star, where liquid water could potentially exist." << std::endl << std::endl;
            std::cout << "         Studying K2-18b provides insights into the potential habitability of exoplanets." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@%%%###%@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@&%(///*/***,#**(/(#@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@&#(/***,,,*(#,%*(%%#/((##@@@@@@@@@@@@
                                    @@@@@@@@@@@&&(%#&*&*#&*,..,,%%(%,/(/*%/%@@@@@@@@@@
                                    @@@@@@@@@@&#(#/&**&&,,#%,%&,,(,, ..,(/(/#&@@@@@@@@
                                    @@@@@@@@@&#((/**,,/,&*(..  (.   /#(..*%*(/@@@@@@@@
                                    @@@@@@@@@%(//*,,,../. .  . *  . *  ,(/#//#%@@@@@@@
                                    @@@@@@@@@%%(#//*,**..   ,       ,/.*/&*#(#(@@@@@@@
                                    @@@@@@@@@&%(%((#**//&*%%*( , .,. .%#,%%(/#%@@@@@@@
                                    @@@@@@@@@@%#%(#&/#(*#*%,%,,(,(.#*%,%/*,##&@@@@@@@@
                                    @@@@@@@@@@@%%#%(((*(*,,&*****(.#,,*,,/(%%@@@@@@@@@
                                    @@@@@@@@@@@@@&%&(((%//*/%#%%%**/*,***/#@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@&&&&#/#%&%%%(&(&%#(/#%@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@&%%&&%#%#&%%&&@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         TRAPPIST-1f is an exoplanet orbiting within the habitable zone of the ultracool dwarf star TRAPPIST-1." << std::endl << std::endl;
            std::cout << "         It is approximately 39 light-years away from Earth in the constellation of Aquarius." << std::endl << std::endl;
            std::cout << "         TRAPPIST-1f is similar in size to Earth and receives a comparable amount of energy from its star." << std::endl << std::endl;
            std::cout << "         It is one of the seven known planets orbiting TRAPPIST-1 and is considered a potentially habitable exoplanet." << std::endl << std::endl;
            std::cout << "         Studying TRAPPIST-1f provides valuable insights into the prevalence of habitable environments in our galaxy." << std::endl << std::endl;

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
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@%##%%%%&@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@#,*..*(((#//(((((%%@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@#(***/////////*/((/((##&@@@@@@&@@@@@
                                    @@@@@@@@@@@@%#(/(///###((((///////(((#%@@@@@@@@@@@
                                    @@@@@@@@@@@%%%%(((##(((((((//////////(%%@@@@@@@@@@
                                    @@@@@@@@@@&&#(&%(%%%%%%//////(/////(/(#%%@@@@@@@@&
                                    @@@@@@@@@@&&#&%%%&%%%%&%#(/(/(///////(#&&@@@@@@@@&
                                    @@@@@@@@@@&&&&###(%%%%&&%//((((((/(((#%%&@@@@@@@&@
                                    @@@@@@@@@@@&&&#((##%%%%%%/(/////(((##%%&@@@@@@@@&@
                                    @&@@@@@@@@@@&&%(((#%%%%&%%%#%%%%%#%&%&&@@@@@@@@&@@
                                    @@@@@@@@@@@@@@@&%%#%%%%&%%%&&%&&%&&&@@@@@@@@@@@&@@
                                    @@@@@@@@@@@@@@@@@@@&&&&&&&&@@@&&@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                                    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
)" << std::endl << std::endl;
            std::cout << "         Gliese 581g is an exoplanet orbiting the red dwarf star Gliese 581, located in the constellation Libra." << std::endl << std::endl;
            std::cout << "         It is approximately 20 light-years away from Earth." << std::endl << std::endl;
            std::cout << "         Gliese 581g is classified as a potentially habitable exoplanet, with a mass similar to Earth's." << std::endl << std::endl;
            std::cout << "         It is located within the habitable zone of its star, where liquid water could potentially exist." << std::endl << std::endl;
            std::cout << "         Studying Gliese 581g provides insights into the potential habitability of exoplanets." << std::endl << std::endl;

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