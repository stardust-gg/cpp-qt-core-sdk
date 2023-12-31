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

#include "OAISDTokenBurnRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDTokenBurnRequest::OAISDTokenBurnRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDTokenBurnRequest::OAISDTokenBurnRequest() {
    this->initializeModel();
}

OAISDTokenBurnRequest::~OAISDTokenBurnRequest() {}

void OAISDTokenBurnRequest::initializeModel() {

    m_player_id_isSet = false;
    m_player_id_isValid = false;

    m_token_objects_isSet = false;
    m_token_objects_isValid = false;
}

void OAISDTokenBurnRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDTokenBurnRequest::fromJsonObject(QJsonObject json) {

    m_player_id_isValid = ::stardust::core::fromJsonValue(player_id, json[QString("playerId")]);
    m_player_id_isSet = !json[QString("playerId")].isNull() && m_player_id_isValid;

    m_token_objects_isValid = ::stardust::core::fromJsonValue(token_objects, json[QString("tokenObjects")]);
    m_token_objects_isSet = !json[QString("tokenObjects")].isNull() && m_token_objects_isValid;
}

QString OAISDTokenBurnRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDTokenBurnRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_player_id_isSet) {
        obj.insert(QString("playerId"), ::stardust::core::toJsonValue(player_id));
    }
    if (token_objects.size() > 0) {
        obj.insert(QString("tokenObjects"), ::stardust::core::toJsonValue(token_objects));
    }
    return obj;
}

QString OAISDTokenBurnRequest::getPlayerId() const {
    return player_id;
}
void OAISDTokenBurnRequest::setPlayerId(const QString &player_id) {
    this->player_id = player_id;
    this->m_player_id_isSet = true;
}

bool OAISDTokenBurnRequest::is_player_id_Set() const{
    return m_player_id_isSet;
}

bool OAISDTokenBurnRequest::is_player_id_Valid() const{
    return m_player_id_isValid;
}

QList<OAISDTokenBurnRequest_tokenObjects_inner> OAISDTokenBurnRequest::getTokenObjects() const {
    return token_objects;
}
void OAISDTokenBurnRequest::setTokenObjects(const QList<OAISDTokenBurnRequest_tokenObjects_inner> &token_objects) {
    this->token_objects = token_objects;
    this->m_token_objects_isSet = true;
}

bool OAISDTokenBurnRequest::is_token_objects_Set() const{
    return m_token_objects_isSet;
}

bool OAISDTokenBurnRequest::is_token_objects_Valid() const{
    return m_token_objects_isValid;
}

bool OAISDTokenBurnRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
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

bool OAISDTokenBurnRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_player_id_isValid && m_token_objects_isValid && true;
}

} // namespace stardust
} // namespace core
