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

#include "OAISDTokenWithdrawObject.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDTokenWithdrawObject::OAISDTokenWithdrawObject(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDTokenWithdrawObject::OAISDTokenWithdrawObject() {
    this->initializeModel();
}

OAISDTokenWithdrawObject::~OAISDTokenWithdrawObject() {}

void OAISDTokenWithdrawObject::initializeModel() {

    m_token_id_isSet = false;
    m_token_id_isValid = false;

    m_amount_isSet = false;
    m_amount_isValid = false;
}

void OAISDTokenWithdrawObject::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDTokenWithdrawObject::fromJsonObject(QJsonObject json) {

    m_token_id_isValid = ::stardust::core::fromJsonValue(token_id, json[QString("tokenId")]);
    m_token_id_isSet = !json[QString("tokenId")].isNull() && m_token_id_isValid;

    m_amount_isValid = ::stardust::core::fromJsonValue(amount, json[QString("amount")]);
    m_amount_isSet = !json[QString("amount")].isNull() && m_amount_isValid;
}

QString OAISDTokenWithdrawObject::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDTokenWithdrawObject::asJsonObject() const {
    QJsonObject obj;
    if (m_token_id_isSet) {
        obj.insert(QString("tokenId"), ::stardust::core::toJsonValue(token_id));
    }
    if (m_amount_isSet) {
        obj.insert(QString("amount"), ::stardust::core::toJsonValue(amount));
    }
    return obj;
}

qint32 OAISDTokenWithdrawObject::getTokenId() const {
    return token_id;
}
void OAISDTokenWithdrawObject::setTokenId(const qint32 &token_id) {
    this->token_id = token_id;
    this->m_token_id_isSet = true;
}

bool OAISDTokenWithdrawObject::is_token_id_Set() const{
    return m_token_id_isSet;
}

bool OAISDTokenWithdrawObject::is_token_id_Valid() const{
    return m_token_id_isValid;
}

QString OAISDTokenWithdrawObject::getAmount() const {
    return amount;
}
void OAISDTokenWithdrawObject::setAmount(const QString &amount) {
    this->amount = amount;
    this->m_amount_isSet = true;
}

bool OAISDTokenWithdrawObject::is_amount_Set() const{
    return m_amount_isSet;
}

bool OAISDTokenWithdrawObject::is_amount_Valid() const{
    return m_amount_isValid;
}

bool OAISDTokenWithdrawObject::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_token_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_amount_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDTokenWithdrawObject::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_token_id_isValid && m_amount_isValid && true;
}

} // namespace stardust
} // namespace core
