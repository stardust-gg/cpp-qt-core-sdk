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

/*
 * OAISDGameGetResponse.h
 *
 * This is the data output json model
 */

#ifndef OAISDGameGetResponse_H
#define OAISDGameGetResponse_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAISDGameGetResponse_fees_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {
class OAISDGameGetResponse_fees_inner;

class OAISDGameGetResponse : public OAIObject {
public:
    OAISDGameGetResponse();
    OAISDGameGetResponse(QString json);
    ~OAISDGameGetResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getOwnerId() const;
    void setOwnerId(const QString &owner_id);
    bool is_owner_id_Set() const;
    bool is_owner_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getDesc() const;
    void setDesc(const QString &desc);
    bool is_desc_Set() const;
    bool is_desc_Valid() const;

    QString getImage() const;
    void setImage(const QString &image);
    bool is_image_Set() const;
    bool is_image_Valid() const;

    QString getBucketName() const;
    void setBucketName(const QString &bucket_name);
    bool is_bucket_name_Set() const;
    bool is_bucket_name_Valid() const;

    QString getNews() const;
    void setNews(const QString &news);
    bool is_news_Set() const;
    bool is_news_Valid() const;

    QList<OAISDGameGetResponse_fees_inner> getFees() const;
    void setFees(const QList<OAISDGameGetResponse_fees_inner> &fees);
    bool is_fees_Set() const;
    bool is_fees_Valid() const;

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

    qint32 id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString owner_id;
    bool m_owner_id_isSet;
    bool m_owner_id_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString desc;
    bool m_desc_isSet;
    bool m_desc_isValid;

    QString image;
    bool m_image_isSet;
    bool m_image_isValid;

    QString bucket_name;
    bool m_bucket_name_isSet;
    bool m_bucket_name_isValid;

    QString news;
    bool m_news_isSet;
    bool m_news_isValid;

    QList<OAISDGameGetResponse_fees_inner> fees;
    bool m_fees_isSet;
    bool m_fees_isValid;

    OAIObject props;
    bool m_props_isSet;
    bool m_props_isValid;

    bool test_mode;
    bool m_test_mode_isSet;
    bool m_test_mode_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDGameGetResponse)

#endif // OAISDGameGetResponse_H
