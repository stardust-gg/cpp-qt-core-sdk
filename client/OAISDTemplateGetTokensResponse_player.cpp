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

#include "OAISDTemplateGetTokensResponse_player.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDTemplateGetTokensResponse_player::OAISDTemplateGetTokensResponse_player(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDTemplateGetTokensResponse_player::OAISDTemplateGetTokensResponse_player() {
    this->initializeModel();
}

OAISDTemplateGetTokensResponse_player::~OAISDTemplateGetTokensResponse_player() {}

void OAISDTemplateGetTokensResponse_player::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_unique_id_isSet = false;
    m_unique_id_isValid = false;

    m_image_isSet = false;
    m_image_isValid = false;

    m_deleted_at_isSet = false;
    m_deleted_at_isValid = false;
}

void OAISDTemplateGetTokensResponse_player::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDTemplateGetTokensResponse_player::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::stardust::core::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_unique_id_isValid = ::stardust::core::fromJsonValue(unique_id, json[QString("uniqueId")]);
    m_unique_id_isSet = !json[QString("uniqueId")].isNull() && m_unique_id_isValid;

    m_image_isValid = ::stardust::core::fromJsonValue(image, json[QString("image")]);
    m_image_isSet = !json[QString("image")].isNull() && m_image_isValid;

    m_deleted_at_isValid = ::stardust::core::fromJsonValue(deleted_at, json[QString("deletedAt")]);
    m_deleted_at_isSet = !json[QString("deletedAt")].isNull() && m_deleted_at_isValid;
}

QString OAISDTemplateGetTokensResponse_player::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDTemplateGetTokensResponse_player::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::stardust::core::toJsonValue(id));
    }
    if (m_unique_id_isSet) {
        obj.insert(QString("uniqueId"), ::stardust::core::toJsonValue(unique_id));
    }
    if (m_image_isSet) {
        obj.insert(QString("image"), ::stardust::core::toJsonValue(image));
    }
    if (m_deleted_at_isSet) {
        obj.insert(QString("deletedAt"), ::stardust::core::toJsonValue(deleted_at));
    }
    return obj;
}

QString OAISDTemplateGetTokensResponse_player::getId() const {
    return id;
}
void OAISDTemplateGetTokensResponse_player::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAISDTemplateGetTokensResponse_player::is_id_Set() const{
    return m_id_isSet;
}

bool OAISDTemplateGetTokensResponse_player::is_id_Valid() const{
    return m_id_isValid;
}

QString OAISDTemplateGetTokensResponse_player::getUniqueId() const {
    return unique_id;
}
void OAISDTemplateGetTokensResponse_player::setUniqueId(const QString &unique_id) {
    this->unique_id = unique_id;
    this->m_unique_id_isSet = true;
}

bool OAISDTemplateGetTokensResponse_player::is_unique_id_Set() const{
    return m_unique_id_isSet;
}

bool OAISDTemplateGetTokensResponse_player::is_unique_id_Valid() const{
    return m_unique_id_isValid;
}

QString OAISDTemplateGetTokensResponse_player::getImage() const {
    return image;
}
void OAISDTemplateGetTokensResponse_player::setImage(const QString &image) {
    this->image = image;
    this->m_image_isSet = true;
}

bool OAISDTemplateGetTokensResponse_player::is_image_Set() const{
    return m_image_isSet;
}

bool OAISDTemplateGetTokensResponse_player::is_image_Valid() const{
    return m_image_isValid;
}

QString OAISDTemplateGetTokensResponse_player::getDeletedAt() const {
    return deleted_at;
}
void OAISDTemplateGetTokensResponse_player::setDeletedAt(const QString &deleted_at) {
    this->deleted_at = deleted_at;
    this->m_deleted_at_isSet = true;
}

bool OAISDTemplateGetTokensResponse_player::is_deleted_at_Set() const{
    return m_deleted_at_isSet;
}

bool OAISDTemplateGetTokensResponse_player::is_deleted_at_Valid() const{
    return m_deleted_at_isValid;
}

bool OAISDTemplateGetTokensResponse_player::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_unique_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_deleted_at_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDTemplateGetTokensResponse_player::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_unique_id_isValid && true;
}

} // namespace stardust
} // namespace core
