// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeTransactionBuilderCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeTransactionBuilder::addInput) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addInput needs 3 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();
    auto arg_2 = Nan::To<int32_t>(info[2]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addInput : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->addInput(arg_0,arg_1,arg_2);

    //Wrap result in node object
    auto arg_3 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_3);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::addOutput) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addOutput needs 2 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::Amount>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }

    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_1 = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeScript>::Unwrap(njs_arg_1);
    if(!arg_1)
    {
        return Nan::ThrowError("NodeJs Object to NJSBitcoinLikeScript failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addOutput : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->addOutput(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::addChangePath) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addChangePath needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addChangePath : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->addChangePath(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::excludeUtxo) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::excludeUtxo needs 2 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::excludeUtxo : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->excludeUtxo(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::setNumberOfChangeAddresses) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setNumberOfChangeAddresses needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setNumberOfChangeAddresses : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setNumberOfChangeAddresses(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::setMaxAmountOnChange) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setMaxAmountOnChange needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::Amount>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setMaxAmountOnChange : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setMaxAmountOnChange(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::setMinAmountOnChange) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setMinAmountOnChange needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::Amount>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setMinAmountOnChange : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setMinAmountOnChange(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::pickInputs) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::pickInputs needs 2 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = (ledger::core::api::BitcoinLikePickingStrategy)Nan::To<int>(info[0]).FromJust();
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::pickInputs : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->pickInputs(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::sendToAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::sendToAddress needs 2 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::Amount>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }

    Nan::Utf8String string_arg_1(info[1]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_1 = std::string(*string_arg_1);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::sendToAddress : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->sendToAddress(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::wipeToAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::wipeToAddress needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::wipeToAddress : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->wipeToAddress(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::setFeesPerByte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setFeesPerByte needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::Amount>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setFeesPerByte : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setFeesPerByte(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::build) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::build needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBitcoinLikeTransactionCallback *njs_ptr_arg_0 = new NJSBitcoinLikeTransactionCallback(arg_0_resolver);
    std::shared_ptr<NJSBitcoinLikeTransactionCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::build : implementation of BitcoinLikeTransactionBuilder is not valid");
    }
    cpp_impl->build(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::clone) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::clone needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::clone : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->clone();

    //Wrap result in node object
    auto arg_0 = NJSBitcoinLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::reset) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::reset needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::reset : implementation of BitcoinLikeTransactionBuilder is not valid");
    }
    cpp_impl->reset();
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::parseRawUnsignedTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::parseRawUnsignedTransaction needs 3 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("walletType").ToLocalChecked()).ToLocalChecked();
    auto arg_0_1 = (ledger::core::api::WalletType)Nan::To<int>(field_arg_0_1).FromJust();

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
    Nan::Utf8String string_arg_0_2(field_arg_0_2->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0_2 = std::string(*string_arg_0_2);

    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("bip44CoinType").ToLocalChecked()).ToLocalChecked();
    auto arg_0_3 = Nan::To<int32_t>(field_arg_0_3).FromJust();

    auto field_arg_0_4 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("paymentUriScheme").ToLocalChecked()).ToLocalChecked();
    Nan::Utf8String string_arg_0_4(field_arg_0_4->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0_4 = std::string(*string_arg_0_4);

    auto field_arg_0_5 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("units").ToLocalChecked()).ToLocalChecked();
    vector<CurrencyUnit> arg_0_5;
    Local<Array> arg_0_5_container = Local<Array>::Cast(field_arg_0_5);
    for(uint32_t arg_0_5_id = 0; arg_0_5_id < arg_0_5_container->Length(); arg_0_5_id++)
    {
        if(arg_0_5_container->Get(Nan::GetCurrentContext(), arg_0_5_id).ToLocalChecked()->IsObject())
        {

            auto field_arg_0_5_elem_1 = Nan::Get(arg_0_5_container->Get(Nan::GetCurrentContext(), arg_0_5_id).ToLocalChecked()->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
            Nan::Utf8String string_arg_0_5_elem_1(field_arg_0_5_elem_1->ToString(Nan::GetCurrentContext()).ToLocalChecked());
            auto arg_0_5_elem_1 = std::string(*string_arg_0_5_elem_1);

            auto field_arg_0_5_elem_2 = Nan::Get(arg_0_5_container->Get(Nan::GetCurrentContext(), arg_0_5_id).ToLocalChecked()->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("symbol").ToLocalChecked()).ToLocalChecked();
            Nan::Utf8String string_arg_0_5_elem_2(field_arg_0_5_elem_2->ToString(Nan::GetCurrentContext()).ToLocalChecked());
            auto arg_0_5_elem_2 = std::string(*string_arg_0_5_elem_2);

            auto field_arg_0_5_elem_3 = Nan::Get(arg_0_5_container->Get(Nan::GetCurrentContext(), arg_0_5_id).ToLocalChecked()->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("code").ToLocalChecked()).ToLocalChecked();
            Nan::Utf8String string_arg_0_5_elem_3(field_arg_0_5_elem_3->ToString(Nan::GetCurrentContext()).ToLocalChecked());
            auto arg_0_5_elem_3 = std::string(*string_arg_0_5_elem_3);

            auto field_arg_0_5_elem_4 = Nan::Get(arg_0_5_container->Get(Nan::GetCurrentContext(), arg_0_5_id).ToLocalChecked()->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("numberOfDecimal").ToLocalChecked()).ToLocalChecked();
            auto arg_0_5_elem_4 = Nan::To<int32_t>(field_arg_0_5_elem_4).FromJust();
            CurrencyUnit arg_0_5_elem(arg_0_5_elem_1, arg_0_5_elem_2, arg_0_5_elem_3, arg_0_5_elem_4);

            arg_0_5.emplace_back(arg_0_5_elem);
        }
    }


    auto field_arg_0_6 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();
    auto arg_0_6 = std::experimental::optional<BitcoinLikeNetworkParameters>();
    if(!field_arg_0_6->IsNull() && !field_arg_0_6->IsUndefined())
    {

        auto field_opt_arg_0_6_1 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
        Nan::Utf8String string_opt_arg_0_6_1(field_opt_arg_0_6_1->ToString(Nan::GetCurrentContext()).ToLocalChecked());
        auto opt_arg_0_6_1 = std::string(*string_opt_arg_0_6_1);

        auto field_opt_arg_0_6_2 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("P2PKHVersion").ToLocalChecked()).ToLocalChecked();
        if(!field_opt_arg_0_6_2->IsString())
        {
            Nan::ThrowError("field_opt_arg_0_6_2 should be a hexadecimal string.");
        }
        Nan::Utf8String string_opt_arg_0_6_2(field_opt_arg_0_6_2);
        auto opt_arg_0_6_2 = djinni::js::hex::toByteArray(std::string(*string_opt_arg_0_6_2, string_opt_arg_0_6_2.length()));


        auto field_opt_arg_0_6_3 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("P2SHVersion").ToLocalChecked()).ToLocalChecked();
        if(!field_opt_arg_0_6_3->IsString())
        {
            Nan::ThrowError("field_opt_arg_0_6_3 should be a hexadecimal string.");
        }
        Nan::Utf8String string_opt_arg_0_6_3(field_opt_arg_0_6_3);
        auto opt_arg_0_6_3 = djinni::js::hex::toByteArray(std::string(*string_opt_arg_0_6_3, string_opt_arg_0_6_3.length()));


        auto field_opt_arg_0_6_4 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
        if(!field_opt_arg_0_6_4->IsString())
        {
            Nan::ThrowError("field_opt_arg_0_6_4 should be a hexadecimal string.");
        }
        Nan::Utf8String string_opt_arg_0_6_4(field_opt_arg_0_6_4);
        auto opt_arg_0_6_4 = djinni::js::hex::toByteArray(std::string(*string_opt_arg_0_6_4, string_opt_arg_0_6_4.length()));


        auto field_opt_arg_0_6_5 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("FeePolicy").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_5 = (ledger::core::api::BitcoinLikeFeePolicy)Nan::To<int>(field_opt_arg_0_6_5).FromJust();

        auto field_opt_arg_0_6_6 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("DustAmount").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_6 = Nan::To<int64_t>(field_opt_arg_0_6_6).FromJust();

        auto field_opt_arg_0_6_7 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
        Nan::Utf8String string_opt_arg_0_6_7(field_opt_arg_0_6_7->ToString(Nan::GetCurrentContext()).ToLocalChecked());
        auto opt_arg_0_6_7 = std::string(*string_opt_arg_0_6_7);

        auto field_opt_arg_0_6_8 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_8 = Nan::To<bool>(field_opt_arg_0_6_8).FromJust();

        auto field_opt_arg_0_6_9 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("TimestampDelay").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_9 = Nan::To<int64_t>(field_opt_arg_0_6_9).FromJust();

        auto field_opt_arg_0_6_10 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("SigHash").ToLocalChecked()).ToLocalChecked();
        if(!field_opt_arg_0_6_10->IsString())
        {
            Nan::ThrowError("field_opt_arg_0_6_10 should be a hexadecimal string.");
        }
        Nan::Utf8String string_opt_arg_0_6_10(field_opt_arg_0_6_10);
        auto opt_arg_0_6_10 = djinni::js::hex::toByteArray(std::string(*string_opt_arg_0_6_10, string_opt_arg_0_6_10.length()));


        auto field_opt_arg_0_6_11 = Nan::Get(field_arg_0_6->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("AdditionalBIPs").ToLocalChecked()).ToLocalChecked();
        vector<std::string> opt_arg_0_6_11;
        Local<Array> opt_arg_0_6_11_container = Local<Array>::Cast(field_opt_arg_0_6_11);
        for(uint32_t opt_arg_0_6_11_id = 0; opt_arg_0_6_11_id < opt_arg_0_6_11_container->Length(); opt_arg_0_6_11_id++)
        {
            if(opt_arg_0_6_11_container->Get(Nan::GetCurrentContext(), opt_arg_0_6_11_id).ToLocalChecked()->IsString())
            {
                Nan::Utf8String string_opt_arg_0_6_11_elem(opt_arg_0_6_11_container->Get(Nan::GetCurrentContext(), opt_arg_0_6_11_id).ToLocalChecked()->ToString(Nan::GetCurrentContext()).ToLocalChecked());
                auto opt_arg_0_6_11_elem = std::string(*string_opt_arg_0_6_11_elem);
                opt_arg_0_6_11.emplace_back(opt_arg_0_6_11_elem);
            }
        }

        BitcoinLikeNetworkParameters opt_arg_0_6(opt_arg_0_6_1, opt_arg_0_6_2, opt_arg_0_6_3, opt_arg_0_6_4, opt_arg_0_6_5, opt_arg_0_6_6, opt_arg_0_6_7, opt_arg_0_6_8, opt_arg_0_6_9, opt_arg_0_6_10, opt_arg_0_6_11);

        arg_0_6.emplace(opt_arg_0_6);
    }


    auto field_arg_0_7 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("ethereumLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();
    auto arg_0_7 = std::experimental::optional<EthereumLikeNetworkParameters>();
    if(!field_arg_0_7->IsNull() && !field_arg_0_7->IsUndefined())
    {

        auto field_opt_arg_0_7_1 = Nan::Get(field_arg_0_7->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
        Nan::Utf8String string_opt_arg_0_7_1(field_opt_arg_0_7_1->ToString(Nan::GetCurrentContext()).ToLocalChecked());
        auto opt_arg_0_7_1 = std::string(*string_opt_arg_0_7_1);

        auto field_opt_arg_0_7_2 = Nan::Get(field_arg_0_7->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
        Nan::Utf8String string_opt_arg_0_7_2(field_opt_arg_0_7_2->ToString(Nan::GetCurrentContext()).ToLocalChecked());
        auto opt_arg_0_7_2 = std::string(*string_opt_arg_0_7_2);

        auto field_opt_arg_0_7_3 = Nan::Get(field_arg_0_7->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("ChainID").ToLocalChecked()).ToLocalChecked();
        Nan::Utf8String string_opt_arg_0_7_3(field_opt_arg_0_7_3->ToString(Nan::GetCurrentContext()).ToLocalChecked());
        auto opt_arg_0_7_3 = std::string(*string_opt_arg_0_7_3);

        auto field_opt_arg_0_7_4 = Nan::Get(field_arg_0_7->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
        if(!field_opt_arg_0_7_4->IsString())
        {
            Nan::ThrowError("field_opt_arg_0_7_4 should be a hexadecimal string.");
        }
        Nan::Utf8String string_opt_arg_0_7_4(field_opt_arg_0_7_4);
        auto opt_arg_0_7_4 = djinni::js::hex::toByteArray(std::string(*string_opt_arg_0_7_4, string_opt_arg_0_7_4.length()));


        auto field_opt_arg_0_7_5 = Nan::Get(field_arg_0_7->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("AdditionalEIPs").ToLocalChecked()).ToLocalChecked();
        vector<std::string> opt_arg_0_7_5;
        Local<Array> opt_arg_0_7_5_container = Local<Array>::Cast(field_opt_arg_0_7_5);
        for(uint32_t opt_arg_0_7_5_id = 0; opt_arg_0_7_5_id < opt_arg_0_7_5_container->Length(); opt_arg_0_7_5_id++)
        {
            if(opt_arg_0_7_5_container->Get(Nan::GetCurrentContext(), opt_arg_0_7_5_id).ToLocalChecked()->IsString())
            {
                Nan::Utf8String string_opt_arg_0_7_5_elem(opt_arg_0_7_5_container->Get(Nan::GetCurrentContext(), opt_arg_0_7_5_id).ToLocalChecked()->ToString(Nan::GetCurrentContext()).ToLocalChecked());
                auto opt_arg_0_7_5_elem = std::string(*string_opt_arg_0_7_5_elem);
                opt_arg_0_7_5.emplace_back(opt_arg_0_7_5_elem);
            }
        }


        auto field_opt_arg_0_7_6 = Nan::Get(field_arg_0_7->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("TimestampDelay").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_7_6 = Nan::To<int64_t>(field_opt_arg_0_7_6).FromJust();
        EthereumLikeNetworkParameters opt_arg_0_7(opt_arg_0_7_1, opt_arg_0_7_2, opt_arg_0_7_3, opt_arg_0_7_4, opt_arg_0_7_5, opt_arg_0_7_6);

        arg_0_7.emplace(opt_arg_0_7);
    }


    auto field_arg_0_8 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("rippleLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();
    auto arg_0_8 = std::experimental::optional<RippleLikeNetworkParameters>();
    if(!field_arg_0_8->IsNull() && !field_arg_0_8->IsUndefined())
    {

        auto field_opt_arg_0_8_1 = Nan::Get(field_arg_0_8->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
        Nan::Utf8String string_opt_arg_0_8_1(field_opt_arg_0_8_1->ToString(Nan::GetCurrentContext()).ToLocalChecked());
        auto opt_arg_0_8_1 = std::string(*string_opt_arg_0_8_1);

        auto field_opt_arg_0_8_2 = Nan::Get(field_arg_0_8->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
        Nan::Utf8String string_opt_arg_0_8_2(field_opt_arg_0_8_2->ToString(Nan::GetCurrentContext()).ToLocalChecked());
        auto opt_arg_0_8_2 = std::string(*string_opt_arg_0_8_2);

        auto field_opt_arg_0_8_3 = Nan::Get(field_arg_0_8->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
        if(!field_opt_arg_0_8_3->IsString())
        {
            Nan::ThrowError("field_opt_arg_0_8_3 should be a hexadecimal string.");
        }
        Nan::Utf8String string_opt_arg_0_8_3(field_opt_arg_0_8_3);
        auto opt_arg_0_8_3 = djinni::js::hex::toByteArray(std::string(*string_opt_arg_0_8_3, string_opt_arg_0_8_3.length()));


        auto field_opt_arg_0_8_4 = Nan::Get(field_arg_0_8->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("AdditionalRIPs").ToLocalChecked()).ToLocalChecked();
        vector<std::string> opt_arg_0_8_4;
        Local<Array> opt_arg_0_8_4_container = Local<Array>::Cast(field_opt_arg_0_8_4);
        for(uint32_t opt_arg_0_8_4_id = 0; opt_arg_0_8_4_id < opt_arg_0_8_4_container->Length(); opt_arg_0_8_4_id++)
        {
            if(opt_arg_0_8_4_container->Get(Nan::GetCurrentContext(), opt_arg_0_8_4_id).ToLocalChecked()->IsString())
            {
                Nan::Utf8String string_opt_arg_0_8_4_elem(opt_arg_0_8_4_container->Get(Nan::GetCurrentContext(), opt_arg_0_8_4_id).ToLocalChecked()->ToString(Nan::GetCurrentContext()).ToLocalChecked());
                auto opt_arg_0_8_4_elem = std::string(*string_opt_arg_0_8_4_elem);
                opt_arg_0_8_4.emplace_back(opt_arg_0_8_4_elem);
            }
        }


        auto field_opt_arg_0_8_5 = Nan::Get(field_arg_0_8->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("TimestampDelay").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_8_5 = Nan::To<int64_t>(field_opt_arg_0_8_5).FromJust();
        RippleLikeNetworkParameters opt_arg_0_8(opt_arg_0_8_1, opt_arg_0_8_2, opt_arg_0_8_3, opt_arg_0_8_4, opt_arg_0_8_5);

        arg_0_8.emplace(opt_arg_0_8);
    }


    auto field_arg_0_9 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("tezosLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();
    auto arg_0_9 = std::experimental::optional<TezosLikeNetworkParameters>();
    if(!field_arg_0_9->IsNull() && !field_arg_0_9->IsUndefined())
    {

        auto field_opt_arg_0_9_1 = Nan::Get(field_arg_0_9->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
        Nan::Utf8String string_opt_arg_0_9_1(field_opt_arg_0_9_1->ToString(Nan::GetCurrentContext()).ToLocalChecked());
        auto opt_arg_0_9_1 = std::string(*string_opt_arg_0_9_1);

        auto field_opt_arg_0_9_2 = Nan::Get(field_arg_0_9->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
        Nan::Utf8String string_opt_arg_0_9_2(field_opt_arg_0_9_2->ToString(Nan::GetCurrentContext()).ToLocalChecked());
        auto opt_arg_0_9_2 = std::string(*string_opt_arg_0_9_2);

        auto field_opt_arg_0_9_3 = Nan::Get(field_arg_0_9->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
        if(!field_opt_arg_0_9_3->IsString())
        {
            Nan::ThrowError("field_opt_arg_0_9_3 should be a hexadecimal string.");
        }
        Nan::Utf8String string_opt_arg_0_9_3(field_opt_arg_0_9_3);
        auto opt_arg_0_9_3 = djinni::js::hex::toByteArray(std::string(*string_opt_arg_0_9_3, string_opt_arg_0_9_3.length()));


        auto field_opt_arg_0_9_4 = Nan::Get(field_arg_0_9->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("ImplicitPrefix").ToLocalChecked()).ToLocalChecked();
        if(!field_opt_arg_0_9_4->IsString())
        {
            Nan::ThrowError("field_opt_arg_0_9_4 should be a hexadecimal string.");
        }
        Nan::Utf8String string_opt_arg_0_9_4(field_opt_arg_0_9_4);
        auto opt_arg_0_9_4 = djinni::js::hex::toByteArray(std::string(*string_opt_arg_0_9_4, string_opt_arg_0_9_4.length()));


        auto field_opt_arg_0_9_5 = Nan::Get(field_arg_0_9->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("OriginatedPrefix").ToLocalChecked()).ToLocalChecked();
        if(!field_opt_arg_0_9_5->IsString())
        {
            Nan::ThrowError("field_opt_arg_0_9_5 should be a hexadecimal string.");
        }
        Nan::Utf8String string_opt_arg_0_9_5(field_opt_arg_0_9_5);
        auto opt_arg_0_9_5 = djinni::js::hex::toByteArray(std::string(*string_opt_arg_0_9_5, string_opt_arg_0_9_5.length()));


        auto field_opt_arg_0_9_6 = Nan::Get(field_arg_0_9->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("AdditionalTIPs").ToLocalChecked()).ToLocalChecked();
        vector<std::string> opt_arg_0_9_6;
        Local<Array> opt_arg_0_9_6_container = Local<Array>::Cast(field_opt_arg_0_9_6);
        for(uint32_t opt_arg_0_9_6_id = 0; opt_arg_0_9_6_id < opt_arg_0_9_6_container->Length(); opt_arg_0_9_6_id++)
        {
            if(opt_arg_0_9_6_container->Get(Nan::GetCurrentContext(), opt_arg_0_9_6_id).ToLocalChecked()->IsString())
            {
                Nan::Utf8String string_opt_arg_0_9_6_elem(opt_arg_0_9_6_container->Get(Nan::GetCurrentContext(), opt_arg_0_9_6_id).ToLocalChecked()->ToString(Nan::GetCurrentContext()).ToLocalChecked());
                auto opt_arg_0_9_6_elem = std::string(*string_opt_arg_0_9_6_elem);
                opt_arg_0_9_6.emplace_back(opt_arg_0_9_6_elem);
            }
        }


        auto field_opt_arg_0_9_7 = Nan::Get(field_arg_0_9->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("TimestampDelay").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_9_7 = Nan::To<int64_t>(field_opt_arg_0_9_7).FromJust();
        TezosLikeNetworkParameters opt_arg_0_9(opt_arg_0_9_1, opt_arg_0_9_2, opt_arg_0_9_3, opt_arg_0_9_4, opt_arg_0_9_5, opt_arg_0_9_6, opt_arg_0_9_7);

        arg_0_9.emplace(opt_arg_0_9);
    }

    Currency arg_0(arg_0_1, arg_0_2, arg_0_3, arg_0_4, arg_0_5, arg_0_6, arg_0_7, arg_0_8, arg_0_9);

    if(!info[1]->IsString())
    {
        Nan::ThrowError("info[1] should be a hexadecimal string.");
    }
    Nan::Utf8String string_arg_1(info[1]);
    auto arg_1 = djinni::js::hex::toByteArray(std::string(*string_arg_1, string_arg_1.length()));

    auto arg_2 = std::experimental::optional<int32_t>();
    if(!info[2]->IsNull() && !info[2]->IsUndefined())
    {
        auto opt_arg_2 = Nan::To<int32_t>(info[2]).FromJust();
        arg_2.emplace(opt_arg_2);
    }


    auto result = ledger::core::api::BitcoinLikeTransactionBuilder::parseRawUnsignedTransaction(arg_0,arg_1,arg_2);

    //Wrap result in node object
    auto arg_3 = NJSBitcoinLikeTransaction::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_3);
}

NAN_METHOD(NJSBitcoinLikeTransactionBuilder::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeTransactionBuilder::BitcoinLikeTransactionBuilder_prototype;

Local<Object> NJSBitcoinLikeTransactionBuilder::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeTransactionBuilder> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeTransactionBuilder_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSBitcoinLikeTransactionBuilder::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeTransactionBuilder>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBitcoinLikeTransactionBuilder::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeTransactionBuilder::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeTransactionBuilder").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"addInput", addInput);
    Nan::SetPrototypeMethod(func_template,"addOutput", addOutput);
    Nan::SetPrototypeMethod(func_template,"addChangePath", addChangePath);
    Nan::SetPrototypeMethod(func_template,"excludeUtxo", excludeUtxo);
    Nan::SetPrototypeMethod(func_template,"setNumberOfChangeAddresses", setNumberOfChangeAddresses);
    Nan::SetPrototypeMethod(func_template,"setMaxAmountOnChange", setMaxAmountOnChange);
    Nan::SetPrototypeMethod(func_template,"setMinAmountOnChange", setMinAmountOnChange);
    Nan::SetPrototypeMethod(func_template,"pickInputs", pickInputs);
    Nan::SetPrototypeMethod(func_template,"sendToAddress", sendToAddress);
    Nan::SetPrototypeMethod(func_template,"wipeToAddress", wipeToAddress);
    Nan::SetPrototypeMethod(func_template,"setFeesPerByte", setFeesPerByte);
    Nan::SetPrototypeMethod(func_template,"build", build);
    Nan::SetPrototypeMethod(func_template,"clone", clone);
    Nan::SetPrototypeMethod(func_template,"reset", reset);
    Nan::SetPrototypeMethod(func_template,"parseRawUnsignedTransaction", parseRawUnsignedTransaction);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    BitcoinLikeTransactionBuilder_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSBitcoinLikeTransactionBuilder").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
