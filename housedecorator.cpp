#include "housedecorator.h"

HouseDecorator::HouseDecorator(House *house, int cost, QString pathFile, QLabel* label)
    : _house(house), _cost(cost), _label(label), _pathFile(pathFile)
{

}

HouseDecorator::~HouseDecorator()
{
    delete _house;
}

void HouseDecorator::draw()
{
    _house->draw();
}
