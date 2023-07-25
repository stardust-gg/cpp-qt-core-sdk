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

#include "OAISDOrderGetAllResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDOrderGetAllResponse::OAISDOrderGetAllResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDOrderGetAllResponse::OAISDOrderGetAllResponse() {
    this->initializeModel();
}

OAISDOrderGetAllResponse::~OAISDOrderGetAllResponse() {}

void OAISDOrderGetAllResponse::initializeModel() {

    m_offered_by_isSet = false;
    m_offered_by_isValid = false;

    m_accepted_by_isSet = false;
    m_accepted_by_isValid = false;

    m_tokens_requested_isSet = false;
    m_tokens_requested_isValid = false;

    m_tokens_offered_isSet = false;
    m_tokens_offered_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;
}

void OAISDOrderGetAllResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDOrderGetAllResponse::fromJsonObject(QJsonObject json) {

    m_offered_by_isValid = ::stardust::core::fromJsonValue(offered_by, json[QString("offeredBy")]);
    m_offered_by_isSet = !json[QString("offeredBy")].isNull() && m_offered_by_isValid;

    m_accepted_by_isValid = ::stardust::core::fromJsonValue(accepted_by, json[QString("acceptedBy")]);
    m_accepted_by_isSet = !json[QString("acceptedBy")].isNull() && m_accepted_by_isValid;

    m_tokens_requested_isValid = ::stardust::core::fromJsonValue(tokens_requested, json[QString("tokensRequested")]);
    m_tokens_requested_isSet = !json[QString("tokensRequested")].isNull() && m_tokens_requested_isValid;

    m_tokens_offered_isValid = ::stardust::core::fromJsonValue(tokens_offered, json[QString("tokensOffered")]);
    m_tokens_offered_isSet = !json[QString("tokensOffered")].isNull() && m_tokens_offered_isValid;

    m_status_isValid = ::stardust::core::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;
}

QString OAISDOrderGetAllResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDOrderGetAllResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_offered_by_isSet) {
        obj.insert(QString("offeredBy"), ::stardust::core::toJsonValue(offered_by));
    }
    if (m_accepted_by_isSet) {
        obj.insert(QString("acceptedBy"), ::stardust::core::toJsonValue(accepted_by));
    }
    if (tokens_requested.size() > 0) {
        obj.insert(QString("tokensRequested"), ::stardust::core::toJsonValue(tokens_requested));
    }
    if (tokens_offered.size() > 0) {
        obj.insert(QString("tokensOffered"), ::stardust::core::toJsonValue(tokens_offered));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::stardust::core::toJsonValue(status));
    }
    return obj;
}

QString OAISDOrderGetAllResponse::getOfferedBy() const {
    return offered_by;
}
void OAISDOrderGetAllResponse::setOfferedBy(const QString &offered_by) {
    this->offered_by = offered_by;
    this->m_offered_by_isSet = true;
}

bool OAISDOrderGetAllResponse::is_offered_by_Set() const{
    return m_offered_by_isSet;
}

bool OAISDOrderGetAllResponse::is_offered_by_Valid() const{
    return m_offered_by_isValid;
}

QString OAISDOrderGetAllResponse::getAcceptedBy() const {
    return accepted_by;
}
void OAISDOrderGetAllResponse::setAcceptedBy(const QString &accepted_by) {
    this->accepted_by = accepted_by;
    this->m_accepted_by_isSet = true;
}

bool OAISDOrderGetAllResponse::is_accepted_by_Set() const{
    return m_accepted_by_isSet;
}

bool OAISDOrderGetAllResponse::is_accepted_by_Valid() const{
    return m_accepted_by_isValid;
}

QList<OAISDOrderGetAllResponse_tokensRequested_inner> OAISDOrderGetAllResponse::getTokensRequested() const {
    return tokens_requested;
}
void OAISDOrderGetAllResponse::setTokensRequested(const QList<OAISDOrderGetAllResponse_tokensRequested_inner> &tokens_requested) {
    this->tokens_requested = tokens_requested;
    this->m_tokens_requested_isSet = true;
}

bool OAISDOrderGetAllResponse::is_tokens_requested_Set() const{
    return m_tokens_requested_isSet;
}

bool OAISDOrderGetAllResponse::is_tokens_requested_Valid() const{
    return m_tokens_requested_isValid;
}

QList<OAISDOrderGetAllResponse_tokensRequested_inner> OAISDOrderGetAllResponse::getTokensOffered() const {
    return tokens_offered;
}
void OAISDOrderGetAllResponse::setTokensOffered(const QList<OAISDOrderGetAllResponse_tokensRequested_inner> &tokens_offered) {
    this->tokens_offered = tokens_offered;
    this->m_tokens_offered_isSet = true;
}

bool OAISDOrderGetAllResponse::is_tokens_offered_Set() const{
    return m_tokens_offered_isSet;
}

bool OAISDOrderGetAllResponse::is_tokens_offered_Valid() const{
    return m_tokens_offered_isValid;
}

QString OAISDOrderGetAllResponse::getStatus() const {
    return status;
}
void OAISDOrderGetAllResponse::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAISDOrderGetAllResponse::is_status_Set() const{
    return m_status_isSet;
}

bool OAISDOrderGetAllResponse::is_status_Valid() const{
    return m_status_isValid;
}

bool OAISDOrderGetAllResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_offered_by_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_accepted_by_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (tokens_requested.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (tokens_offered.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDOrderGetAllResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_offered_by_isValid && m_accepted_by_isValid && m_tokens_requested_isValid && m_tokens_offered_isValid && m_status_isValid && true;
}

} // namespace stardust
} // namespace core
