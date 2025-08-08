#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVector>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum WhoIsPlayingNow
{
    PlayerX,
    PlayerO
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    bool XorO; // turn the X or O to every state
    QPushButton* mybtns[3][3];
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void handleButtons();

};
#endif // MAINWINDOW_H
