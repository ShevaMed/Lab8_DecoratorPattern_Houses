#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    template<typename T>
    void buildHouse(int houseCost, int poolCost, int garageCost,
                                QString pathFileHouse, QString pathFilePool, QString pathFileGarage,
                                QLabel *labHouse, QLabel *labPool, QLabel *labGarage);

private slots:
    void on_hi_techPushButton_clicked();

    void on_classicPushButton_clicked();

    void on_baroquePushButton_clicked();

    void on_poolCheckBox_clicked();

    void on_garageCheckBox_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
