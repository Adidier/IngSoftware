// command.cpp
#include "command.h"

MoveCommand::MoveCommand(Tank& tank, void (Tank::*moveFunction)()) : tank(tank), moveFunction(moveFunction) {}

void MoveCommand::execute() {
    (tank.*moveFunction)();
}