#ifndef HEADER_DVZAPPORGTESTWIDGETCONTROLLER1
#define HEADER_DVZAPPORGTESTWIDGETCONTROLLER1

#include <ZappTypes.h>
#include <Buffer.h>
#include <Core/DvDevice.h>
#include <DvProvider.h>

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
class DvProviderZappOrgTestWidgetController1 : public DvProvider
{
public:
    virtual ~DvProviderZappOrgTestWidgetController1() {}
protected:
    DvProviderZappOrgTestWidgetController1(DvDevice& aDevice);
    void EnableActionCreateWidget();
    void EnableActionRemoveWidget();
    void EnableActionSetWidgetRegister();
    void EnableActionGetWidgetRegister();
private:
    virtual void CreateWidget(IInvocationResponse& aResponse, TUint aVersion, const Brx& aWidgetUdn);
    virtual void RemoveWidget(IInvocationResponse& aResponse, TUint aVersion, const Brx& aWidgetUdn);
    virtual void SetWidgetRegister(IInvocationResponse& aResponse, TUint aVersion, const Brx& aWidgetUdn, TUint aRegisterIndex, TUint aRegisterValue);
    virtual void GetWidgetRegister(IInvocationResponse& aResponse, TUint aVersion, const Brx& aWidgetUdn, TUint aRegisterIndex, IInvocationResponseUint& aRegisterValue);
private:
    DvProviderZappOrgTestWidgetController1();
    void DoCreateWidget(IDviInvocation& aInvocation, TUint aVersion);
    void DoRemoveWidget(IDviInvocation& aInvocation, TUint aVersion);
    void DoSetWidgetRegister(IDviInvocation& aInvocation, TUint aVersion);
    void DoGetWidgetRegister(IDviInvocation& aInvocation, TUint aVersion);
private:
};

} // namespace Zapp

#endif // HEADER_DVZAPPORGTESTWIDGETCONTROLLER1
