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
 * OAISDTokenTransferRequest.h
 *
 * 
 */

#ifndef OAISDTokenTransferRequest_H
#define OAISDTokenTransferRequest_H

#include <QJsonObject>

#include "OAISDTokenBurnRequest_tokenObjects_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {
class OAISDTokenBurnRequest_tokenObjects_inner;

class OAISDTokenTransferRequest : public OAIObject {
public:
    OAISDTokenTransferRequest();
    OAISDTokenTransferRequest(QString json);
    ~OAISDTokenTransferRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getFromPlayerId() const;
    void setFromPlayerId(const QString &from_player_id);
    bool is_from_player_id_Set() const;
    bool is_from_player_id_Valid() const;

    QString getToPlayerId() const;
    void setToPlayerId(const QString &to_player_id);
    bool is_to_player_id_Set() const;
    bool is_to_player_id_Valid() const;

    QList<OAISDTokenBurnRequest_tokenObjects_inner> getTokenObjects() const;
    void setTokenObjects(const QList<OAISDTokenBurnRequest_tokenObjects_inner> &token_objects);
    bool is_token_objects_Set() const;
    bool is_token_objects_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString from_player_id;
    bool m_from_player_id_isSet;
    bool m_from_player_id_isValid;

    QString to_player_id;
    bool m_to_player_id_isSet;
    bool m_to_player_id_isValid;

    QList<OAISDTokenBurnRequest_tokenObjects_inner> token_objects;
    bool m_token_objects_isSet;
    bool m_token_objects_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDTokenTransferRequest)

#endif // OAISDTokenTransferRequest_H
