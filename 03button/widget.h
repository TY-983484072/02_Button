#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QDebug"

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    void Cli();
};

#endif // WIDGET_H
