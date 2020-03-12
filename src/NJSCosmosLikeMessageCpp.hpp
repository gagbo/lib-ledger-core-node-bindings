// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKEMESSAGE_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKEMESSAGE_HPP


#include "../include/CosmosLikeAmount.hpp"
#include "../include/CosmosLikeMsgBeginRedelegate.hpp"
#include "../include/CosmosLikeMsgCreateValidator.hpp"
#include "../include/CosmosLikeMsgDelegate.hpp"
#include "../include/CosmosLikeMsgDeposit.hpp"
#include "../include/CosmosLikeMsgEditValidator.hpp"
#include "../include/CosmosLikeMsgMultiSend.hpp"
#include "../include/CosmosLikeMsgSend.hpp"
#include "../include/CosmosLikeMsgSetWithdrawAddress.hpp"
#include "../include/CosmosLikeMsgSubmitProposal.hpp"
#include "../include/CosmosLikeMsgType.hpp"
#include "../include/CosmosLikeMsgUndelegate.hpp"
#include "../include/CosmosLikeMsgUnjail.hpp"
#include "../include/CosmosLikeMsgVote.hpp"
#include "../include/CosmosLikeMsgWithdrawDelegationReward.hpp"
#include "../include/CosmosLikeMsgWithdrawDelegatorReward.hpp"
#include "../include/CosmosLikeMsgWithdrawValidatorCommission.hpp"
#include "../include/CosmosLikeMultiSendInput.hpp"
#include "../include/CosmosLikeMultiSendOutput.hpp"
#include "../include/CosmosLikeValidatorDescription.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/CosmosLikeMessage.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeMessage final {
public:

    static void Initialize(Local<Object> target);
    NJSCosmosLikeMessage() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeMessage> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeMessage_prototype;

private:
    /**
     * Get type
     * @return CosmosLikeMsgType a message type
     */
    static NAN_METHOD(getMessageType);

    /**
     * Get type
     * @return string a message type in string format
     */
    static NAN_METHOD(getRawMessageType);

    /**
     * Wrap the given CosmosLikeMsgSend into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgSend);

    /**
     * Unwrap a message to a CosmosLikeMsgSend
     * @param msg The message to unwrap
     * @return CosmosLikeMsgDelegate the unwrapped message
     */
    static NAN_METHOD(unwrapMsgSend);

    /**
     * Wrap the given CosmosLikeMsgDelegate into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgDelegate);

    /**
     * Unwrap a message to a CosmosLikeMsgDelegate
     * @param msg The message to unwrap
     * @return CosmosLikeMsgDelegate the unwrapped message
     */
    static NAN_METHOD(unwrapMsgDelegate);

    /**
     * Wrap the given CosmosLikeMsgUndelegate into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgUndelegate);

    /**
     * Unwrap a message to a CosmosLikeMsgUndelegate
     * @param msg The message to unwrap
     * @return CosmosLikeMsgUndelegate the unwrapped message
     */
    static NAN_METHOD(unwrapMsgUndelegate);

    /**
     * Wrap the given CosmosLikeMsgBeginRedelegate into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgBeginRedelegate);

    /**
     * Unwrap a message to a CosmosLikeMsgBeginRedelegate
     * @param msg The message to unwrap
     * @return CosmosLikeMsgBeginRedelegate the unwrapped message
     */
    static NAN_METHOD(unwrapMsgBeginRedelegate);

    /**
     * Wrap the given CosmosLikeMsgSubmitProposal into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgSubmitProposal);

    /**
     * Unwrap a message to a CosmosLikeMsgSubmitProposal
     * @param msg The message to unwrap
     * @return CosmosLikeMsgSubmitProposal the unwrapped message
     */
    static NAN_METHOD(unwrapMsgSubmitProposal);

    /**
     * Wrap the given CosmosLikeMsgVote into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgVote);

    /**
     * Unwrap a message to a CosmosLikeMsgVote
     * @param msg The message to unwrap
     * @return CosmosLikeMsgVote the unwrapped message
     */
    static NAN_METHOD(unwrapMsgVote);

    /**
     * Wrap the given CosmosLikeMsgDeposit into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgDeposit);

    /**
     * Unwrap a message to a CosmosLikeMsgDeposit
     * @param msg The message to unwrap
     * @return CosmosLikeMsgDeposit the unwrapped message
     */
    static NAN_METHOD(unwrapMsgDeposit);

    /**
     * Wrap the given CosmosLikeMsgWithdrawDelegationReward into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgWithdrawDelegationReward);

    /**
     * Unwrap a message to a CosmosLikeMsgWithdrawDelegationReward
     * @param msg The message to unwrap
     * @return CosmosLikeMsgWithdrawDelegationReward the unwrapped message
     */
    static NAN_METHOD(unwrapMsgWithdrawDelegationReward);

    /**
     * Wrap the given CosmosLikeMsgMultiSend into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgMultiSend);

    /**
     * Unwrap a message to a CosmosLikeMsgMultiSend
     * @param msg The message to unwrap
     * @return CosmosLikeMsgMultiSend the unwrapped message
     */
    static NAN_METHOD(unwrapMsgMultiSend);

    /**
     * Wrap the given CosmosLikeMsgCreateValidator into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgCreateValidator);

    /**
     * Unwrap a message to a CosmosLikeMsgCreateValidator
     * @param msg The message to unwrap
     * @return CosmosLikeMsgCreateValidator the unwrapped message
     */
    static NAN_METHOD(unwrapMsgCreateValidator);

    /**
     * Wrap the given CosmosLikeMsgEditValidator into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgEditValidator);

    /**
     * Unwrap a message to a CosmosLikeMsgEditValidator
     * @param msg The message to unwrap
     * @return CosmosLikeMsgEditValidator the unwrapped message
     */
    static NAN_METHOD(unwrapMsgEditValidator);

    /**
     * Wrap the given CosmosLikeMsgSetWithdrawAddress into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgSetWithdrawAddress);

    /**
     * Unwrap a message to a CosmosLikeMsgSetWithdrawAddress
     * @param msg The message to unwrap
     * @return CosmosLikeMsgSetWithdrawAddress the unwrapped message
     */
    static NAN_METHOD(unwrapMsgSetWithdrawAddress);

    /**
     * Wrap the given CosmosLikeMsgWithdrawDelegatorReward into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgWithdrawDelegatorReward);

    /**
     * Unwrap a message to a CosmosLikeMsgWithdrawDelegatorReward
     * @param msg The message to unwrap
     * @return CosmosLikeMsgWithdrawDelegatorReward the unwrapped message
     */
    static NAN_METHOD(unwrapMsgWithdrawDelegatorReward);

    /**
     * Wrap the given CosmosLikeMsgWithdrawValidatorCommission into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgWithdrawValidatorCommission);

    /**
     * Unwrap a message to a CosmosLikeMsgWithdrawValidatorCommission
     * @param msg The message to unwrap
     * @return CosmosLikeMsgWithdrawValidatorCommission the unwrapped message
     */
    static NAN_METHOD(unwrapMsgWithdrawValidatorCommission);

    /**
     * Wrap the given CosmosLikeMsgUnjail into a CosmosLikeMessage
     * @param msg The message you need to wrap.
     * @return CosmosLikeMessage A wrapped message.
     */
    static NAN_METHOD(wrapMsgUnjail);

    /**
     * Unwrap a message to a CosmosLikeMsgUnjail
     * @param msg The message to unwrap
     * @return CosmosLikeMsgUnjail the unwrapped message
     */
    static NAN_METHOD(unwrapMsgUnjail);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSCOSMOSLIKEMESSAGE_HPP
