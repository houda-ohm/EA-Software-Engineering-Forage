#ifndef CROWD_MOMENTUM_SYSTEM_H
#define CROWD_MOMENTUM_SYSTEM_H

#include <string>

// Class for game events like touchdowns, interceptions, etc.
class GameEvent {
private:
    std::string type;
    int impact;

public:
    GameEvent(std::string t, int i);
    int getImpact();
    std::string getType();
};

// Class for tracking and applying momentum
class MomentumMeter {
private:
    int value;
    int threshold;

public:
    MomentumMeter(int t);
    void addMomentum(int points);
    void reset();
    void applyEffects();
    int getValue();
};

// Represents a football team
class Team {
private:
    std::string name;
    bool isHome;
    int confidence;

public:
    Team(std::string n, bool home);
    void updateConfidence(int delta);
    std::string getName();
    bool getIsHome();
};

// Represents the crowd and its influence
class Crowd {
private:
    int intensity;
    int noiseLevel;

public:
    Crowd();
    void cheer();
    void boo();
    void adjustNoise(int level);
    int getNoiseLevel();
};

#endif // CROWD_MOMENTUM_SYSTEM_H
