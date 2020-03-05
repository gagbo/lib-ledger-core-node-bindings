// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKEADDRESS_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKEADDRESS_HPP


#include "../include/CosmosLikeNetworkParameters.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/CosmosLikeAddress.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeAddress final {
public:

    static void Initialize(Local<Object> target);
    NJSCosmosLikeAddress() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeAddress> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeAddress_prototype;

private:
    /**
     * Gets the version of the address.
     * @return The version of the address
     */
    static NAN_METHOD(getVersion);

    /**
     * Gets the raw hash160 of the public key
     * @return The 20 bytes of the public key hash160
     */
    static NAN_METHOD(getHash160);

    /**
     * Gets the network parameters used for serializing the address.
     * @return The network parameters of the address
     */
    static NAN_METHOD(getNetworkParameters);

    /**
     * Encodes to Bech32.
     * @return The Bech32 encoding
     */
    static NAN_METHOD(toBech32);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSCOSMOSLIKEADDRESS_HPP
