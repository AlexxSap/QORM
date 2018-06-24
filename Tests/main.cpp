#include <QCoreApplication>
#include <QtTest/QTest>

#include "TSelect.h"
#include "TCommon.h"
#include "TBase.h"
#include "TCreate.h"

#include <QDebug>

template <class TestClass>
int runTest(const QStringList &args = QStringList())
{
    TestClass test;
    return QTest::qExec(&test, args);
}

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    int tests = 0;

    tests += runTest<TCommon>();
    tests += runTest<TSelect>();
    tests += runTest<TBase>();
    tests += runTest<TCreate>();

    return tests;
}
