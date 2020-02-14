// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSOperationCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSOperation::getUid) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getUid needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getUid : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getUid();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getAccountIndex) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getAccountIndex needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getAccountIndex : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getAccountIndex();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getOperationType) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getOperationType needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getOperationType : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getOperationType();

    //Wrap result in node object
    auto arg_0 = Nan::New<Integer>((int)result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getDate) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getDate needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getDate : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getDate();

    //Wrap result in node object
    auto date_arg_0 = chrono::duration_cast<chrono::milliseconds>(result.time_since_epoch()).count();
    auto arg_0 = Nan::New<Date>(date_arg_0).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getSenders) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getSenders needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getSenders : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getSenders();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<String>(result[arg_0_id]).ToLocalChecked();
        Nan::Set(arg_0, (int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getRecipients) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getRecipients needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getRecipients : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getRecipients();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<String>(result[arg_0_id]).ToLocalChecked();
        Nan::Set(arg_0, (int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getAmount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getAmount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getAmount : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getAmount();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getFees) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getFees needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getFees : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getFees();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);



    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getPreferences) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getPreferences needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getPreferences : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getPreferences();

    //Wrap result in node object
    auto arg_0 = NJSPreferences::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getTrust) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getTrust needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getTrust : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getTrust();

    //Wrap result in node object
    auto arg_0 = NJSTrustIndicator::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getBlockHeight) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getBlockHeight needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getBlockHeight : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getBlockHeight();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<Number>(arg_0_optional);
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::asBitcoinLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::asBitcoinLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::asBitcoinLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->asBitcoinLikeOperation();

    //Wrap result in node object
    auto arg_0 = NJSBitcoinLikeOperation::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::asEthereumLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::asEthereumLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::asEthereumLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->asEthereumLikeOperation();

    //Wrap result in node object
    auto arg_0 = NJSEthereumLikeOperation::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::asRippleLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::asRippleLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::asRippleLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->asRippleLikeOperation();

    //Wrap result in node object
    auto arg_0 = NJSRippleLikeOperation::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::asTezosLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::asTezosLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::asTezosLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->asTezosLikeOperation();

    //Wrap result in node object
    auto arg_0 = NJSTezosLikeOperation::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::isInstanceOfBitcoinLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfBitcoinLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfBitcoinLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->isInstanceOfBitcoinLikeOperation();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::isInstanceOfEthereumLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfEthereumLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfEthereumLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->isInstanceOfEthereumLikeOperation();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::isInstanceOfRippleLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfRippleLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfRippleLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->isInstanceOfRippleLikeOperation();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::isInstanceOfTezosLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfTezosLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfTezosLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->isInstanceOfTezosLikeOperation();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::isComplete) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::isComplete needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::isComplete : implementation of Operation is not valid");
    }

    auto result = cpp_impl->isComplete();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getWalletType) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getWalletType needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getWalletType : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getWalletType();

    //Wrap result in node object
    auto arg_0 = Nan::New<Integer>((int)result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getCurrency) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getCurrency needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getCurrency : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getCurrency();

    //Wrap result in node object
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<Integer>((int)result.walletType);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("walletType").ToLocalChecked(), arg_0_1);
    auto arg_0_2 = Nan::New<String>(result.name).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("name").ToLocalChecked(), arg_0_2);
    auto arg_0_3 = Nan::New<Int32>(result.bip44CoinType);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("bip44CoinType").ToLocalChecked(), arg_0_3);
    auto arg_0_4 = Nan::New<String>(result.paymentUriScheme).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("paymentUriScheme").ToLocalChecked(), arg_0_4);
    Local<Array> arg_0_5 = Nan::New<Array>();
    for(size_t arg_0_5_id = 0; arg_0_5_id < result.units.size(); arg_0_5_id++)
    {
        auto arg_0_5_elem = Nan::New<Object>();
        auto arg_0_5_elem_1 = Nan::New<String>(result.units[arg_0_5_id].name).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("name").ToLocalChecked(), arg_0_5_elem_1);
        auto arg_0_5_elem_2 = Nan::New<String>(result.units[arg_0_5_id].symbol).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("symbol").ToLocalChecked(), arg_0_5_elem_2);
        auto arg_0_5_elem_3 = Nan::New<String>(result.units[arg_0_5_id].code).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("code").ToLocalChecked(), arg_0_5_elem_3);
        auto arg_0_5_elem_4 = Nan::New<Int32>(result.units[arg_0_5_id].numberOfDecimal);
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("numberOfDecimal").ToLocalChecked(), arg_0_5_elem_4);

        Nan::Set(arg_0_5, (int)arg_0_5_id,arg_0_5_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("units").ToLocalChecked(), arg_0_5);
    Local<Value> arg_0_6;
    if(result.bitcoinLikeNetworkParameters)
    {
        auto arg_0_6_optional = (result.bitcoinLikeNetworkParameters).value();
        auto arg_0_6_tmp = Nan::New<Object>();
        auto arg_0_6_tmp_1 = Nan::New<String>(arg_0_6_optional.Identifier).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_6_tmp_1);
        auto arg_0_6_tmp_2 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_6_optional.P2PKHVersion)).ToLocalChecked();

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("P2PKHVersion").ToLocalChecked(), arg_0_6_tmp_2);
        auto arg_0_6_tmp_3 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_6_optional.P2SHVersion)).ToLocalChecked();

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("P2SHVersion").ToLocalChecked(), arg_0_6_tmp_3);
        auto arg_0_6_tmp_4 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_6_optional.XPUBVersion)).ToLocalChecked();

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_6_tmp_4);
        auto arg_0_6_tmp_5 = Nan::New<Integer>((int)arg_0_6_optional.FeePolicy);
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("FeePolicy").ToLocalChecked(), arg_0_6_tmp_5);
        auto arg_0_6_tmp_6 = Nan::New<Number>(arg_0_6_optional.DustAmount);
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("DustAmount").ToLocalChecked(), arg_0_6_tmp_6);
        auto arg_0_6_tmp_7 = Nan::New<String>(arg_0_6_optional.MessagePrefix).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_6_tmp_7);
        auto arg_0_6_tmp_8 = Nan::New<Boolean>(arg_0_6_optional.UsesTimestampedTransaction);
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked(), arg_0_6_tmp_8);
        auto arg_0_6_tmp_9 = Nan::New<Number>(arg_0_6_optional.TimestampDelay);
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_6_tmp_9);
        auto arg_0_6_tmp_10 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_6_optional.SigHash)).ToLocalChecked();

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("SigHash").ToLocalChecked(), arg_0_6_tmp_10);
        Local<Array> arg_0_6_tmp_11 = Nan::New<Array>();
        for(size_t arg_0_6_tmp_11_id = 0; arg_0_6_tmp_11_id < arg_0_6_optional.AdditionalBIPs.size(); arg_0_6_tmp_11_id++)
        {
            auto arg_0_6_tmp_11_elem = Nan::New<String>(arg_0_6_optional.AdditionalBIPs[arg_0_6_tmp_11_id]).ToLocalChecked();
            Nan::Set(arg_0_6_tmp_11, (int)arg_0_6_tmp_11_id,arg_0_6_tmp_11_elem);
        }

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("AdditionalBIPs").ToLocalChecked(), arg_0_6_tmp_11);

        arg_0_6 = arg_0_6_tmp;
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked(), arg_0_6);
    Local<Value> arg_0_7;
    if(result.ethereumLikeNetworkParameters)
    {
        auto arg_0_7_optional = (result.ethereumLikeNetworkParameters).value();
        auto arg_0_7_tmp = Nan::New<Object>();
        auto arg_0_7_tmp_1 = Nan::New<String>(arg_0_7_optional.Identifier).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_7_tmp_1);
        auto arg_0_7_tmp_2 = Nan::New<String>(arg_0_7_optional.MessagePrefix).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_7_tmp_2);
        auto arg_0_7_tmp_3 = Nan::New<String>(arg_0_7_optional.ChainID).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("ChainID").ToLocalChecked(), arg_0_7_tmp_3);
        auto arg_0_7_tmp_4 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_7_optional.XPUBVersion)).ToLocalChecked();

        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_7_tmp_4);
        Local<Array> arg_0_7_tmp_5 = Nan::New<Array>();
        for(size_t arg_0_7_tmp_5_id = 0; arg_0_7_tmp_5_id < arg_0_7_optional.AdditionalEIPs.size(); arg_0_7_tmp_5_id++)
        {
            auto arg_0_7_tmp_5_elem = Nan::New<String>(arg_0_7_optional.AdditionalEIPs[arg_0_7_tmp_5_id]).ToLocalChecked();
            Nan::Set(arg_0_7_tmp_5, (int)arg_0_7_tmp_5_id,arg_0_7_tmp_5_elem);
        }

        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("AdditionalEIPs").ToLocalChecked(), arg_0_7_tmp_5);
        auto arg_0_7_tmp_6 = Nan::New<Number>(arg_0_7_optional.TimestampDelay);
        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_7_tmp_6);

        arg_0_7 = arg_0_7_tmp;
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("ethereumLikeNetworkParameters").ToLocalChecked(), arg_0_7);
    Local<Value> arg_0_8;
    if(result.rippleLikeNetworkParameters)
    {
        auto arg_0_8_optional = (result.rippleLikeNetworkParameters).value();
        auto arg_0_8_tmp = Nan::New<Object>();
        auto arg_0_8_tmp_1 = Nan::New<String>(arg_0_8_optional.Identifier).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_8_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_8_tmp_1);
        auto arg_0_8_tmp_2 = Nan::New<String>(arg_0_8_optional.MessagePrefix).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_8_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_8_tmp_2);
        auto arg_0_8_tmp_3 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_8_optional.XPUBVersion)).ToLocalChecked();

        Nan::DefineOwnProperty(arg_0_8_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_8_tmp_3);
        Local<Array> arg_0_8_tmp_4 = Nan::New<Array>();
        for(size_t arg_0_8_tmp_4_id = 0; arg_0_8_tmp_4_id < arg_0_8_optional.AdditionalRIPs.size(); arg_0_8_tmp_4_id++)
        {
            auto arg_0_8_tmp_4_elem = Nan::New<String>(arg_0_8_optional.AdditionalRIPs[arg_0_8_tmp_4_id]).ToLocalChecked();
            Nan::Set(arg_0_8_tmp_4, (int)arg_0_8_tmp_4_id,arg_0_8_tmp_4_elem);
        }

        Nan::DefineOwnProperty(arg_0_8_tmp, Nan::New<String>("AdditionalRIPs").ToLocalChecked(), arg_0_8_tmp_4);
        auto arg_0_8_tmp_5 = Nan::New<Number>(arg_0_8_optional.TimestampDelay);
        Nan::DefineOwnProperty(arg_0_8_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_8_tmp_5);

        arg_0_8 = arg_0_8_tmp;
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("rippleLikeNetworkParameters").ToLocalChecked(), arg_0_8);
    Local<Value> arg_0_9;
    if(result.tezosLikeNetworkParameters)
    {
        auto arg_0_9_optional = (result.tezosLikeNetworkParameters).value();
        auto arg_0_9_tmp = Nan::New<Object>();
        auto arg_0_9_tmp_1 = Nan::New<String>(arg_0_9_optional.Identifier).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_9_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_9_tmp_1);
        auto arg_0_9_tmp_2 = Nan::New<String>(arg_0_9_optional.MessagePrefix).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_9_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_9_tmp_2);
        auto arg_0_9_tmp_3 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_9_optional.XPUBVersion)).ToLocalChecked();

        Nan::DefineOwnProperty(arg_0_9_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_9_tmp_3);
        auto arg_0_9_tmp_4 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_9_optional.ImplicitPrefix)).ToLocalChecked();

        Nan::DefineOwnProperty(arg_0_9_tmp, Nan::New<String>("ImplicitPrefix").ToLocalChecked(), arg_0_9_tmp_4);
        auto arg_0_9_tmp_5 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_9_optional.OriginatedPrefix)).ToLocalChecked();

        Nan::DefineOwnProperty(arg_0_9_tmp, Nan::New<String>("OriginatedPrefix").ToLocalChecked(), arg_0_9_tmp_5);
        Local<Array> arg_0_9_tmp_6 = Nan::New<Array>();
        for(size_t arg_0_9_tmp_6_id = 0; arg_0_9_tmp_6_id < arg_0_9_optional.AdditionalTIPs.size(); arg_0_9_tmp_6_id++)
        {
            auto arg_0_9_tmp_6_elem = Nan::New<String>(arg_0_9_optional.AdditionalTIPs[arg_0_9_tmp_6_id]).ToLocalChecked();
            Nan::Set(arg_0_9_tmp_6, (int)arg_0_9_tmp_6_id,arg_0_9_tmp_6_elem);
        }

        Nan::DefineOwnProperty(arg_0_9_tmp, Nan::New<String>("AdditionalTIPs").ToLocalChecked(), arg_0_9_tmp_6);
        auto arg_0_9_tmp_7 = Nan::New<Number>(arg_0_9_optional.TimestampDelay);
        Nan::DefineOwnProperty(arg_0_9_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_9_tmp_7);

        arg_0_9 = arg_0_9_tmp;
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("tezosLikeNetworkParameters").ToLocalChecked(), arg_0_9);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSOperation::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSOperation function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSOperation::Operation_prototype;

