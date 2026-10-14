#include <iostream>
using namespace std;

class Robot {
private:
    int x;
    int y;
    int direction; // 0: North, 1: East, 2: South, 3: West
public:
    Robot();
    virtual void move() =  0;
    void moveforward();
    void turnLeft();
    void turnRight();
    void showPosition();
    void menyala() {
        cout << "Robot menyala!" << endl;
    }
};
class RobotNavigasi : public Robot {
public:

    void move() override {
        cout << "Robot navigasi bergerak menuju tujuan" << endl;
        Robot::moveforward();
    }
    void carijalur() {
        cout << "Robot mencari jalur" << endl;
    }
};

Robot::Robot() : x(0), y(0), direction(0) {}

void Robot::moveforward() {
    if(direction == 0) {
        y++;
    } else if(direction == 1) {
        x++;
    } else if(direction == 2) {
        y--;
    } else if(direction == 3) {
        x--;
    }
}

void Robot::turnLeft() {
    direction = (direction + 3) % 4;
}

void Robot::turnRight() {
    direction = (direction + 1) % 4;
}

void Robot::showPosition() {
    cout << "Robot berada di (" << x << ", " << y << ")" << endl;
}

int main() {
    
    RobotNavigasi robotsim;
    Robot* robot = &robotsim;
robot->move();
    robotsim.menyala();
    robotsim.carijalur();
    robotsim.showPosition();

    robotsim.move();
    robotsim.showPosition();

    robotsim.turnLeft();
    robotsim.move();
    robotsim.showPosition();
    robotsim.turnRight();
    robotsim.move();
    robotsim.showPosition();
    return 0;
}
