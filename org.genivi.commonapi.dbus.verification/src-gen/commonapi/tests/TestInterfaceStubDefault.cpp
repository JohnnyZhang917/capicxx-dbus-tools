/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.0.qualifier.
* Used org.franca.core 0.8.9.201308271211.
*
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
*/
#include <commonapi/tests/TestInterfaceStubDefault.h>

namespace commonapi {
namespace tests {

TestInterfaceStubDefault::TestInterfaceStubDefault():
        remoteEventHandler_(this) {
}

TestInterfaceStubRemoteEvent* TestInterfaceStubDefault::initStubAdapter(const std::shared_ptr<TestInterfaceStubAdapter>& stubAdapter) {
    stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}

const uint32_t& TestInterfaceStubDefault::getTestPredefinedTypeAttributeAttribute() {
    return testPredefinedTypeAttributeAttributeValue_;
}

const uint32_t& TestInterfaceStubDefault::getTestPredefinedTypeAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getTestPredefinedTypeAttributeAttribute();
}

void TestInterfaceStubDefault::setTestPredefinedTypeAttributeAttribute(uint32_t value) {
    const bool valueChanged = trySetTestPredefinedTypeAttributeAttribute(std::move(value));
    if (valueChanged) {
        stubAdapter_->fireTestPredefinedTypeAttributeAttributeChanged(testPredefinedTypeAttributeAttributeValue_);
    }
}

bool TestInterfaceStubDefault::trySetTestPredefinedTypeAttributeAttribute(uint32_t value) {
    if (!validateTestPredefinedTypeAttributeAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (testPredefinedTypeAttributeAttributeValue_ != value);
    testPredefinedTypeAttributeAttributeValue_ = std::move(value);
    return valueChanged;
}

bool TestInterfaceStubDefault::validateTestPredefinedTypeAttributeAttributeRequestedValue(const uint32_t& value) {
    return true;
}

void TestInterfaceStubDefault::setTestPredefinedTypeAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t value) {
    setTestPredefinedTypeAttributeAttribute(value);
}

void TestInterfaceStubDefault::onRemoteTestPredefinedTypeAttributeAttributeChanged() {
    // No operation in default
}

void TestInterfaceStubDefault::RemoteEventHandler::onRemoteTestPredefinedTypeAttributeAttributeChanged() {
    defaultStub_->onRemoteTestPredefinedTypeAttributeAttributeChanged();
}

bool TestInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestPredefinedTypeAttributeAttribute(uint32_t value) {
    return defaultStub_->trySetTestPredefinedTypeAttributeAttribute(std::move(value));
}

bool TestInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestPredefinedTypeAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t value) {
    return onRemoteSetTestPredefinedTypeAttributeAttribute(value);
}

const DerivedTypeCollection::TestStructExtended& TestInterfaceStubDefault::getTestDerivedStructAttributeAttribute() {
    return testDerivedStructAttributeAttributeValue_;
}

const DerivedTypeCollection::TestStructExtended& TestInterfaceStubDefault::getTestDerivedStructAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getTestDerivedStructAttributeAttribute();
}

void TestInterfaceStubDefault::setTestDerivedStructAttributeAttribute(DerivedTypeCollection::TestStructExtended value) {
    const bool valueChanged = trySetTestDerivedStructAttributeAttribute(std::move(value));
    if (valueChanged) {
        stubAdapter_->fireTestDerivedStructAttributeAttributeChanged(testDerivedStructAttributeAttributeValue_);
    }
}

bool TestInterfaceStubDefault::trySetTestDerivedStructAttributeAttribute(DerivedTypeCollection::TestStructExtended value) {
    if (!validateTestDerivedStructAttributeAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (testDerivedStructAttributeAttributeValue_ != value);
    testDerivedStructAttributeAttributeValue_ = std::move(value);
    return valueChanged;
}

bool TestInterfaceStubDefault::validateTestDerivedStructAttributeAttributeRequestedValue(const DerivedTypeCollection::TestStructExtended& value) {
    return true;
}

void TestInterfaceStubDefault::setTestDerivedStructAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, DerivedTypeCollection::TestStructExtended value) {
    setTestDerivedStructAttributeAttribute(value);
}

void TestInterfaceStubDefault::onRemoteTestDerivedStructAttributeAttributeChanged() {
    // No operation in default
}

void TestInterfaceStubDefault::RemoteEventHandler::onRemoteTestDerivedStructAttributeAttributeChanged() {
    defaultStub_->onRemoteTestDerivedStructAttributeAttributeChanged();
}

bool TestInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestDerivedStructAttributeAttribute(DerivedTypeCollection::TestStructExtended value) {
    return defaultStub_->trySetTestDerivedStructAttributeAttribute(std::move(value));
}

bool TestInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestDerivedStructAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, DerivedTypeCollection::TestStructExtended value) {
    return onRemoteSetTestDerivedStructAttributeAttribute(value);
}

const DerivedTypeCollection::TestArrayUInt64& TestInterfaceStubDefault::getTestDerivedArrayAttributeAttribute() {
    return testDerivedArrayAttributeAttributeValue_;
}

