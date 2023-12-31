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
 * OAISDTemplateGetTokensResponse_token_props.h
 *
 * 
 */

#ifndef OAISDTemplateGetTokensResponse_token_props_H
#define OAISDTemplateGetTokensResponse_token_props_H

#include <QJsonObject>

#include "OAIObject.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {

class OAISDTemplateGetTokensResponse_token_props : public OAIObject {
public:
    OAISDTemplateGetTokensResponse_token_props();
    OAISDTemplateGetTokensResponse_token_props(QString json);
    ~OAISDTemplateGetTokensResponse_token_props() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIObject getImmutable() const;
    void setImmutable(const OAIObject &immutable);
    bool is_immutable_Set() const;
    bool is_immutable_Valid() const;

    OAIObject getRMutable() const;
    void setRMutable(const OAIObject &r_mutable);
    bool is_r_mutable_Set() const;
    bool is_r_mutable_Valid() const;

    OAIObject getInherited() const;
    void setInherited(const OAIObject &inherited);
    bool is_inherited_Set() const;
    bool is_inherited_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIObject immutable;
    bool m_immutable_isSet;
    bool m_immutable_isValid;

    OAIObject r_mutable;
    bool m_r_mutable_isSet;
    bool m_r_mutable_isValid;

    OAIObject inherited;
    bool m_inherited_isSet;
    bool m_inherited_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDTemplateGetTokensResponse_token_props)

#endif // OAISDTemplateGetTokensResponse_token_props_H
