#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QProcess>
#include <QDebug>
#include <QTextEdit>
#include <QFileDialog>
#include <QString>
#include <QTimer>
#include <QtAlgorithms>
#include <QTime>
#include <QIcon>
#include <QSize>
#include <QMouseEvent>
#include <QPoint>
#include <QHBoxLayout>

#include "datas.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    //void on_pushButton_6_clicked();

    //void on_pushButton_5_clicked();

    //void on_pushButton_7_clicked();

    //void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void back_message_slots();  //视频进度条槽函数

    void timeDone();  //定时槽函数

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void  on_pushButton_5_clicked();

    //void on_pushButton_6_clicked();

    //void on_pushButton_10_clicked();

    //void on_pushButton_11_clicked();

    //void on_widget_destroyed();

    //void on_label_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;

    QProcess *mplayerProcess;  //
    QTimer *timeClock;

    bool m_bPressed;  //鼠标事件
    QPoint m_point;  //鼠标坐标

};
#endif // MAINWINDOW_H
