#ifndef HEADER_DVZAPPORGTESTWIDGETCONTROLLER1CPP
#define HEADER_DVZAPPORGTESTWIDGETCONTROLLER1CPP

#include <ZappTypes.h>
#include <Buffer.h>
#include <Std/DvDevice.h>
#include <DvProvider.h>

#include <string>

namespace Zapp {

class IDviInvocation;
class PropertyInt;
class PropertyUint;
class PropertyBool;
class PropertyString;
class PropertyBinary;

/**
 * Base Device for zapp.org:TestWidgetController:1
 */
class DvProviderZappOrgTestWidgetController1Cpp : public DvProvider
{
public:
    virtual ~DvProviderZappOrgTestWidgetController1Cpp() {}
protected:
    DvProviderZappOrgTestWidgetController1Cpp(DvDeviceStd& aDevice);
    void EnableActionCreateWidget();
    void EnableActionRemoveWidget();
    void EnableActionSetWidgetRegister();
    void EnableActionGetWidgetRegister();
private:
    virtual void CreateWidget(uint32_t aVersion, const std::string& aWidgetUdn);
    virtual void RemoveWidget(uint32_t aVersion, const std::string& aWidgetUdn);
    virtual void SetWidgetRegister(uint32_t aVersion, const std::string& aWidgetUdn, uint32_t aRegisterIndex, uint32_t aRegisterValue);
    virtual void GetWidgetRegister(uint32_t aVersion, const std::string& aWidgetUdn, uint32_t aRegisterIndex, uint32_t& aRegisterValue);
private:
    DvProviderZappOrgTestWidgetController1Cpp();
    void DoCreateWidget(IDviInvocation& aInvocation, uint32_t aVersion);
    void DoRemoveWidget(IDviInvocation& aInvocation, uint32_t aVersion);
    void DoSetWidgetRegister(IDviInvocation& aInvocation, uint32_t aVersion);
    void DoGetWidgetRegister(IDviInvocation& aInvocation, uint32_t aVersion);
private:
};

} // namespace Zapp

#endif // HEADER_DVZAPPORGTESTWIDGETCONTROLLER1CPP
