#ifndef UE4SS_SDK_WBP_Warning_LowMemory_HPP
#define UE4SS_SDK_WBP_Warning_LowMemory_HPP

class UWBP_Warning_LowMemory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image;
    class UImage* Image_Base;

    void Construct();
    void OnMemoryWarning(bool bIsOver);
    void ExecuteUbergraph_WBP_Warning_LowMemory(int32 EntryPoint);
};

#endif
