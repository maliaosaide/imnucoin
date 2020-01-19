// Copyright (c) 2011-2014 The Imnucoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef IMNUCOIN_QT_IMNUCOINADDRESSVALIDATOR_H
#define IMNUCOIN_QT_IMNUCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ImnucoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ImnucoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Imnucoin address widget validator, checks for a valid imnucoin address.
 */
class ImnucoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ImnucoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // IMNUCOIN_QT_IMNUCOINADDRESSVALIDATOR_H
