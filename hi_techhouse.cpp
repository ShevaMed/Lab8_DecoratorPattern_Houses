#include "hi_techhouse.h"

Hi_TechHouse::Hi_TechHouse(int cost, QString pathFile, QLabel* label) : _cost(cost), _label(label), _pathFile(pathFile)
{

}

void Hi_TechHouse::draw()
{
    _label->setPixmap(QPixmap(_pathFile));
}
