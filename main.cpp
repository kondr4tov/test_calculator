#include <QApplication>
#include <QPushButton>
#include "./ui_calculator.h"
#include "calculator.h"

double calcVal = 0.0;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Calculator window(nullptr);
    Ui::Calculator calculator;
    calculator.setupUi(&window);

    window.lineEdit = calculator.lineEdit;
    window.upLine = calculator.upLine;

    calculator.lineEdit->setText(QString::number(calcVal));


    window.resize(480, 640);
    window.show();
    return QApplication::exec();
}
