#ifndef UE4SS_SDK_BP_Ground_HPP
#define UE4SS_SDK_BP_Ground_HPP

class ABP_Ground_C : public AStaticMeshActor
{
    class UStaticMeshComponent* BottomLayer;
    int32 Mode;
    class UMaterialInstance* UnlitOpaque;
    class UMaterialInstance* LitOpaque;
    class UMaterialInstance* UnlitTranslucent;
    class UMaterialInstance* LitTranlucent;
    class UMaterialInstance* LitMasked;
    class UMaterialInstance* UnlitMasked;

    void ChangeMode(int32 NewMode);
    void UserConstructionScript();
};

#endif
