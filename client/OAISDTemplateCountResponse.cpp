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

#include "OAISDTemplateCountResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDTemplateCountResponse::OAISDTemplateCountResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDTemplateCountResponse::OAISDTemplateCountResponse() {
    this->initializeModel();
}

OAISDTemplateCountResponse::~OAISDTemplateCountResponse() {}

void OAISDTemplateCountResponse::initializeModel() {

    m_count_isSet = false;
    m_count_isValid = false;
}

void OAISDTemplateCountResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDTemplateCountResponse::fromJsonObject(QJsonObject json) {

    m_count_isValid = ::stardust::core::fromJsonValue(count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;
}

QString OAISDTemplateCountResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDTemplateCountResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_count_isSet) {
        obj.insert(QString("count"), ::stardust::core::toJsonValue(count));
    }
    return obj;
}

qint32 OAISDTemplateCountResponse::getCount() const {
    return count;
}
void OAISDTemplateCountResponse::setCount(const qint32 &count) {
    this->count = count;
    this->m_count_isSet = true;
}

bool OAISDTemplateCountResponse::is_count_Set() const{
    return m_count_isSet;
}

bool OAISDTemplateCountResponse::is_count_Valid() const{
    return m_count_isValid;
}

bool OAISDTemplateCountResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDTemplateCountResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_count_isValid && true;
}

} // namespace stardust
} // namespace core