/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-07-25T00:59:12Z
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISDPlayerWalletGetResponse_wallet_inner.h
 *
 * 
 */

#ifndef OAISDPlayerWalletGetResponse_wallet_inner_H
#define OAISDPlayerWalletGetResponse_wallet_inner_H

#include <QJsonObject>

#include "OAISDPlayerWalletGetResponse_wallet_inner_monies_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {
class OAISDPlayerWalletGetResponse_wallet_inner_monies_inner;

class OAISDPlayerWalletGetResponse_wallet_inner : public OAIObject {
public:
    OAISDPlayerWalletGetResponse_wallet_inner();
    OAISDPlayerWalletGetResponse_wallet_inner(QString json);
    ~OAISDPlayerWalletGetResponse_wallet_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getBlockchain() const;
    void setBlockchain(const QString &blockchain);
    bool is_blockchain_Set() const;
    bool is_blockchain_Valid() const;

    QString getAddress() const;
    void setAddress(const QString &address);
    bool is_address_Set() const;
    bool is_address_Valid() const;

    QList<OAISDPlayerWalletGetResponse_wallet_inner_monies_inner> getMonies() const;
    void setMonies(const QList<OAISDPlayerWalletGetResponse_wallet_inner_monies_inner> &monies);
    bool is_monies_Set() const;
    bool is_monies_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString blockchain;
    bool m_blockchain_isSet;
    bool m_blockchain_isValid;

    QString address;
    bool m_address_isSet;
    bool m_address_isValid;

    QList<OAISDPlayerWalletGetResponse_wallet_inner_monies_inner> monies;
    bool m_monies_isSet;
    bool m_monies_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDPlayerWalletGetResponse_wallet_inner)

#endif // OAISDPlayerWalletGetResponse_wallet_inner_H
