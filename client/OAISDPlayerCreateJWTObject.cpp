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

#include "OAISDPlayerCreateJWTObject.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDPlayerCreateJWTObject::OAISDPlayerCreateJWTObject(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDPlayerCreateJWTObject::OAISDPlayerCreateJWTObject() {
    this->initializeModel();
}

OAISDPlayerCreateJWTObject::~OAISDPlayerCreateJWTObject() {}

void OAISDPlayerCreateJWTObject::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_id_token_isSet = false;
    m_id_token_isValid = false;

    m_access_token_isSet = false;
    m_access_token_isValid = false;
}

void OAISDPlayerCreateJWTObject::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDPlayerCreateJWTObject::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::stardust::core::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_id_token_isValid = ::stardust::core::fromJsonValue(id_token, json[QString("idToken")]);
    m_id_token_isSet = !json[QString("idToken")].isNull() && m_id_token_isValid;

    m_access_token_isValid = ::stardust::core::fromJsonValue(access_token, json[QString("accessToken")]);
    m_access_token_isSet = !json[QString("accessToken")].isNull() && m_access_token_isValid;
}

QString OAISDPlayerCreateJWTObject::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDPlayerCreateJWTObject::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::stardust::core::toJsonValue(type));
    }
    if (m_id_token_isSet) {
        obj.insert(QString("idToken"), ::stardust::core::toJsonValue(id_token));
    }
    if (m_access_token_isSet) {
        obj.insert(QString("accessToken"), ::stardust::core::toJsonValue(access_token));
    }
    return obj;
}

QString OAISDPlayerCreateJWTObject::getType() const {
    return type;
}
void OAISDPlayerCreateJWTObject::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAISDPlayerCreateJWTObject::is_type_Set() const{
    return m_type_isSet;
}

bool OAISDPlayerCreateJWTObject::is_type_Valid() const{
    return m_type_isValid;
}

QString OAISDPlayerCreateJWTObject::getIdToken() const {
    return id_token;
}
void OAISDPlayerCreateJWTObject::setIdToken(const QString &id_token) {
    this->id_token = id_token;
    this->m_id_token_isSet = true;
}

bool OAISDPlayerCreateJWTObject::is_id_token_Set() const{
    return m_id_token_isSet;
}

bool OAISDPlayerCreateJWTObject::is_id_token_Valid() const{
    return m_id_token_isValid;
}

QString OAISDPlayerCreateJWTObject::getAccessToken() const {
    return access_token;
}
void OAISDPlayerCreateJWTObject::setAccessToken(const QString &access_token) {
    this->access_token = access_token;
    this->m_access_token_isSet = true;
}

bool OAISDPlayerCreateJWTObject::is_access_token_Set() const{
    return m_access_token_isSet;
}

bool OAISDPlayerCreateJWTObject::is_access_token_Valid() const{
    return m_access_token_isValid;
}

bool OAISDPlayerCreateJWTObject::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_access_token_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDPlayerCreateJWTObject::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && true;
}

} // namespace stardust
} // namespace core
