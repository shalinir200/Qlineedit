#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *event);
private:
    Ui::MainWindow *ui;
    int value;
    int value1;
    int value2;
    int value3;

    bool MousePressed;

};

#endif // MAINWINDOW_H
