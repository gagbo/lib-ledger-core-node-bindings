// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeInputCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeInput::getAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getAddress needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getAddress : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getAddress();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<String>(arg_0_optional).ToLocalChecked();
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getPublicKeys) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPublicKeys needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPublicKeys : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getPublicKeys();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<String>("0x" + djinni::js::hex::toString(result[arg_0_id])).ToLocalChecked();

        Nan::Set(arg_0, (int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getDerivationPath) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getDerivationPath needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getDerivationPath : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getDerivationPath();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = NJSDerivationPath::wrap(result[arg_0_id]);

        Nan::Set(arg_0, (int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getValue) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getValue needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getValue : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getValue();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);



    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getPreviousTxHash) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousTxHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousTxHash : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getPreviousTxHash();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<String>(arg_0_optional).ToLocalChecked();
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::isCoinbase) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::isCoinbase needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::isCoinbase : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->isCoinbase();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getCoinbase) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getCoinbase needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getCoinbase : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getCoinbase();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<String>(arg_0_optional).ToLocalChecked();
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getPreviousOutputIndex) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousOutputIndex needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousOutputIndex : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getPreviousOutputIndex();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<Int32>(arg_0_optional);
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getPreviousOuput) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousOuput needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousOuput : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getPreviousOuput();

    //Wrap result in node object
    auto arg_0 = NJSBitcoinLikeOutput::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getScriptSig) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getScriptSig needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getScriptSig : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getScriptSig();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>("0x" + djinni::js::hex::toString(result)).ToLocalChecked();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::parseScriptSig) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::parseScriptSig needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::parseScriptSig : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->parseScriptSig();

    //Wrap result in node object
    auto arg_0 = NJSBitcoinLikeScript::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::setScriptSig) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::setScriptSig needs 1 arguments");
    }

    //Check if parameters have correct types
    if(!info[0]->IsString())
    {
        Nan::ThrowError("info[0] should be a hexadecimal string.");
    }
    std::vector<uint8_t> arg_0;
    Nan::Utf8String str_arg_0(info[0]);
    std::string string_arg_0(*str_arg_0, str_arg_0.length());
    if (string_arg_0.rfind("0x", 0) == 0)
    {
        arg_0 = djinni::js::hex::toByteArray(string_arg_0.substr(2));
    }
    else
    {
        arg_0 = std::vector<uint8_t>(string_arg_0.cbegin(), string_arg_0.cend());
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::setScriptSig : implementation of BitcoinLikeInput is not valid");
    }
    cpp_impl->setScriptSig(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::pushToScriptSig) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::pushToScriptSig needs 1 arguments");
    }

    //Check if parameters have correct types
    if(!info[0]->IsString())
    {
        Nan::ThrowError("info[0] should be a hexadecimal string.");
    }
    std::vector<uint8_t> arg_0;
    Nan::Utf8String str_arg_0(info[0]);
    std::string string_arg_0(*str_arg_0, str_arg_0.length());
    if (string_arg_0.rfind("0x", 0) == 0)
    {
        arg_0 = djinni::js::hex::toByteArray(string_arg_0.substr(2));
    }
    else
    {
        arg_0 = std::vector<uint8_t>(string_arg_0.cbegin(), string_arg_0.cend());
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::pushToScriptSig : implementation of BitcoinLikeInput is not valid");
    }
    cpp_impl->pushToScriptSig(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::setSequence) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::setSequence needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::setSequence : implementation of BitcoinLikeInput is not valid");
    }
    cpp_impl->setSequence(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getSequence) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getSequence needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getSequence : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getSequence();

    //Wrap result in node object
    auto arg_0 = Nan::New<Number>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getPreviousTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousTransaction needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBinaryCallback *njs_ptr_arg_0 = new NJSBinaryCallback(arg_0_resolver);
    std::shared_ptr<NJSBinaryCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousTransaction : implementation of BitcoinLikeInput is not valid");
    }
    cpp_impl->getPreviousTransaction(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSBitcoinLikeInput::setP2PKHSigScript) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::setP2PKHSigScript needs 1 arguments");
    }

    //Check if parameters have correct types
    if(!info[0]->IsString())
    {
        Nan::ThrowError("info[0] should be a hexadecimal string.");
    }
    std::vector<uint8_t> arg_0;
    Nan::Utf8String str_arg_0(info[0]);
    std::string string_arg_0(*str_arg_0, str_arg_0.length());
    if (string_arg_0.rfind("0x", 0) == 0)
    {
        arg_0 = djinni::js::hex::toByteArray(string_arg_0.substr(2));
    }
    else
    {
        arg_0 = std::vector<uint8_t>(string_arg_0.cbegin(), string_arg_0.cend());
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::setP2PKHSigScript : implementation of BitcoinLikeInput is not valid");
    }
    cpp_impl->setP2PKHSigScript(arg_0);
}

NAN_METHOD(NJSBitcoinLikeInput::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeInput function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeInput::BitcoinLikeInput_prototype;

Local<Object> NJSBitcoinLikeInput::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeInput> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeInput_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeInput::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSBitcoinLikeInput::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeInput>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBitcoinLikeInput::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeInput::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeInput").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getAddress", getAddress);
    Nan::SetPrototypeMethod(func_template,"getPublicKeys", getPublicKeys);
    Nan::SetPrototypeMethod(func_template,"getDerivationPath", getDerivationPath);
    Nan::SetPrototypeMethod(func_template,"getValue", getValue);
    Nan::SetPrototypeMethod(func_template,"getPreviousTxHash", getPreviousTxHash);
    Nan::SetPrototypeMethod(func_template,"isCoinbase", isCoinbase);
    Nan::SetPrototypeMethod(func_template,"getCoinbase", getCoinbase);
    Nan::SetPrototypeMethod(func_template,"getPreviousOutputIndex", getPreviousOutputIndex);
    Nan::SetPrototypeMethod(func_template,"getPreviousOuput", getPreviousOuput);
    Nan::SetPrototypeMethod(func_template,"getScriptSig", getScriptSig);
    Nan::SetPrototypeMethod(func_template,"parseScriptSig", parseScriptSig);
    Nan::SetPrototypeMethod(func_template,"setScriptSig", setScriptSig);
    Nan::SetPrototypeMethod(func_template,"pushToScriptSig", pushToScriptSig);
    Nan::SetPrototypeMethod(func_template,"setSequence", setSequence);
    Nan::SetPrototypeMethod(func_template,"getSequence", getSequence);
    Nan::SetPrototypeMethod(func_template,"getPreviousTransaction", getPreviousTransaction);
    Nan::SetPrototypeMethod(func_template,"setP2PKHSigScript", setP2PKHSigScript);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    BitcoinLikeInput_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSBitcoinLikeInput").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
