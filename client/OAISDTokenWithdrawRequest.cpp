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

#include "OAISDTokenWithdrawRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDTokenWithdrawRequest::OAISDTokenWithdrawRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDTokenWithdrawRequest::OAISDTokenWithdrawRequest() {
    this->initializeModel();
}

OAISDTokenWithdrawRequest::~OAISDTokenWithdrawRequest() {}

void OAISDTokenWithdrawRequest::initializeModel() {

    m_address_isSet = false;
    m_address_isValid = false;

    m_player_id_isSet = false;
    m_player_id_isValid = false;

    m_token_objects_isSet = false;
    m_token_objects_isValid = false;
}

void OAISDTokenWithdrawRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDTokenWithdrawRequest::fromJsonObject(QJsonObject json) {

    m_address_isValid = ::stardust::core::fromJsonValue(address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_player_id_isValid = ::stardust::core::fromJsonValue(player_id, json[QString("playerId")]);
    m_player_id_isSet = !json[QString("playerId")].isNull() && m_player_id_isValid;

    m_token_objects_isValid = ::stardust::core::fromJsonValue(token_objects, json[QString("tokenObjects")]);
    m_token_objects_isSet = !json[QString("tokenObjects")].isNull() && m_token_objects_isValid;
}

QString OAISDTokenWithdrawRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDTokenWithdrawRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_address_isSet) {
        obj.insert(QString("address"), ::stardust::core::toJsonValue(address));
    }
    if (m_player_id_isSet) {
        obj.insert(QString("playerId"), ::stardust::core::toJsonValue(player_id));
    }
    if (token_objects.size() > 0) {
        obj.insert(QString("tokenObjects"), ::stardust::core::toJsonValue(token_objects));
    }
    return obj;
}

QString OAISDTokenWithdrawRequest::getAddress() const {
    return address;
}
void OAISDTokenWithdrawRequest::setAddress(const QString &address) {
    this->address = address;
    this->m_address_isSet = true;
}

bool OAISDTokenWithdrawRequest::is_address_Set() const{
    return m_address_isSet;
}

bool OAISDTokenWithdrawRequest::is_address_Valid() const{
    return m_address_isValid;
}

QString OAISDTokenWithdrawRequest::getPlayerId() const {
    return player_id;
}
void OAISDTokenWithdrawRequest::setPlayerId(const QString &player_id) {
    this->player_id = player_id;
    this->m_player_id_isSet = true;
}

bool OAISDTokenWithdrawRequest::is_player_id_Set() const{
    return m_player_id_isSet;
}

bool OAISDTokenWithdrawRequest::is_player_id_Valid() const{
    return m_player_id_isValid;
}

QList<OAISDTokenWithdrawObject> OAISDTokenWithdrawRequest::getTokenObjects() const {
    return token_objects;
}
void OAISDTokenWithdrawRequest::setTokenObjects(const QList<OAISDTokenWithdrawObject> &token_objects) {
    this->token_objects = token_objects;
    this->m_token_objects_isSet = true;
}

bool OAISDTokenWithdrawRequest::is_token_objects_Set() const{
    return m_token_objects_isSet;
}

bool OAISDTokenWithdrawRequest::is_token_objects_Valid() const{
    return m_token_objects_isValid;
}

bool OAISDTokenWithdrawRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_player_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (token_objects.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDTokenWithdrawRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_address_isValid && m_player_id_isValid && m_token_objects_isValid && true;
}

} // namespace stardust
} // namespace core