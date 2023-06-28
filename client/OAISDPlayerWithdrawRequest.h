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
 * OAISDPlayerWithdrawRequest.h
 *
 * 
 */

#ifndef OAISDPlayerWithdrawRequest_H
#define OAISDPlayerWithdrawRequest_H

#include <QJsonObject>

#include "OAISDPlayerWithdrawObject.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {
class OAISDPlayerWithdrawObject;

class OAISDPlayerWithdrawRequest : public OAIObject {
public:
    OAISDPlayerWithdrawRequest();
    OAISDPlayerWithdrawRequest(QString json);
    ~OAISDPlayerWithdrawRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAddress() const;
    void setAddress(const QString &address);
    bool is_address_Set() const;
    bool is_address_Valid() const;

    QString getPlayerId() const;
    void setPlayerId(const QString &player_id);
    bool is_player_id_Set() const;
    bool is_player_id_Valid() const;

    QList<OAISDPlayerWithdrawObject> getTokenObjects() const;
    void setTokenObjects(const QList<OAISDPlayerWithdrawObject> &token_objects);
    bool is_token_objects_Set() const;
    bool is_token_objects_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString address;
    bool m_address_isSet;
    bool m_address_isValid;

    QString player_id;
    bool m_player_id_isSet;
    bool m_player_id_isValid;

    QList<OAISDPlayerWithdrawObject> token_objects;
    bool m_token_objects_isSet;
    bool m_token_objects_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDPlayerWithdrawRequest)

#endif // OAISDPlayerWithdrawRequest_H
