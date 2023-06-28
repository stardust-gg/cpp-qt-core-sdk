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

#include "OAISDPlayerGetIdResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDPlayerGetIdResponse::OAISDPlayerGetIdResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDPlayerGetIdResponse::OAISDPlayerGetIdResponse() {
    this->initializeModel();
}

OAISDPlayerGetIdResponse::~OAISDPlayerGetIdResponse() {}

void OAISDPlayerGetIdResponse::initializeModel() {

    m_player_id_isSet = false;
    m_player_id_isValid = false;
}

void OAISDPlayerGetIdResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDPlayerGetIdResponse::fromJsonObject(QJsonObject json) {

    m_player_id_isValid = ::stardust::core::fromJsonValue(player_id, json[QString("playerId")]);
    m_player_id_isSet = !json[QString("playerId")].isNull() && m_player_id_isValid;
}

QString OAISDPlayerGetIdResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDPlayerGetIdResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_player_id_isSet) {
        obj.insert(QString("playerId"), ::stardust::core::toJsonValue(player_id));
    }
    return obj;
}

QString OAISDPlayerGetIdResponse::getPlayerId() const {
    return player_id;
}
void OAISDPlayerGetIdResponse::setPlayerId(const QString &player_id) {
    this->player_id = player_id;
    this->m_player_id_isSet = true;
}

bool OAISDPlayerGetIdResponse::is_player_id_Set() const{
    return m_player_id_isSet;
}

bool OAISDPlayerGetIdResponse::is_player_id_Valid() const{
    return m_player_id_isValid;
}

bool OAISDPlayerGetIdResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_player_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDPlayerGetIdResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_player_id_isValid && true;
}

} // namespace stardust
} // namespace core