const DerivedTypeCollection::TestArrayUInt64& TestInterfaceStubDefault::getTestDerivedArrayAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getTestDerivedArrayAttributeAttribute();
}

void TestInterfaceStubDefault::setTestDerivedArrayAttributeAttribute(DerivedTypeCollection::TestArrayUInt64 value) {
    const bool valueChanged = trySetTestDerivedArrayAttributeAttribute(std::move(value));
    if (valueChanged) {
        stubAdapter_->fireTestDerivedArrayAttributeAttributeChanged(testDerivedArrayAttributeAttributeValue_);
    }
}

bool TestInterfaceStubDefault::trySetTestDerivedArrayAttributeAttribute(DerivedTypeCollection::TestArrayUInt64 value) {
    if (!validateTestDerivedArrayAttributeAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (testDerivedArrayAttributeAttributeValue_ != value);
    testDerivedArrayAttributeAttributeValue_ = std::move(value);
    return valueChanged;
}

bool TestInterfaceStubDefault::validateTestDerivedArrayAttributeAttributeRequestedValue(const DerivedTypeCollection::TestArrayUInt64& value) {
    return true;
}

void TestInterfaceStubDefault::setTestDerivedArrayAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, DerivedTypeCollection::TestArrayUInt64 value) {
    setTestDerivedArrayAttributeAttribute(value);
}

void TestInterfaceStubDefault::onRemoteTestDerivedArrayAttributeAttributeChanged() {
    // No operation in default
}

void TestInterfaceStubDefault::RemoteEventHandler::onRemoteTestDerivedArrayAttributeAttributeChanged() {
    defaultStub_->onRemoteTestDerivedArrayAttributeAttributeChanged();
}

bool TestInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestDerivedArrayAttributeAttribute(DerivedTypeCollection::TestArrayUInt64 value) {
    return defaultStub_->trySetTestDerivedArrayAttributeAttribute(std::move(value));
}

bool TestInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestDerivedArrayAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, DerivedTypeCollection::TestArrayUInt64 value) {
    return onRemoteSetTestDerivedArrayAttributeAttribute(value);
}


void TestInterfaceStubDefault::testEmptyMethod(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    // Call old style methods in default 
    testEmptyMethod();
}
void TestInterfaceStubDefault::testEmptyMethod() {
    // No operation in default
}

void TestInterfaceStubDefault::testVoidPredefinedTypeMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t uint32Value, std::string stringValue) {
    // Call old style methods in default 
    testVoidPredefinedTypeMethod(uint32Value, stringValue);
}
void TestInterfaceStubDefault::testVoidPredefinedTypeMethod(uint32_t uint32Value, std::string stringValue) {
    // No operation in default
}

void TestInterfaceStubDefault::testPredefinedTypeMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t uint32InValue, std::string stringInValue, uint32_t& uint32OutValue, std::string& stringOutValue) {
    // Call old style methods in default 
    testPredefinedTypeMethod(uint32InValue, stringInValue, uint32OutValue, stringOutValue);
}
void TestInterfaceStubDefault::testPredefinedTypeMethod(uint32_t uint32InValue, std::string stringInValue, uint32_t& uint32OutValue, std::string& stringOutValue) {
    // No operation in default
}

void TestInterfaceStubDefault::testVoidDerivedTypeMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, DerivedTypeCollection::TestEnumExtended2 testEnumExtended2Value, DerivedTypeCollection::TestMap testMapValue) {
    // Call old style methods in default 
    testVoidDerivedTypeMethod(testEnumExtended2Value, testMapValue);
}
void TestInterfaceStubDefault::testVoidDerivedTypeMethod(DerivedTypeCollection::TestEnumExtended2 testEnumExtended2Value, DerivedTypeCollection::TestMap testMapValue) {
    // No operation in default
}

void TestInterfaceStubDefault::testDerivedTypeMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, DerivedTypeCollection::TestEnumExtended2 testEnumExtended2InValue, DerivedTypeCollection::TestMap testMapInValue, DerivedTypeCollection::TestEnumExtended2& testEnumExtended2OutValue, DerivedTypeCollection::TestMap& testMapOutValue) {
    // Call old style methods in default 
    testDerivedTypeMethod(testEnumExtended2InValue, testMapInValue, testEnumExtended2OutValue, testMapOutValue);
}
void TestInterfaceStubDefault::testDerivedTypeMethod(DerivedTypeCollection::TestEnumExtended2 testEnumExtended2InValue, DerivedTypeCollection::TestMap testMapInValue, DerivedTypeCollection::TestEnumExtended2& testEnumExtended2OutValue, DerivedTypeCollection::TestMap& testMapOutValue) {
    // No operation in default
}


void TestInterfaceStubDefault::fireTestPredefinedTypeBroadcastEvent(const uint32_t& uint32Value, const std::string& stringValue) {
    stubAdapter_->fireTestPredefinedTypeBroadcastEvent(uint32Value, stringValue);
}


TestInterfaceStubDefault::RemoteEventHandler::RemoteEventHandler(TestInterfaceStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace tests
} // namespace commonapi
