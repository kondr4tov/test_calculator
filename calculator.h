//
// Created by Андрей Кондратов on 04.12.2021.
//

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>

enum operation {
    PLUS,
    MINUS,
    MULTIPLY,
    DIVISION
};

class Calculator : public QMainWindow {

    Q_OBJECT

public:

    QLineEdit* lineEdit = nullptr;
    QLineEdit* upLine = nullptr;

    Calculator(QWidget* parent = nullptr): QMainWindow(parent) {}

public slots:
    void add0() {
        lineEdit->setText(lineEdit->text() + "0");
        upLine->setText(upLine->text() + "0");
    };
    void add1() {
        lineEdit->setText(lineEdit->text() + "1");
        upLine->setText(upLine->text() + "1");
    };
    void add2() {
        lineEdit->setText(lineEdit->text() + "2");
        upLine->setText(upLine->text() + "2");
    };
    void add3() {
        lineEdit->setText(lineEdit->text() + "3");
        upLine->setText(upLine->text() + "3");
    };
    void add4() {
        lineEdit->setText(lineEdit->text() + "4");
        upLine->setText(upLine->text() + "4");
    };
    void add5() {
        lineEdit->setText(lineEdit->text() + "5");
        upLine->setText(upLine->text() + "5");
    };
    void add6() {
        lineEdit->setText(lineEdit->text() + "6");
        upLine->setText(upLine->text() + "6");
    };
    void add7() {
        lineEdit->setText(lineEdit->text() + "7");
        upLine->setText(upLine->text() + "7");
    };
    void add8() {
        lineEdit->setText(lineEdit->text() + "8");
        upLine->setText(upLine->text() + "8");
    };
    void add9() {
        lineEdit->setText(lineEdit->text() + "9");
        upLine->setText(upLine->text() + "9");
    };

    void plus() {
        firstVal = std::stoi(lineEdit->text().toStdString());
        lineEdit->setText("");
        upLine->setText(upLine->text() + "+");
        status = PLUS;
        }
    void minus() {
        firstVal = std::stoi(lineEdit->text().toStdString());
        lineEdit->setText("");
        upLine->setText(upLine->text() + "-");
        status = MINUS;

    }
    void mult() {
        firstVal = std::stoi(lineEdit->text().toStdString());
        lineEdit->setText("");
        upLine->setText(upLine->text() + "*");
        status = MULTIPLY;

    }
    void div() {
        firstVal = std::stoi(lineEdit->text().toStdString());
        lineEdit->setText("");
        upLine->setText(upLine->text() + "/");
        status = DIVISION;

    }
    void clear() {
        lineEdit->setText("");
        upLine->setText("");
    }
    void equal() {
        secondVal = std::stoi(lineEdit->text().toStdString());
        upLine->setText(upLine->text() + "=");

        if (status == PLUS) {
            lineEdit->setText(QString::number(firstVal + secondVal));
            upLine->setText(upLine->text() + lineEdit->text());
        }
        else if (status == MINUS) {
            lineEdit->setText(QString::number(firstVal - secondVal));
            upLine->setText(upLine->text() + lineEdit->text());
        }
        else if (status == MULTIPLY) {
            lineEdit->setText(QString::number(firstVal * secondVal));
            upLine->setText(upLine->text() + lineEdit->text());
        }
        else if (status == DIVISION) {
            if (secondVal == 0) {
                lineEdit->setText("ERROR! And test Git");
                upLine->setText("");
            }
            else {
                lineEdit->setText(QString::number(firstVal / secondVal));
                upLine->setText(upLine->text() + lineEdit->text());
            }
        }
    }

private:

    int firstVal = 0;
    int secondVal = 0;
    int status;
};


#endif //CALCULATOR_CALCULATOR_H
