// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#include "NJSTezosLikeAccountCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSTezosLikeAccount::broadcastRawTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::broadcastRawTransaction needs 1 arguments");
    }

    //Check if parameters have correct types
    if(!info[0]->IsString())
    {
        Nan::ThrowError("info[0] should be a hexadecimal string.");
    }
    Nan::Utf8String string_arg_0(info[0]);
    auto arg_0 = djinni::js::hex::toByteArray(std::string(*string_arg_0, string_arg_0.length()));


    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSStringCallback *njs_ptr_arg_1 = new NJSStringCallback(arg_1_resolver);
    std::shared_ptr<NJSStringCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::broadcastRawTransaction : implementation of TezosLikeAccount is not valid");
    }
    cpp_impl->broadcastRawTransaction(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSTezosLikeAccount::broadcastTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::broadcastTransaction needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSTezosLikeTransaction failed");
    }


    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSStringCallback *njs_ptr_arg_1 = new NJSStringCallback(arg_1_resolver);
    std::shared_ptr<NJSStringCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::broadcastTransaction : implementation of TezosLikeAccount is not valid");
    }
    cpp_impl->broadcastTransaction(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSTezosLikeAccount::buildTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::buildTransaction needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::buildTransaction : implementation of TezosLikeAccount is not valid");
    }

    auto result = cpp_impl->buildTransaction();

    //Wrap result in node object
    auto arg_0 = NJSTezosLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeAccount::getStorage) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::getStorage needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigIntCallback *njs_ptr_arg_1 = new NJSBigIntCallback(arg_1_resolver);
    std::shared_ptr<NJSBigIntCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::getStorage : implementation of TezosLikeAccount is not valid");
    }
    cpp_impl->getStorage(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSTezosLikeAccount::getEstimatedGasLimit) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::getEstimatedGasLimit needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigIntCallback *njs_ptr_arg_1 = new NJSBigIntCallback(arg_1_resolver);
    std::shared_ptr<NJSBigIntCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::getEstimatedGasLimit : implementation of TezosLikeAccount is not valid");
    }
    cpp_impl->getEstimatedGasLimit(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSTezosLikeAccount::getFees) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::getFees needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigIntCallback *njs_ptr_arg_0 = new NJSBigIntCallback(arg_0_resolver);
    std::shared_ptr<NJSBigIntCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::getFees : implementation of TezosLikeAccount is not valid");
    }
    cpp_impl->getFees(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSTezosLikeAccount::getOriginatedAccounts) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::getOriginatedAccounts needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeAccount::getOriginatedAccounts : implementation of TezosLikeAccount is not valid");
    }

    auto result = cpp_impl->getOriginatedAccounts();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = NJSTezosLikeOriginatedAccount::wrap(result[arg_0_id]);

        Nan::Set(arg_0, (int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSTezosLikeAccount::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSTezosLikeAccount function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSTezosLikeAccount::TezosLikeAccount_prototype;

Local<Object> NJSTezosLikeAccount::wrap(const std::shared_ptr<ledger::core::api::TezosLikeAccount> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(TezosLikeAccount_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::TezosLikeAccount>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSTezosLikeAccount::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSTezosLikeAccount::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeAccount>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSTezosLikeAccount::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSTezosLikeAccount::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSTezosLikeAccount").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"broadcastRawTransaction", broadcastRawTransaction);
    Nan::SetPrototypeMethod(func_template,"broadcastTransaction", broadcastTransaction);
    Nan::SetPrototypeMethod(func_template,"buildTransaction", buildTransaction);
    Nan::SetPrototypeMethod(func_template,"getStorage", getStorage);
    Nan::SetPrototypeMethod(func_template,"getEstimatedGasLimit", getEstimatedGasLimit);
    Nan::SetPrototypeMethod(func_template,"getFees", getFees);
    Nan::SetPrototypeMethod(func_template,"getOriginatedAccounts", getOriginatedAccounts);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    TezosLikeAccount_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSTezosLikeAccount").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
