// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "NJSBitcoinLikeAddressCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeAddress::getVersion) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::getVersion needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::getVersion : implementation of BitcoinLikeAddress is not valid");
    }

    auto result = cpp_impl->getVersion();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>("0x" + djinni::js::hex::toString(result)).ToLocalChecked();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeAddress::getHash160) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::getHash160 needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::getHash160 : implementation of BitcoinLikeAddress is not valid");
    }

    auto result = cpp_impl->getHash160();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>("0x" + djinni::js::hex::toString(result)).ToLocalChecked();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeAddress::getNetworkParameters) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::getNetworkParameters needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::getNetworkParameters : implementation of BitcoinLikeAddress is not valid");
    }

    auto result = cpp_impl->getNetworkParameters();

    //Wrap result in node object
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<String>(result.Identifier).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_1);
    auto arg_0_2 = Nan::New<String>("0x" + djinni::js::hex::toString(result.P2PKHVersion)).ToLocalChecked();

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("P2PKHVersion").ToLocalChecked(), arg_0_2);
    auto arg_0_3 = Nan::New<String>("0x" + djinni::js::hex::toString(result.P2SHVersion)).ToLocalChecked();

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("P2SHVersion").ToLocalChecked(), arg_0_3);
    auto arg_0_4 = Nan::New<String>("0x" + djinni::js::hex::toString(result.XPUBVersion)).ToLocalChecked();

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_4);
    auto arg_0_5 = Nan::New<Integer>((int)result.FeePolicy);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("FeePolicy").ToLocalChecked(), arg_0_5);
    auto arg_0_6 = Nan::New<Number>(result.DustAmount);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("DustAmount").ToLocalChecked(), arg_0_6);
    auto arg_0_7 = Nan::New<String>(result.MessagePrefix).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_7);
    auto arg_0_8 = Nan::New<Boolean>(result.UsesTimestampedTransaction);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked(), arg_0_8);
    auto arg_0_9 = Nan::New<Number>(result.TimestampDelay);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_9);
    auto arg_0_10 = Nan::New<String>("0x" + djinni::js::hex::toString(result.SigHash)).ToLocalChecked();

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("SigHash").ToLocalChecked(), arg_0_10);
    Local<Array> arg_0_11 = Nan::New<Array>();
    for(size_t arg_0_11_id = 0; arg_0_11_id < result.AdditionalBIPs.size(); arg_0_11_id++)
    {
        auto arg_0_11_elem = Nan::New<String>(result.AdditionalBIPs[arg_0_11_id]).ToLocalChecked();
        Nan::Set(arg_0_11, (int)arg_0_11_id,arg_0_11_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("AdditionalBIPs").ToLocalChecked(), arg_0_11);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeAddress::toBase58) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::toBase58 needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::toBase58 : implementation of BitcoinLikeAddress is not valid");
    }

    auto result = cpp_impl->toBase58();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeAddress::toBech32) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::toBech32 needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::toBech32 : implementation of BitcoinLikeAddress is not valid");
    }

    auto result = cpp_impl->toBech32();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeAddress::isP2SH) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::isP2SH needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::isP2SH : implementation of BitcoinLikeAddress is not valid");
    }

    auto result = cpp_impl->isP2SH();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeAddress::isP2PKH) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::isP2PKH needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::isP2PKH : implementation of BitcoinLikeAddress is not valid");
    }

    auto result = cpp_impl->isP2PKH();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeAddress::isP2WSH) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::isP2WSH needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::isP2WSH : implementation of BitcoinLikeAddress is not valid");
    }

    auto result = cpp_impl->isP2WSH();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeAddress::isP2WPKH) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::isP2WPKH needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress::isP2WPKH : implementation of BitcoinLikeAddress is not valid");
    }

    auto result = cpp_impl->isP2WPKH();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSBitcoinLikeAddress::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeAddress function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeAddress::BitcoinLikeAddress_prototype;

Local<Object> NJSBitcoinLikeAddress::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeAddress> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeAddress_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeAddress::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSBitcoinLikeAddress::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeAddress>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBitcoinLikeAddress::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeAddress::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeAddress").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getVersion", getVersion);
    Nan::SetPrototypeMethod(func_template,"getHash160", getHash160);
    Nan::SetPrototypeMethod(func_template,"getNetworkParameters", getNetworkParameters);
    Nan::SetPrototypeMethod(func_template,"toBase58", toBase58);
    Nan::SetPrototypeMethod(func_template,"toBech32", toBech32);
    Nan::SetPrototypeMethod(func_template,"isP2SH", isP2SH);
    Nan::SetPrototypeMethod(func_template,"isP2PKH", isP2PKH);
    Nan::SetPrototypeMethod(func_template,"isP2WSH", isP2WSH);
    Nan::SetPrototypeMethod(func_template,"isP2WPKH", isP2WPKH);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    BitcoinLikeAddress_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSBitcoinLikeAddress").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
