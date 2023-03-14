#ifndef CLASSICHOUSE_H
#define CLASSICHOUSE_H

#include "house.h"

class ClassicHouse : public House
{
    int _cost;
    QLabel* _label;
    QString _pathFile;

public:
    ClassicHouse(int cost, QString pathFile, QLabel* label);
    void draw() override;
};

#endif // CLASSICHOUSE_H
