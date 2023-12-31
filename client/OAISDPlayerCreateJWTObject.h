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
 * OAISDPlayerCreateJWTObject.h
 *
 * 
 */

#ifndef OAISDPlayerCreateJWTObject_H
#define OAISDPlayerCreateJWTObject_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {

class OAISDPlayerCreateJWTObject : public OAIObject {
public:
    OAISDPlayerCreateJWTObject();
    OAISDPlayerCreateJWTObject(QString json);
    ~OAISDPlayerCreateJWTObject() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getIdToken() const;
    void setIdToken(const QString &id_token);
    bool is_id_token_Set() const;
    bool is_id_token_Valid() const;

    QString getAccessToken() const;
    void setAccessToken(const QString &access_token);
    bool is_access_token_Set() const;
    bool is_access_token_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString id_token;
    bool m_id_token_isSet;
    bool m_id_token_isValid;

    QString access_token;
    bool m_access_token_isSet;
    bool m_access_token_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDPlayerCreateJWTObject)

#endif // OAISDPlayerCreateJWTObject_H
