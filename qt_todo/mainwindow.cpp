#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QFile>
#include<QStandardPaths>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Dastagir_Todo_App");

    // Load the todo list
    // these basically is where when we close the application it will store in a location
    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\todoFile.txt");

    // QIODevice :- This mode opens the file for both reading and writing. If the file does not exist,
    //it will be created. If the file exists, it will be opened and its contents will remain unchanged.
    if (!file.open(QIODevice::ReadWrite)) {
        qWarning("Couldn't open file.");
        return;
    }
    QTextStream in(&file);
    // when we open the application again it will display in widget from that file
    while(!in.atEnd()){
        QListWidgetItem* item= new QListWidgetItem(in.readLine(),ui->listWidget);
        ui->listWidget->addItem(item);
        item->setSizeHint(QSize(item->sizeHint().width(), 30));
        item->setFlags(item->flags()|Qt::ItemIsEditable);
    }
    file.close();

}
MainWindow::~MainWindow()
{
    delete ui;
        // DISPLAY the todo list

    // these basically is where when we close the application it will store in a location
    QFile file(path);

    // QIODevice :- This mode opens the file for both reading and writing. If the file does not exist,
    //it will be created. If the file exists, it will be opened and its contents will remain unchanged.
    if (!file.open(QIODevice::ReadWrite)) {
        qWarning("Couldn't open file.");
        return;
    }
    QTextStream out(&file);
    // when we open the application again it will display in widget from that file
    for (int i = 0; i < ui->listWidget->count(); ++i) {
        out << ui->listWidget->item(i)->text()<<"\n";
    }
    file.close();

}

void MainWindow::on_btnAdd_clicked()
{
    QListWidgetItem* item= new QListWidgetItem(ui->txtTask->text(),ui->listWidget);
    ui->txtTask->setPlaceholderText("Enter the task");
    ui->listWidget->addItem(item);
    item->setSizeHint(QSize(item->sizeHint().width(), 30));
    item->setFlags(item->flags()|Qt::ItemIsEditable);
    ui->txtTask->clear();
    ui->txtTask->setFocus();

}


void MainWindow::on_btnDelete_clicked()
{
    QListWidgetItem* item=ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}


void MainWindow::on_btnDeeleteAll_clicked()
{
    ui->listWidget->clear();
}
