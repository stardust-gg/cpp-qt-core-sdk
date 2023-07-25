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

#include "OAISDOrderCreateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace stardust {
namespace core {

OAISDOrderCreateRequest::OAISDOrderCreateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISDOrderCreateRequest::OAISDOrderCreateRequest() {
    this->initializeModel();
}

OAISDOrderCreateRequest::~OAISDOrderCreateRequest() {}

void OAISDOrderCreateRequest::initializeModel() {

    m_offered_by_isSet = false;
    m_offered_by_isValid = false;

    m_tokens_offered_isSet = false;
    m_tokens_offered_isValid = false;

    m_tokens_requested_isSet = false;
    m_tokens_requested_isValid = false;
}

void OAISDOrderCreateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISDOrderCreateRequest::fromJsonObject(QJsonObject json) {

    m_offered_by_isValid = ::stardust::core::fromJsonValue(offered_by, json[QString("offeredBy")]);
    m_offered_by_isSet = !json[QString("offeredBy")].isNull() && m_offered_by_isValid;

    m_tokens_offered_isValid = ::stardust::core::fromJsonValue(tokens_offered, json[QString("tokensOffered")]);
    m_tokens_offered_isSet = !json[QString("tokensOffered")].isNull() && m_tokens_offered_isValid;

    m_tokens_requested_isValid = ::stardust::core::fromJsonValue(tokens_requested, json[QString("tokensRequested")]);
    m_tokens_requested_isSet = !json[QString("tokensRequested")].isNull() && m_tokens_requested_isValid;
}

QString OAISDOrderCreateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISDOrderCreateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_offered_by_isSet) {
        obj.insert(QString("offeredBy"), ::stardust::core::toJsonValue(offered_by));
    }
    if (tokens_offered.size() > 0) {
        obj.insert(QString("tokensOffered"), ::stardust::core::toJsonValue(tokens_offered));
    }
    if (tokens_requested.size() > 0) {
        obj.insert(QString("tokensRequested"), ::stardust::core::toJsonValue(tokens_requested));
    }
    return obj;
}

QString OAISDOrderCreateRequest::getOfferedBy() const {
    return offered_by;
}
void OAISDOrderCreateRequest::setOfferedBy(const QString &offered_by) {
    this->offered_by = offered_by;
    this->m_offered_by_isSet = true;
}

bool OAISDOrderCreateRequest::is_offered_by_Set() const{
    return m_offered_by_isSet;
}

bool OAISDOrderCreateRequest::is_offered_by_Valid() const{
    return m_offered_by_isValid;
}

QList<OAISDOrderCreateTokens> OAISDOrderCreateRequest::getTokensOffered() const {
    return tokens_offered;
}
void OAISDOrderCreateRequest::setTokensOffered(const QList<OAISDOrderCreateTokens> &tokens_offered) {
    this->tokens_offered = tokens_offered;
    this->m_tokens_offered_isSet = true;
}

bool OAISDOrderCreateRequest::is_tokens_offered_Set() const{
    return m_tokens_offered_isSet;
}

bool OAISDOrderCreateRequest::is_tokens_offered_Valid() const{
    return m_tokens_offered_isValid;
}

QList<OAISDOrderCreateTokens> OAISDOrderCreateRequest::getTokensRequested() const {
    return tokens_requested;
}
void OAISDOrderCreateRequest::setTokensRequested(const QList<OAISDOrderCreateTokens> &tokens_requested) {
    this->tokens_requested = tokens_requested;
    this->m_tokens_requested_isSet = true;
}

bool OAISDOrderCreateRequest::is_tokens_requested_Set() const{
    return m_tokens_requested_isSet;
}

bool OAISDOrderCreateRequest::is_tokens_requested_Valid() const{
    return m_tokens_requested_isValid;
}

bool OAISDOrderCreateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_offered_by_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (tokens_offered.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (tokens_requested.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISDOrderCreateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_offered_by_isValid && m_tokens_offered_isValid && m_tokens_requested_isValid && true;
}

} // namespace stardust
} // namespace core
