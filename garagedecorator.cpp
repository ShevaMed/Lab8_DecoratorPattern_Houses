#include "garagedecorator.h"

GarageDecorator::GarageDecorator(House *house, int cost, QString pathFile, QLabel* label) : HouseDecorator(house, cost, pathFile, label)
{

}

void GarageDecorator::draw()
{
    HouseDecorator::draw();
    HouseDecorator::_label->setPixmap(QPixmap(HouseDecorator::_pathFile));
}
