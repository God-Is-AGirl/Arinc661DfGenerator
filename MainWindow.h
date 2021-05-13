#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    const uint16_t m_a661MagicNumber = 0xA661;
    const uint8_t m_libraryVersion = 0x00;
    const uint8_t m_suppVersion = 0x02;
    uint16_t m_appliIdent;
    uint16_t m_sizeOemFreeData;

};
#endif // MAINWINDOW_H
