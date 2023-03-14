#ifndef BAROQUEHOUSE_H
#define BAROQUEHOUSE_H

#include "house.h"

class BaroqueHouse : public House
{
    int _cost;
    QLabel* _label;
    QString _pathFile;

public:
    BaroqueHouse(int cost, QString pathFile, QLabel* label);
    void draw() override;
};

#endif // BAROQUEHOUSE_H
