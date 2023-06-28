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
 * OAISDTemplateCreateResponse.h
 *
 * The id of the template created
 */

#ifndef OAISDTemplateCreateResponse_H
#define OAISDTemplateCreateResponse_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {

class OAISDTemplateCreateResponse : public OAIObject {
public:
    OAISDTemplateCreateResponse();
    OAISDTemplateCreateResponse(QString json);
    ~OAISDTemplateCreateResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 id;
    bool m_id_isSet;
    bool m_id_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDTemplateCreateResponse)

#endif // OAISDTemplateCreateResponse_H