#ifndef QIMAGEPROPERTY_H
#define QIMAGEPROPERTY_H

#include "qabstractproperty.h"
#include <QLabel>

class QImageProperty : public QAbstractProperty
{
    Q_OBJECT
public:
    Q_INVOKABLE QImageProperty(QAbstractProperty* parent = NULL);
    QIcon get_value_icon();
    QString get_value_text();
};

#endif
