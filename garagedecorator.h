#ifndef GARAGEDECORATOR_H
#define GARAGEDECORATOR_H

#include "housedecorator.h"

class GarageDecorator : public HouseDecorator
{
public:
    GarageDecorator(House *house, int cost, QString pathFile, QLabel* label);
    void draw() override;
};

#endif // GARAGEDECORATOR_H
