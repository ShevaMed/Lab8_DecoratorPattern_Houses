#ifndef HOUSE_H
#define HOUSE_H

#include <QString>
#include <QLabel>
#include <QPicture>

class House
{
public:
    virtual ~House();
    virtual void draw() = 0;
};

#endif // HOUSE_H
