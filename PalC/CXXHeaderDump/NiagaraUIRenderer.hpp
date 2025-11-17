#ifndef UE4SS_SDK_NiagaraUIRenderer_HPP
#define UE4SS_SDK_NiagaraUIRenderer_HPP

class ANiagaraUIActor : public AActor
{
};

class UNiagaraSystemWidget : public UWidget
{
    class UNiagaraSystem* NiagaraSystemReference;
    TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;
    bool AutoActivate;
    bool TickWhenPaused;
    FVector2D DesiredWidgetSize;
    bool FakeDepthScale;
    float FakeDepthScaleDistance;
    bool ShowDebugSystemInWorld;
    bool DisableWarnings;
    class ANiagaraUIActor* NiagaraActor;
    class UNiagaraUIComponent* NiagaraComponent;

    void UpdateTickWhenPaused(bool NewTickWhenPaused);
    void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);
    void SetRemapMaterial(class UMaterialInterface* OriginalMaterial, class UMaterialInterface* RemapMaterial);
    void SetDesiredWidgetSize(FVector2D NewDesiredSize);
    class UMaterialInterface* GetRemapMaterial(class UMaterialInterface* OriginalMaterial);
    class UNiagaraUIComponent* GetNiagaraComponent();
    void DeactivateSystem();
    void ActivateSystem(bool Reset);
};

class UNiagaraUIComponent : public UNiagaraComponent
{
};

#endif
