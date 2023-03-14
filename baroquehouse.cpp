#include "baroquehouse.h"

BaroqueHouse::BaroqueHouse(int cost, QString pathFile, QLabel* label) : _cost(cost), _label(label), _pathFile(pathFile)
{

}

void BaroqueHouse::draw()
{
    _label->setPixmap(QPixmap(_pathFile));
}
