#include "widget.h"
#include "QPushButton"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton * btn1 = new QPushButton("点击",this);
    resize(600,400);
    connect(btn1,&QPushButton::clicked,this,&Widget::Cli);
}

Widget::~Widget()
{
    
}

void Widget::Cli()
{
    qDebug()<<"点什么点";
}
