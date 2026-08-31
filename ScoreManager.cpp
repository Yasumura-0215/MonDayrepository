#include "ScoreManager.h"
#include <iostream>

void ScoreManager::addPoints(int points)
{
    currentScore += points;
}

void ScoreManager::resetScore()
{
    currentScore = 0;
}

void ScoreManager::updateHighScore()
{
    if (currentScore > highScore)
    {
        highScore = currentScore;
    }
}

void ScoreManager::displayScores()
{
    std::cout << "現在のスコア: " << currentScore << std::endl;
    std::cout << "ハイスコア: " << highScore << std::endl;
}
