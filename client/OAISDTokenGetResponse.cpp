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

#include "OAISDTokenGetResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDTokenGetResponse::OAISDTokenGetResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDTokenGetResponse::OAISDTokenGetResponse() {
    this->initializeModel();
}

OAISDTokenGetResponse::~OAISDTokenGetResponse() {}

void OAISDTokenGetResponse::initializeModel() {

    m_game_id_isSet = false;
    m_game_id_isValid = false;

    m_template_id_isSet = false;
    m_template_id_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_props_isSet = false;
    m_props_isValid = false;

    m_owner_isSet = false;
    m_owner_isValid = false;

    m_public_metadata_isSet = false;
    m_public_metadata_isValid = false;

    m_blockchain_token_id_isSet = false;
    m_blockchain_token_id_isValid = false;

    m_blockchain_explorer_link_isSet = false;
    m_blockchain_explorer_link_isValid = false;
}

void OAISDTokenGetResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDTokenGetResponse::fromJsonObject(QJsonObject json) {

    m_game_id_isValid = ::stardust::core::fromJsonValue(game_id, json[QString("gameId")]);
    m_game_id_isSet = !json[QString("gameId")].isNull() && m_game_id_isValid;

    m_template_id_isValid = ::stardust::core::fromJsonValue(template_id, json[QString("templateId")]);
    m_template_id_isSet = !json[QString("templateId")].isNull() && m_template_id_isValid;

    m_id_isValid = ::stardust::core::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::stardust::core::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_flags_isValid = ::stardust::core::fromJsonValue(flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_props_isValid = ::stardust::core::fromJsonValue(props, json[QString("props")]);
    m_props_isSet = !json[QString("props")].isNull() && m_props_isValid;

    m_owner_isValid = ::stardust::core::fromJsonValue(owner, json[QString("owner")]);
    m_owner_isSet = !json[QString("owner")].isNull() && m_owner_isValid;

    m_public_metadata_isValid = ::stardust::core::fromJsonValue(public_metadata, json[QString("publicMetadata")]);
    m_public_metadata_isSet = !json[QString("publicMetadata")].isNull() && m_public_metadata_isValid;

    m_blockchain_token_id_isValid = ::stardust::core::fromJsonValue(blockchain_token_id, json[QString("blockchainTokenId")]);
    m_blockchain_token_id_isSet = !json[QString("blockchainTokenId")].isNull() && m_blockchain_token_id_isValid;

    m_blockchain_explorer_link_isValid = ::stardust::core::fromJsonValue(blockchain_explorer_link, json[QString("blockchainExplorerLink")]);
    m_blockchain_explorer_link_isSet = !json[QString("blockchainExplorerLink")].isNull() && m_blockchain_explorer_link_isValid;
}

QString OAISDTokenGetResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDTokenGetResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_game_id_isSet) {
        obj.insert(QString("gameId"), ::stardust::core::toJsonValue(game_id));
    }
    if (m_template_id_isSet) {
        obj.insert(QString("templateId"), ::stardust::core::toJsonValue(template_id));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::stardust::core::toJsonValue(id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::stardust::core::toJsonValue(name));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::stardust::core::toJsonValue(flags));
    }
    if (props.isSet()) {
        obj.insert(QString("props"), ::stardust::core::toJsonValue(props));
    }
    if (m_owner_isSet) {
        obj.insert(QString("owner"), ::stardust::core::toJsonValue(owner));
    }
    if (m_public_metadata_isSet) {
        obj.insert(QString("publicMetadata"), ::stardust::core::toJsonValue(public_metadata));
    }
    if (m_blockchain_token_id_isSet) {
        obj.insert(QString("blockchainTokenId"), ::stardust::core::toJsonValue(blockchain_token_id));
    }
    if (m_blockchain_explorer_link_isSet) {
        obj.insert(QString("blockchainExplorerLink"), ::stardust::core::toJsonValue(blockchain_explorer_link));
    }
    return obj;
}

qint32 OAISDTokenGetResponse::getGameId() const {
    return game_id;
}
void OAISDTokenGetResponse::setGameId(const qint32 &game_id) {
    this->game_id = game_id;
    this->m_game_id_isSet = true;
}

