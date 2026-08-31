#pragma once

class ScoreManager
{
public:
    int currentScore = 0;
    int highScore = 0;

    void addPoints(int points);
    void resetScore();
    void updateHighScore();
    void displayScores();
};
