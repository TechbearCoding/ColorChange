#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QLabel* lbl[4];

    void initLabels();
    bool eventFilter(QObject *target, QEvent *event);
    void turnLabelColor(int labelNo);
};

#endif // MAINWINDOW_H
