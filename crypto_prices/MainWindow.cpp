#include "MainWindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	QHBoxLayout *mainLayout = new QHBoxLayout;
	
	button = new QPushButton ("����� �� ��� ������!", this);
	QObject::connect(button, &QPushButton::clicked, this, &MainWindow::handlebutton);

	mainLayout->addWidget(button);

	QWidget *window = new QWidget();
	window->setLayout(mainLayout);
	setCentralWidget(window);
}

void MainWindow::handlebutton()
{
	QMessageBox* messbox = new QMessageBox("�� ������ �� ������!", "�������� � ����� �������", QMessageBox::Information, QMessageBox::Ok, QMessageBox::NoButton, QMessageBox::NoButton);
	int retv = messbox->exec();
	delete messbox;
}

MainWindow::~MainWindow()
{
}
