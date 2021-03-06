/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c ClientDbusIf -p clientdbusif.h:clientdbusif.cpp ./daemon/com.smack.demo.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CLIENTDBUSIF_H_1320235961
#define CLIENTDBUSIF_H_1320235961

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.smack.demo
 */
class ClientDbusIf: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.smack.demo"; }

public:
    ClientDbusIf(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ClientDbusIf();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> setState(int state)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(state);
        return asyncCallWithArgumentList(QLatin1String("setState"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void stateChanged(int state);
};

namespace com {
  namespace smack {
    typedef ::ClientDbusIf demo;
  }
}
#endif
