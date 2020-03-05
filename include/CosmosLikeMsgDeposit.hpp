// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEMSGDEPOSIT_HPP
#define DJINNI_GENERATED_COSMOSLIKEMSGDEPOSIT_HPP

#include "CosmosLikeAmount.hpp"
#include <iostream>
#include <string>
#include <utility>
#include <vector>

namespace ledger { namespace core { namespace api {

struct CosmosLikeMsgDeposit final {
    std::string depositor;
    std::string proposalId;
    std::vector<CosmosLikeAmount> amount;

    CosmosLikeMsgDeposit(std::string depositor_,
                         std::string proposalId_,
                         std::vector<CosmosLikeAmount> amount_)
    : depositor(std::move(depositor_))
    , proposalId(std::move(proposalId_))
    , amount(std::move(amount_))
    {}

    CosmosLikeMsgDeposit(const CosmosLikeMsgDeposit& cpy) {
       this->depositor = cpy.depositor;
       this->proposalId = cpy.proposalId;
       this->amount = cpy.amount;
    }

    CosmosLikeMsgDeposit() = default;


    CosmosLikeMsgDeposit& operator=(const CosmosLikeMsgDeposit& cpy) {
       this->depositor = cpy.depositor;
       this->proposalId = cpy.proposalId;
       this->amount = cpy.amount;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(depositor, proposalId, amount);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(depositor, proposalId, amount);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_COSMOSLIKEMSGDEPOSIT_HPP
