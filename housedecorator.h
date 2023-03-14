#ifndef HOUSEDECORATOR_H
#define HOUSEDECORATOR_H

#include "house.h"

class HouseDecorator : public House
{
protected:
    House *_house;
    int _cost;
    QLabel* _label;
    QString _pathFile;

public:
    HouseDecorator(House *house, int cost, QString pathFile, QLabel* label);
    ~HouseDecorator() override;
    void draw() override;
};

#endif // HOUSEDECORATOR_H
