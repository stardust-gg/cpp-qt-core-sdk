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

#include "OAISDHealthResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDHealthResponse::OAISDHealthResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDHealthResponse::OAISDHealthResponse() {
    this->initializeModel();
}

OAISDHealthResponse::~OAISDHealthResponse() {}

void OAISDHealthResponse::initializeModel() {

    m_status_isSet = false;
    m_status_isValid = false;
}

void OAISDHealthResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDHealthResponse::fromJsonObject(QJsonObject json) {

    m_status_isValid = ::stardust::core::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;
}

QString OAISDHealthResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDHealthResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_status_isSet) {
        obj.insert(QString("status"), ::stardust::core::toJsonValue(status));
    }
    return obj;
}

QString OAISDHealthResponse::getStatus() const {
    return status;
}
void OAISDHealthResponse::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAISDHealthResponse::is_status_Set() const{
    return m_status_isSet;
}

bool OAISDHealthResponse::is_status_Valid() const{
    return m_status_isValid;
}

bool OAISDHealthResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDHealthResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_status_isValid && true;
}

} // namespace stardust
} // namespace core