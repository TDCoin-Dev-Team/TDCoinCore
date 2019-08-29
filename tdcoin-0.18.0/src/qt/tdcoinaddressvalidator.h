// Copyright (c) 2011-2014 The Tdcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TDCOIN_QT_TDCOINADDRESSVALIDATOR_H
#define TDCOIN_QT_TDCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class TdcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TdcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Tdcoin address widget validator, checks for a valid tdcoin address.
 */
class TdcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TdcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // TDCOIN_QT_TDCOINADDRESSVALIDATOR_H
