#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QVBoxLayout>
#include <QInputDialog>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), addButton(new QPushButton("Dodaj")),
    listWidget(new QListWidget), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    layout->addWidget(addButton);
    layout->addWidget(listWidget);
    setCentralWidget(centralWidget);

    connect(addButton, &QPushButton::clicked, this, &MainWindow::addItemToList);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addItemToList() {
    bool ok;
    QString text = QInputDialog::getText(this, "Dodaj osobę", "Imię i nazwisko:", QLineEdit::Normal,"", &ok);
    if (ok && !text.isEmpty()) {
        listWidget->addItem(text);
    }
}
