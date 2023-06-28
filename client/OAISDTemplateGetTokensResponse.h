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
 * OAISDTemplateGetTokensResponse.h
 *
 * Token data
 */

#ifndef OAISDTemplateGetTokensResponse_H
#define OAISDTemplateGetTokensResponse_H

#include <QJsonObject>

#include "OAISDTemplateGetTokensResponse_player.h"
#include "OAISDTemplateGetTokensResponse_token.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace stardust {
namespace core {
class OAISDTemplateGetTokensResponse_token;
class OAISDTemplateGetTokensResponse_player;

class OAISDTemplateGetTokensResponse : public OAIObject {
public:
    OAISDTemplateGetTokensResponse();
    OAISDTemplateGetTokensResponse(QString json);
    ~OAISDTemplateGetTokensResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISDTemplateGetTokensResponse_token getToken() const;
    void setToken(const OAISDTemplateGetTokensResponse_token &token);
    bool is_token_Set() const;
    bool is_token_Valid() const;

    OAISDTemplateGetTokensResponse_player getPlayer() const;
    void setPlayer(const OAISDTemplateGetTokensResponse_player &player);
    bool is_player_Set() const;
    bool is_player_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAISDTemplateGetTokensResponse_token token;
    bool m_token_isSet;
    bool m_token_isValid;

    OAISDTemplateGetTokensResponse_player player;
    bool m_player_isSet;
    bool m_player_isValid;
};

} // namespace stardust
} // namespace core

Q_DECLARE_METATYPE(stardust::core::OAISDTemplateGetTokensResponse)

#endif // OAISDTemplateGetTokensResponse_H
