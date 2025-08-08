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
    clickedBtn->setText(XorO ? "X" : "O");
    XorO = !XorO;
}

void MainWindow::checkWin()
{
    for (int i = 0;i < 3;++i)
    {
        // Rows
        if (!mybtns[i][0]->text().isEmpty() &&
            mybtns[i][0]->text() == mybtns[i][1]->text() &&
            mybtns[i][1]->text() == mybtns[i][2]->text())
        {
            QMessageBox::information(this, "Game Over", mybtns[i][0]->text() + " wins!");
            resetGame();
            return;
        }

        // Columns
        if (!mybtns[0][i]->text().isEmpty() &&
            mybtns[0][i]->text() == mybtns[1][i]->text() &&
            mybtns[1][i]->text() == mybtns[2][i]->text())
        {
            QMessageBox::information(this, "Game Over", mybtns[0][i]->text() + " wins!");
            resetGame();
            return;
        }

        // Diagonals
        if (!mybtns[0][0]->text().isEmpty() &&
            mybtns[0][0]->text() == mybtns[1][1]->text() &&
            mybtns[1][1]->text() == mybtns[2][2]->text())
        {
            QMessageBox::information(this, "Game Over", mybtns[0][0]->text() + " wins!");
            resetGame();
            return;
        }

        if (!mybtns[0][2]->text().isEmpty() &&
            mybtns[0][2]->text() == mybtns[1][1]->text() &&
            mybtns[1][1]->text() == mybtns[2][0]->text())
        {
            QMessageBox::information(this, "Game Over", mybtns[0][2]->text() + " wins!");
            resetGame();
            return;
        }

        bool drawOnScreen = true;
        for (int i = 0; i < 3 && drawOnScreen;i++)
        {
            for (int j = 0; j < 3 && drawOnScreen;j++)
            {
                if (mybtns[i][j]->text().isEmpty())
                {
                    drawOnScreen = false;
                }
            }
        }

        if (drawOnScreen)
        {
            QMessageBox::information(this,"Game over!","It's draw");
        }
    }
}

void MainWindow::resetGame()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            mybtns[i][j]->setText("");
        }
    }
    XorO = true; // X starts again
}
