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
    int key = -1;
private slots:
    void on_crypt_toggled();

    void on_uncrypt_toggled();

    void on_print_toggled();

    void on_del_toggled();

    void on_StartBtn_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
