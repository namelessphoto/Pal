#ifndef UE4SS_SDK_BP_BuildingUIParameter_HPP
#define UE4SS_SDK_BP_BuildingUIParameter_HPP

class UBP_BuildingUIParameter_C : public UPalHUDDispatchParameterBase
{
    FName BuildObjectId;
    bool bFromRadialMenu;
    int32 SelectedIndex;

};

#endif
