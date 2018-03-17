#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>

class MainWindow : public QMainWindow
{
public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

	QHBoxLayout *mainLayout;

private slots:
    void handlebutton();

private:
	QPushButton *button;
};

