#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(450,450);

    mybtns[0][0] = ui->btn1;
    mybtns[0][1] = ui->btn2;
    mybtns[0][2] = ui->btn3;
    mybtns[1][0] = ui->btn4;
    mybtns[1][1] = ui->btn5;
    mybtns[1][2] = ui->btn6;
    mybtns[2][0] = ui->btn7;
    mybtns[2][1] = ui->btn8;
    mybtns[2][2] = ui->btn9;

    for (int i = 0;i < 3;++i)
    {
        for (int j = 0;j < 3;++j)
        {
            connect(mybtns[i][j],&QPushButton::clicked,this,&MainWindow::handleButtons);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButtons()
{
    QPushButton *clickedBtn = qobject_cast<QPushButton*>(sender());
    if (!clickedBtn)
        return;

    if (!clickedBtn->text().isEmpty())
        return; // already clicked

    clickedBtn->setText(XorO ? "X" : "O");
    XorO = !XorO;
}
