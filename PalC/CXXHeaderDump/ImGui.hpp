#ifndef UE4SS_SDK_ImGui_HPP
#define UE4SS_SDK_ImGui_HPP

#include "ImGui_enums.hpp"

struct FImGuiCanvasSizeInfo
{
    EImGuiCanvasSizeType SizeType;
    int32 Width;
    int32 Height;
    bool bExtendToViewport;

};

struct FImGuiDPIScaleInfo
{
    EImGuiDPIScaleMethod ScalingMethod;
    float Scale;
    FRuntimeFloatCurve DPICurve;
    bool bScaleWithCurve;

};

struct FImGuiKeyInfo
{
    FKey Key;
    ECheckBoxState Shift;
    ECheckBoxState Ctrl;
    ECheckBoxState Alt;
    ECheckBoxState Cmd;

};

class UImGuiInputHandler : public UObject
{
};

class UImGuiSettings : public UObject
{
    FSoftClassPath ImGuiInputHandlerClass;
    bool bShareKeyboardInput;
    bool bShareGamepadInput;
    bool bShareMouseInput;
    bool bUseSoftwareCursor;
    FImGuiKeyInfo ToggleInput;
    FImGuiCanvasSizeInfo CanvasSize;
    FImGuiDPIScaleInfo DPIScale;

};

#endif
