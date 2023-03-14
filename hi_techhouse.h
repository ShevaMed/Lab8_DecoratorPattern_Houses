#ifndef HI_TECHHOUSE_H
#define HI_TECHHOUSE_H

#include "house.h"

class Hi_TechHouse : public House
{
    int _cost;
    QLabel* _label;
    QString _pathFile;

public:
    Hi_TechHouse(int cost, QString pathFile, QLabel *label);
    void draw() override;
};

#endif // HI_TECHHOUSE_H
