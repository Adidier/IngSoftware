// command.h
#ifndef COMMAND_H
#define COMMAND_H

#include "tank.h" 
class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};

class MoveCommand : public Command {
private:
    Tank& tank;
    void (Tank::*moveFunction)();

public:
    MoveCommand(Tank& tank, void (Tank::*moveFunction)());
    void execute() override;
};

#endif // COMMAND_H