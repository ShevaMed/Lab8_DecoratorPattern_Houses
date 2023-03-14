#include "pooldecorator.h"

PoolDecorator::PoolDecorator(House *house, int cost, QString pathFile, QLabel* label) : HouseDecorator(house, cost, pathFile, label)
{

}

void PoolDecorator::draw()
{
    HouseDecorator::draw();
    HouseDecorator::_label->setPixmap(QPixmap(HouseDecorator::_pathFile));
}
