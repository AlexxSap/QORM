#ifndef TCREATE_H
#define TCREATE_H

#include <QObject>

class TCreate : public QObject
{
    Q_OBJECT
public:
    explicit TCreate(QObject *parent = nullptr);

private slots:
    void TestSimpleCreateTable();
    void TestSimpleCreateTableOnBase();
};

#endif // TCREATE_H