Local<Object> NJSOperation::wrap(const std::shared_ptr<ledger::core::api::Operation> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Operation_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::Operation>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSOperation::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSOperation::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::Operation>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSOperation::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSOperation::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSOperation").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getUid", getUid);
    Nan::SetPrototypeMethod(func_template,"getAccountIndex", getAccountIndex);
    Nan::SetPrototypeMethod(func_template,"getOperationType", getOperationType);
    Nan::SetPrototypeMethod(func_template,"getDate", getDate);
    Nan::SetPrototypeMethod(func_template,"getSenders", getSenders);
    Nan::SetPrototypeMethod(func_template,"getRecipients", getRecipients);
    Nan::SetPrototypeMethod(func_template,"getAmount", getAmount);
    Nan::SetPrototypeMethod(func_template,"getFees", getFees);
    Nan::SetPrototypeMethod(func_template,"getPreferences", getPreferences);
    Nan::SetPrototypeMethod(func_template,"getTrust", getTrust);
    Nan::SetPrototypeMethod(func_template,"getBlockHeight", getBlockHeight);
    Nan::SetPrototypeMethod(func_template,"asBitcoinLikeOperation", asBitcoinLikeOperation);
    Nan::SetPrototypeMethod(func_template,"asEthereumLikeOperation", asEthereumLikeOperation);
    Nan::SetPrototypeMethod(func_template,"asRippleLikeOperation", asRippleLikeOperation);
    Nan::SetPrototypeMethod(func_template,"asTezosLikeOperation", asTezosLikeOperation);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfBitcoinLikeOperation", isInstanceOfBitcoinLikeOperation);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfEthereumLikeOperation", isInstanceOfEthereumLikeOperation);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfRippleLikeOperation", isInstanceOfRippleLikeOperation);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfTezosLikeOperation", isInstanceOfTezosLikeOperation);
    Nan::SetPrototypeMethod(func_template,"isComplete", isComplete);
    Nan::SetPrototypeMethod(func_template,"getWalletType", getWalletType);
    Nan::SetPrototypeMethod(func_template,"getCurrency", getCurrency);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    Operation_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSOperation").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
