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

#include "OAISDOrderCancelResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDOrderCancelResponse::OAISDOrderCancelResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDOrderCancelResponse::OAISDOrderCancelResponse() {
    this->initializeModel();
}

OAISDOrderCancelResponse::~OAISDOrderCancelResponse() {}

void OAISDOrderCancelResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;
}

void OAISDOrderCancelResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDOrderCancelResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::stardust::core::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;
}

QString OAISDOrderCancelResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDOrderCancelResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::stardust::core::toJsonValue(id));
    }
    return obj;
}

qint32 OAISDOrderCancelResponse::getId() const {
    return id;
}
void OAISDOrderCancelResponse::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAISDOrderCancelResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAISDOrderCancelResponse::is_id_Valid() const{
    return m_id_isValid;
}

bool OAISDOrderCancelResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDOrderCancelResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && true;
}

} // namespace stardust
} // namespace core
