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
 * OAISDTemplateCreateRequest.h
 *
 * 
 */

#ifndef OAISDTemplateCreateRequest_H
#define OAISDTemplateCreateRequest_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAISDTemplateCreateRequest_props.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {
class OAISDTemplateCreateRequest_props;

class OAISDTemplateCreateRequest : public OAIObject {
public:
    OAISDTemplateCreateRequest();
    OAISDTemplateCreateRequest(QString json);
    ~OAISDTemplateCreateRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getCap() const;
    void setCap(const QString &cap);
    bool is_cap_Set() const;
    bool is_cap_Valid() const;

    QString getContractType() const;
    void setContractType(const QString &contract_type);
    bool is_contract_type_Set() const;
    bool is_contract_type_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getOwnerAddress() const;
    void setOwnerAddress(const QString &owner_address);
    bool is_owner_address_Set() const;
    bool is_owner_address_Valid() const;

    OAISDTemplateCreateRequest_props getProps() const;
    void setProps(const OAISDTemplateCreateRequest_props &props);
    bool is_props_Set() const;
    bool is_props_Valid() const;

    OAIObject getPublicContractMetadata() const;
    void setPublicContractMetadata(const OAIObject &public_contract_metadata);
    bool is_public_contract_metadata_Set() const;
    bool is_public_contract_metadata_Valid() const;

    QString getSymbol() const;
    void setSymbol(const QString &symbol);
    bool is_symbol_Set() const;
    bool is_symbol_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString cap;
    bool m_cap_isSet;
    bool m_cap_isValid;

    QString contract_type;
    bool m_contract_type_isSet;
    bool m_contract_type_isValid;

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString owner_address;
    bool m_owner_address_isSet;
    bool m_owner_address_isValid;

    OAISDTemplateCreateRequest_props props;
    bool m_props_isSet;
    bool m_props_isValid;

    OAIObject public_contract_metadata;
    bool m_public_contract_metadata_isSet;
    bool m_public_contract_metadata_isValid;

    QString symbol;
    bool m_symbol_isSet;
    bool m_symbol_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDTemplateCreateRequest)

#endif // OAISDTemplateCreateRequest_H