/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-06-15T19:52:41Z
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISDPlayerGetInventoryResponse.h
 *
 * This is the data output json model
 */

#ifndef OAISDPlayerGetInventoryResponse_H
#define OAISDPlayerGetInventoryResponse_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {

class OAISDPlayerGetInventoryResponse : public OAIObject {
public:
    OAISDPlayerGetInventoryResponse();
    OAISDPlayerGetInventoryResponse(QString json);
    ~OAISDPlayerGetInventoryResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getTokenId() const;
    void setTokenId(const qint32 &token_id);
    bool is_token_id_Set() const;
    bool is_token_id_Valid() const;

    QString getAmount() const;
    void setAmount(const QString &amount);
    bool is_amount_Set() const;
    bool is_amount_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 token_id;
    bool m_token_id_isSet;
    bool m_token_id_isValid;

    QString amount;
    bool m_amount_isSet;
    bool m_amount_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDPlayerGetInventoryResponse)

#endif // OAISDPlayerGetInventoryResponse_H