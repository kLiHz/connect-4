#include "C4_Text_Interface.hpp"

int main()
{
    auto game_instance = std::make_shared<Connect4>();

    C4_Text_Interface TextUI_instance(game_instance);

    TextUI_instance.play();
    
    return 0;
}
