#ifndef CROWD_MOMENTUM_SYSTEM_H
#define CROWD_MOMENTUM_SYSTEM_H

#include <string>
#include <vector>

// Class for tracking and applying momentum
class MomentumMeter {
private:
    std::vector<int> history; // Changed from fixed array to vector
    int value;
    int threshold;

public:
    MomentumMeter(int t);

    void addMomentum(int points) {
        value += points;
        history.push_back(points); // store history safely
    }

    void reset() {
        value = 0;
        history.clear(); // reset history
    }

    void applyEffects();
    int getValue() { return value; }
    std::vector<int> getHistory() { return history; } // new method
};

#endif // CROWD_MOMENTUM_SYSTEM_H
