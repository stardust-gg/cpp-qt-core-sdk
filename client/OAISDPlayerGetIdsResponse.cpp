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

#include "OAISDPlayerGetIdsResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDPlayerGetIdsResponse::OAISDPlayerGetIdsResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDPlayerGetIdsResponse::OAISDPlayerGetIdsResponse() {
    this->initializeModel();
}

OAISDPlayerGetIdsResponse::~OAISDPlayerGetIdsResponse() {}

void OAISDPlayerGetIdsResponse::initializeModel() {

    m_player_id_isSet = false;
    m_player_id_isValid = false;

    m_unique_id_isSet = false;
    m_unique_id_isValid = false;
}

void OAISDPlayerGetIdsResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDPlayerGetIdsResponse::fromJsonObject(QJsonObject json) {

    m_player_id_isValid = ::stardust::core::fromJsonValue(player_id, json[QString("playerId")]);
    m_player_id_isSet = !json[QString("playerId")].isNull() && m_player_id_isValid;

    m_unique_id_isValid = ::stardust::core::fromJsonValue(unique_id, json[QString("uniqueId")]);
    m_unique_id_isSet = !json[QString("uniqueId")].isNull() && m_unique_id_isValid;
}

QString OAISDPlayerGetIdsResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDPlayerGetIdsResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_player_id_isSet) {
        obj.insert(QString("playerId"), ::stardust::core::toJsonValue(player_id));
    }
    if (m_unique_id_isSet) {
        obj.insert(QString("uniqueId"), ::stardust::core::toJsonValue(unique_id));
    }
    return obj;
}

QString OAISDPlayerGetIdsResponse::getPlayerId() const {
    return player_id;
}
void OAISDPlayerGetIdsResponse::setPlayerId(const QString &player_id) {
    this->player_id = player_id;
    this->m_player_id_isSet = true;
}

bool OAISDPlayerGetIdsResponse::is_player_id_Set() const{
    return m_player_id_isSet;
}

bool OAISDPlayerGetIdsResponse::is_player_id_Valid() const{
    return m_player_id_isValid;
}

QString OAISDPlayerGetIdsResponse::getUniqueId() const {
    return unique_id;
}
void OAISDPlayerGetIdsResponse::setUniqueId(const QString &unique_id) {
    this->unique_id = unique_id;
    this->m_unique_id_isSet = true;
}

bool OAISDPlayerGetIdsResponse::is_unique_id_Set() const{
    return m_unique_id_isSet;
}

bool OAISDPlayerGetIdsResponse::is_unique_id_Valid() const{
    return m_unique_id_isValid;
}

bool OAISDPlayerGetIdsResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_player_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_unique_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDPlayerGetIdsResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_player_id_isValid && m_unique_id_isValid && true;
}

} // namespace stardust
} // namespace core