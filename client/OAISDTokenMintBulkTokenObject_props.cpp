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

#include "OAISDTokenMintBulkTokenObject_props.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDTokenMintBulkTokenObject_props::OAISDTokenMintBulkTokenObject_props(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDTokenMintBulkTokenObject_props::OAISDTokenMintBulkTokenObject_props() {
    this->initializeModel();
}

OAISDTokenMintBulkTokenObject_props::~OAISDTokenMintBulkTokenObject_props() {}

void OAISDTokenMintBulkTokenObject_props::initializeModel() {

    m_r_mutable_isSet = false;
    m_r_mutable_isValid = false;

    m_immutable_isSet = false;
    m_immutable_isValid = false;
}

void OAISDTokenMintBulkTokenObject_props::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDTokenMintBulkTokenObject_props::fromJsonObject(QJsonObject json) {

    m_r_mutable_isValid = ::stardust::core::fromJsonValue(r_mutable, json[QString("mutable")]);
    m_r_mutable_isSet = !json[QString("mutable")].isNull() && m_r_mutable_isValid;

    m_immutable_isValid = ::stardust::core::fromJsonValue(immutable, json[QString("immutable")]);
    m_immutable_isSet = !json[QString("immutable")].isNull() && m_immutable_isValid;
}

QString OAISDTokenMintBulkTokenObject_props::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDTokenMintBulkTokenObject_props::asJsonObject() const {
    QJsonObject obj;
    if (m_r_mutable_isSet) {
        obj.insert(QString("mutable"), ::stardust::core::toJsonValue(r_mutable));
    }
    if (m_immutable_isSet) {
        obj.insert(QString("immutable"), ::stardust::core::toJsonValue(immutable));
    }
    return obj;
}

OAIObject OAISDTokenMintBulkTokenObject_props::getRMutable() const {
    return r_mutable;
}
void OAISDTokenMintBulkTokenObject_props::setRMutable(const OAIObject &r_mutable) {
    this->r_mutable = r_mutable;
    this->m_r_mutable_isSet = true;
}

bool OAISDTokenMintBulkTokenObject_props::is_r_mutable_Set() const{
    return m_r_mutable_isSet;
}

bool OAISDTokenMintBulkTokenObject_props::is_r_mutable_Valid() const{
    return m_r_mutable_isValid;
}

OAIObject OAISDTokenMintBulkTokenObject_props::getImmutable() const {
    return immutable;
}
void OAISDTokenMintBulkTokenObject_props::setImmutable(const OAIObject &immutable) {
    this->immutable = immutable;
    this->m_immutable_isSet = true;
}

bool OAISDTokenMintBulkTokenObject_props::is_immutable_Set() const{
    return m_immutable_isSet;
}

bool OAISDTokenMintBulkTokenObject_props::is_immutable_Valid() const{
    return m_immutable_isValid;
}

bool OAISDTokenMintBulkTokenObject_props::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_r_mutable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_immutable_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDTokenMintBulkTokenObject_props::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_r_mutable_isValid && true;
}

} // namespace stardust
} // namespace core
