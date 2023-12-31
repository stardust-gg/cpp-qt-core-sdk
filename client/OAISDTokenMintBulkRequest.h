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
 * OAISDTokenMintBulkRequest.h
 *
 * 
 */

#ifndef OAISDTokenMintBulkRequest_H
#define OAISDTokenMintBulkRequest_H

#include <QJsonObject>

#include "OAISDTokenMintBulkTokenObject.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {
class OAISDTokenMintBulkTokenObject;

class OAISDTokenMintBulkRequest : public OAIObject {
public:
    OAISDTokenMintBulkRequest();
    OAISDTokenMintBulkRequest(QString json);
    ~OAISDTokenMintBulkRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPlayerId() const;
    void setPlayerId(const QString &player_id);
    bool is_player_id_Set() const;
    bool is_player_id_Valid() const;

    QList<OAISDTokenMintBulkTokenObject> getTokenObjects() const;
    void setTokenObjects(const QList<OAISDTokenMintBulkTokenObject> &token_objects);
    bool is_token_objects_Set() const;
    bool is_token_objects_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString player_id;
    bool m_player_id_isSet;
    bool m_player_id_isValid;

    QList<OAISDTokenMintBulkTokenObject> token_objects;
    bool m_token_objects_isSet;
    bool m_token_objects_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDTokenMintBulkRequest)

#endif // OAISDTokenMintBulkRequest_H