bool OAISDTokenGetResponse::is_game_id_Set() const{
    return m_game_id_isSet;
}

bool OAISDTokenGetResponse::is_game_id_Valid() const{
    return m_game_id_isValid;
}

qint32 OAISDTokenGetResponse::getTemplateId() const {
    return template_id;
}
void OAISDTokenGetResponse::setTemplateId(const qint32 &template_id) {
    this->template_id = template_id;
    this->m_template_id_isSet = true;
}

bool OAISDTokenGetResponse::is_template_id_Set() const{
    return m_template_id_isSet;
}

bool OAISDTokenGetResponse::is_template_id_Valid() const{
    return m_template_id_isValid;
}

qint32 OAISDTokenGetResponse::getId() const {
    return id;
}
void OAISDTokenGetResponse::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAISDTokenGetResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAISDTokenGetResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAISDTokenGetResponse::getName() const {
    return name;
}
void OAISDTokenGetResponse::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAISDTokenGetResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAISDTokenGetResponse::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAISDTokenGetResponse::getFlags() const {
    return flags;
}
void OAISDTokenGetResponse::setFlags(const qint32 &flags) {
    this->flags = flags;
    this->m_flags_isSet = true;
}

bool OAISDTokenGetResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAISDTokenGetResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

OAISDTemplateGetTokensResponse_token_props OAISDTokenGetResponse::getProps() const {
    return props;
}
void OAISDTokenGetResponse::setProps(const OAISDTemplateGetTokensResponse_token_props &props) {
    this->props = props;
    this->m_props_isSet = true;
}

bool OAISDTokenGetResponse::is_props_Set() const{
    return m_props_isSet;
}

bool OAISDTokenGetResponse::is_props_Valid() const{
    return m_props_isValid;
}

QString OAISDTokenGetResponse::getOwner() const {
    return owner;
}
void OAISDTokenGetResponse::setOwner(const QString &owner) {
    this->owner = owner;
    this->m_owner_isSet = true;
}

bool OAISDTokenGetResponse::is_owner_Set() const{
    return m_owner_isSet;
}

bool OAISDTokenGetResponse::is_owner_Valid() const{
    return m_owner_isValid;
}

OAIObject OAISDTokenGetResponse::getPublicMetadata() const {
    return public_metadata;
}
void OAISDTokenGetResponse::setPublicMetadata(const OAIObject &public_metadata) {
    this->public_metadata = public_metadata;
    this->m_public_metadata_isSet = true;
}

bool OAISDTokenGetResponse::is_public_metadata_Set() const{
    return m_public_metadata_isSet;
}

bool OAISDTokenGetResponse::is_public_metadata_Valid() const{
    return m_public_metadata_isValid;
}

QString OAISDTokenGetResponse::getBlockchainTokenId() const {
    return blockchain_token_id;
}
void OAISDTokenGetResponse::setBlockchainTokenId(const QString &blockchain_token_id) {
    this->blockchain_token_id = blockchain_token_id;
    this->m_blockchain_token_id_isSet = true;
}

bool OAISDTokenGetResponse::is_blockchain_token_id_Set() const{
    return m_blockchain_token_id_isSet;
}

bool OAISDTokenGetResponse::is_blockchain_token_id_Valid() const{
    return m_blockchain_token_id_isValid;
}

QString OAISDTokenGetResponse::getBlockchainExplorerLink() const {
    return blockchain_explorer_link;
}
void OAISDTokenGetResponse::setBlockchainExplorerLink(const QString &blockchain_explorer_link) {
    this->blockchain_explorer_link = blockchain_explorer_link;
    this->m_blockchain_explorer_link_isSet = true;
}

bool OAISDTokenGetResponse::is_blockchain_explorer_link_Set() const{
    return m_blockchain_explorer_link_isSet;
}

bool OAISDTokenGetResponse::is_blockchain_explorer_link_Valid() const{
    return m_blockchain_explorer_link_isValid;
}

bool OAISDTokenGetResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_game_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_template_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (props.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_owner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_public_metadata_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_blockchain_token_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_blockchain_explorer_link_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDTokenGetResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_template_id_isValid && m_id_isValid && m_flags_isValid && m_props_isValid && true;
}

} // namespace stardust
} // namespace core