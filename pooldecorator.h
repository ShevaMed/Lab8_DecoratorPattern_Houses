#ifndef POOLDECORATOR_H
#define POOLDECORATOR_H

#include "housedecorator.h"

class PoolDecorator : public HouseDecorator
{
public:
    PoolDecorator(House *house, int cost, QString pathFile, QLabel* label);
    void draw() override;
};

#endif // POOLDECORATOR_H
