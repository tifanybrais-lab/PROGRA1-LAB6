#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Lab6.h"

class Lab6 : public QMainWindow
{
    Q_OBJECT

public:
    Lab6(QWidget *parent = nullptr);
    ~Lab6();

private:
    void calcularTotal();
    void limpiarFormulario();
    Ui::Lab6Class ui;
};

