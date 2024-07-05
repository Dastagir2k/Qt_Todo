#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStandardPaths>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAdd_clicked();

    void on_btnDelete_clicked();

    void on_btnDeeleteAll_clicked();

private:
    Ui::MainWindow *ui;
    QString path=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\todoFile.txt";
};
#endif // MAINWINDOW_H
