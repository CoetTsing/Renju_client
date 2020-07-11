#ifndef CHOOSEPAGE_H
#define CHOOSEPAGE_H

#include <QMainWindow>
#include <QMessageBox>
#include "gamepage.h"
#include "internetgamepage.h"

namespace Ui {
class ChoosePage;
}

class ChoosePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChoosePage(QWidget *parent = nullptr);
    ~ChoosePage();

private slots:
    void on_oneMachine_clicked();

    void on_twoMachine_clicked();

    void on_peopleVSMachine_clicked();

    void on_help_clicked();

private:
    Ui::ChoosePage *ui;
    GamePage* gamePage;
};

#endif // CHOOSEPAGE_H
