#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "house.h"
#include "baroquehouse.h"
#include "classichouse.h"
#include "hi_techhouse.h"
#include "garagedecorator.h"
#include "pooldecorator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

template<typename T>
void MainWindow::buildHouse(int houseCost, int poolCost, int garageCost,
                            QString pathFileHouse, QString pathFilePool, QString pathFileGarage,
                            QLabel *labHouse, QLabel *labPool, QLabel *labGarage)
{
    labHouse->clear();
    labPool->clear();
    labGarage->clear();

    House *house = new T(houseCost, pathFileHouse, labHouse);

    if (ui->garageCheckBox->isChecked())
        house = new GarageDecorator(house, garageCost, pathFileGarage, labGarage);

    if (ui->poolCheckBox->isChecked())
        house = new PoolDecorator(house, poolCost, pathFilePool, labPool);

    house->draw();
    delete house;
}


void MainWindow::on_hi_techPushButton_clicked()
{
    buildHouse<Hi_TechHouse>(1500000, 300000, 200000, "./images/Hi_TechHouse.jpg", "./images/pool.jpg", "./images/garage.jpg", ui->houseLabel, ui->poolLabel, ui->garageLabel);
}


void MainWindow::on_classicPushButton_clicked()
{
    buildHouse<ClassicHouse>(800000, 300000, 200000, "./images/ClassicHouse.jpg", "./images/pool.jpg", "./images/garage.jpg", ui->houseLabel, ui->poolLabel, ui->garageLabel);
}


void MainWindow::on_baroquePushButton_clicked()
{
    buildHouse<BaroqueHouse>(1200000, 300000, 200000, "./images/BaroqueHouse.jpg", "./images/pool.jpg", "./images/garage.jpg", ui->houseLabel, ui->poolLabel, ui->garageLabel);
}


void MainWindow::on_poolCheckBox_clicked()
{
    ui->houseLabel->clear();
    ui->poolLabel->clear();
    ui->garageLabel->clear();
}


void MainWindow::on_garageCheckBox_clicked()
{
    ui->houseLabel->clear();
    ui->poolLabel->clear();
    ui->garageLabel->clear();
}

