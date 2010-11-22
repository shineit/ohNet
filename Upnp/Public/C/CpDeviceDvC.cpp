#include <C/CpDeviceDv.h>
#include <C/DviDeviceC.h>
#include <Core/DvDevice.h>
#include <CpiDeviceDv.h>

using namespace Zapp;

CpDeviceC CpDeviceDvCreate(DvDeviceC aDevice)
{
    DvDevice* dv = DviDeviceC::DeviceFromHandle(aDevice);
    CpiDeviceDv* cp = new CpiDeviceDv(dv->Device());
    return (CpDeviceC)(&cp->Device());
}