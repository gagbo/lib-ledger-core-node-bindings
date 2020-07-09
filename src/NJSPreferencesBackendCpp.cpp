// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from preferences.djinni

#include "NJSPreferencesBackendCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSPreferencesBackend::get) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSPreferencesBackend::get needs 1 arguments");
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
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesBackend>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesBackend::get : implementation of PreferencesBackend is not valid");
    }

    auto result = cpp_impl->get(arg_0);

    //Wrap result in node object
    Local<Value> arg_1;
    if(result)
    {
        auto arg_1_optional = (result).value();
        auto arg_1_tmp = Nan::New<String>(arg_1_optional).ToLocalChecked();
        arg_1 = arg_1_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSPreferencesBackend::commit) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSPreferencesBackend::commit needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<PreferencesChange> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(Nan::GetCurrentContext(), arg_0_id).ToLocalChecked()->IsObject())
        {

            auto field_arg_0_elem_1 = Nan::Get(arg_0_container->Get(Nan::GetCurrentContext(), arg_0_id).ToLocalChecked()->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("type").ToLocalChecked()).ToLocalChecked();
            auto arg_0_elem_1 = (ledger::core::api::PreferencesChangeType)Nan::To<int>(field_arg_0_elem_1).FromJust();

            auto field_arg_0_elem_2 = Nan::Get(arg_0_container->Get(Nan::GetCurrentContext(), arg_0_id).ToLocalChecked()->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("key").ToLocalChecked()).ToLocalChecked();
            if(!field_arg_0_elem_2->IsString())
            {
                Nan::ThrowError("field_arg_0_elem_2 should be a hexadecimal string.");
            }
            std::vector<uint8_t> arg_0_elem_2;
            Nan::Utf8String str_arg_0_elem_2(field_arg_0_elem_2);
            std::string string_arg_0_elem_2(*str_arg_0_elem_2, str_arg_0_elem_2.length());
            if (string_arg_0_elem_2.rfind("0x", 0) == 0)
            {
                arg_0_elem_2 = djinni::js::hex::toByteArray(string_arg_0_elem_2.substr(2));
            }
            else
            {
                arg_0_elem_2 = std::vector<uint8_t>(string_arg_0_elem_2.cbegin(), string_arg_0_elem_2.cend());
            }


            auto field_arg_0_elem_3 = Nan::Get(arg_0_container->Get(Nan::GetCurrentContext(), arg_0_id).ToLocalChecked()->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("value").ToLocalChecked()).ToLocalChecked();
            if(!field_arg_0_elem_3->IsString())
            {
                Nan::ThrowError("field_arg_0_elem_3 should be a hexadecimal string.");
            }
            std::vector<uint8_t> arg_0_elem_3;
            Nan::Utf8String str_arg_0_elem_3(field_arg_0_elem_3);
            std::string string_arg_0_elem_3(*str_arg_0_elem_3, str_arg_0_elem_3.length());
            if (string_arg_0_elem_3.rfind("0x", 0) == 0)
            {
                arg_0_elem_3 = djinni::js::hex::toByteArray(string_arg_0_elem_3.substr(2));
            }
            else
            {
                arg_0_elem_3 = std::vector<uint8_t>(string_arg_0_elem_3.cbegin(), string_arg_0_elem_3.cend());
            }

            PreferencesChange arg_0_elem(arg_0_elem_1, arg_0_elem_2, arg_0_elem_3);

            arg_0.emplace_back(arg_0_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesBackend>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesBackend::commit : implementation of PreferencesBackend is not valid");
    }

    auto result = cpp_impl->commit(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSPreferencesBackend::setEncryption) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSPreferencesBackend::setEncryption needs 2 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::RandomNumberGenerator>::Unwrap(njs_arg_0);

    Nan::Utf8String string_arg_1(info[1]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_1 = std::string(*string_arg_1);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesBackend>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesBackend::setEncryption : implementation of PreferencesBackend is not valid");
    }
    cpp_impl->setEncryption(arg_0,arg_1);
}
NAN_METHOD(NJSPreferencesBackend::unsetEncryption) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSPreferencesBackend::unsetEncryption needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesBackend>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesBackend::unsetEncryption : implementation of PreferencesBackend is not valid");
    }
    cpp_impl->unsetEncryption();
}
NAN_METHOD(NJSPreferencesBackend::resetEncryption) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSPreferencesBackend::resetEncryption needs 3 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::RandomNumberGenerator>::Unwrap(njs_arg_0);

    Nan::Utf8String string_arg_1(info[1]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_1 = std::string(*string_arg_1);
    Nan::Utf8String string_arg_2(info[2]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_2 = std::string(*string_arg_2);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesBackend>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesBackend::resetEncryption : implementation of PreferencesBackend is not valid");
    }

    auto result = cpp_impl->resetEncryption(arg_0,arg_1,arg_2);

    //Wrap result in node object
    auto arg_3 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_3);
}
NAN_METHOD(NJSPreferencesBackend::getEncryptionSalt) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSPreferencesBackend::getEncryptionSalt needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesBackend>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesBackend::getEncryptionSalt : implementation of PreferencesBackend is not valid");
    }

    auto result = cpp_impl->getEncryptionSalt();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSPreferencesBackend::clear) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSPreferencesBackend::clear needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesBackend>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesBackend::clear : implementation of PreferencesBackend is not valid");
    }
    cpp_impl->clear();
}

NAN_METHOD(NJSPreferencesBackend::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSPreferencesBackend function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSPreferencesBackend::PreferencesBackend_prototype;

Local<Object> NJSPreferencesBackend::wrap(const std::shared_ptr<ledger::core::api::PreferencesBackend> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(PreferencesBackend_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::PreferencesBackend>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSPreferencesBackend::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSPreferencesBackend::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::PreferencesBackend>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSPreferencesBackend::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSPreferencesBackend::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSPreferencesBackend").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"get", get);
    Nan::SetPrototypeMethod(func_template,"commit", commit);
    Nan::SetPrototypeMethod(func_template,"setEncryption", setEncryption);
    Nan::SetPrototypeMethod(func_template,"unsetEncryption", unsetEncryption);
    Nan::SetPrototypeMethod(func_template,"resetEncryption", resetEncryption);
    Nan::SetPrototypeMethod(func_template,"getEncryptionSalt", getEncryptionSalt);
    Nan::SetPrototypeMethod(func_template,"clear", clear);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    PreferencesBackend_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSPreferencesBackend").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
