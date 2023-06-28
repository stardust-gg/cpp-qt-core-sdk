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

/*
 * OAISDGameMutateRequest.h
 *
 * 
 */

#ifndef OAISDGameMutateRequest_H
#define OAISDGameMutateRequest_H

#include <QJsonObject>

#include "OAIObject.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {

class OAISDGameMutateRequest : public OAIObject {
public:
    OAISDGameMutateRequest();
    OAISDGameMutateRequest(QString json);
    ~OAISDGameMutateRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getNews() const;
    void setNews(const QString &news);
    bool is_news_Set() const;
    bool is_news_Valid() const;

    OAIObject getProps() const;
    void setProps(const OAIObject &props);
    bool is_props_Set() const;
    bool is_props_Valid() const;

    bool isTestMode() const;
    void setTestMode(const bool &test_mode);
    bool is_test_mode_Set() const;
    bool is_test_mode_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString news;
    bool m_news_isSet;
    bool m_news_isValid;

    OAIObject props;
    bool m_props_isSet;
    bool m_props_isValid;

    bool test_mode;
    bool m_test_mode_isSet;
    bool m_test_mode_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDGameMutateRequest)

#endif // OAISDGameMutateRequest_H
