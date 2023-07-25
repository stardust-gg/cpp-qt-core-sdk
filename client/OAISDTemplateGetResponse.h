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
 * OAISDTemplateGetResponse.h
 *
 * 
 */

#ifndef OAISDTemplateGetResponse_H
#define OAISDTemplateGetResponse_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAISDGameGetResponse_fees_inner.h"
#include "OAISDTemplateGetAllResponse_props.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {
class OAISDTemplateGetAllResponse_props;
class OAISDGameGetResponse_fees_inner;

class OAISDTemplateGetResponse : public OAIObject {
public:
    OAISDTemplateGetResponse();
    OAISDTemplateGetResponse(QString json);
    ~OAISDTemplateGetResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getGameId() const;
    void setGameId(const qint32 &game_id);
    bool is_game_id_Set() const;
    bool is_game_id_Valid() const;

    qint32 getId() const;
    void setId(const qint32 &_id);
    bool is__id_Set() const;
    bool is__id_Valid() const;

    QString getCap() const;
    void setCap(const QString &cap);
    bool is_cap_Set() const;
    bool is_cap_Valid() const;

    QString getContractType() const;
    void setContractType(const QString &contract_type);
    bool is_contract_type_Set() const;
    bool is_contract_type_Valid() const;

    QString getTotalSupply() const;
    void setTotalSupply(const QString &total_supply);
    bool is_total_supply_Set() const;
    bool is_total_supply_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    OAISDTemplateGetAllResponse_props getProps() const;
    void setProps(const OAISDTemplateGetAllResponse_props &props);
    bool is_props_Set() const;
    bool is_props_Valid() const;

    OAIObject getPublicContractMetadata() const;
    void setPublicContractMetadata(const OAIObject &public_contract_metadata);
    bool is_public_contract_metadata_Set() const;
    bool is_public_contract_metadata_Valid() const;

    OAIObject getPublicTokenMetadata() const;
    void setPublicTokenMetadata(const OAIObject &public_token_metadata);
    bool is_public_token_metadata_Set() const;
    bool is_public_token_metadata_Valid() const;

    QList<OAISDGameGetResponse_fees_inner> getFees() const;
    void setFees(const QList<OAISDGameGetResponse_fees_inner> &fees);
    bool is_fees_Set() const;
    bool is_fees_Valid() const;

    QString getBlockchainContractAddress() const;
    void setBlockchainContractAddress(const QString &blockchain_contract_address);
    bool is_blockchain_contract_address_Set() const;
    bool is_blockchain_contract_address_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 game_id;
    bool m_game_id_isSet;
    bool m_game_id_isValid;

    qint32 _id;
    bool m__id_isSet;
    bool m__id_isValid;

    QString cap;
    bool m_cap_isSet;
    bool m_cap_isValid;

    QString contract_type;
    bool m_contract_type_isSet;
    bool m_contract_type_isValid;

    QString total_supply;
    bool m_total_supply_isSet;
    bool m_total_supply_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    OAISDTemplateGetAllResponse_props props;
    bool m_props_isSet;
    bool m_props_isValid;

    OAIObject public_contract_metadata;
    bool m_public_contract_metadata_isSet;
    bool m_public_contract_metadata_isValid;

    OAIObject public_token_metadata;
    bool m_public_token_metadata_isSet;
    bool m_public_token_metadata_isValid;

    QList<OAISDGameGetResponse_fees_inner> fees;
    bool m_fees_isSet;
    bool m_fees_isValid;

    QString blockchain_contract_address;
    bool m_blockchain_contract_address_isSet;
    bool m_blockchain_contract_address_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDTemplateGetResponse)

#endif // OAISDTemplateGetResponse_H
