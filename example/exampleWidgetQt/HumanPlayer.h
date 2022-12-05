/**
 * @file 
 * @author 
 * @brief 
 * @version 
 * @date 
 * 
 * @copyright Copyright (c) 2022
 */

#pragma once
#include "IPlayer.h"
#include "IBoardGame.h"
#include <string>

class HumanPlayer : public IPlayer {
 public:
    HumanPlayer();

    HumanPlayer(char letter, int playerNum);

    void clickTile(int x, int y, IBoardGame* game);

    char getLetter();

    int getPlayerNum();

    std::string getType();
};
