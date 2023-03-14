#include "classichouse.h"

ClassicHouse::ClassicHouse(int cost, QString pathFile, QLabel* label) : _cost(cost), _label(label), _pathFile(pathFile)
{

}

void ClassicHouse::draw()
{
    _label->setPixmap(QPixmap(_pathFile));
}
