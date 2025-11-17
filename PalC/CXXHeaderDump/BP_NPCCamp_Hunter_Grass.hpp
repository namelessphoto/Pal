#ifndef UE4SS_SDK_BP_NPCCamp_Hunter_Grass_HPP
#define UE4SS_SDK_BP_NPCCamp_Hunter_Grass_HPP

class ABP_NPCCamp_Hunter_Grass_C : public ABP_NPCCampPresetBase_C
{
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;
    class UChildActorComponent* BP_GangCamp_GangTorch3;
    class UChildActorComponent* BP_GangCamp_GangTorch2;
    class UChildActorComponent* BP_GangCamp_GangTorch1;
    class UChildActorComponent* BP_GangCamp_GangTorch;
    class UNiagaraComponent* Smoke;
    class UStaticMeshComponent* SM_GangFlag1;
    class UStaticMeshComponent* SM_GangFlag;
    class UStaticMeshComponent* SM_Wooden_barricade2;
    class UStaticMeshComponent* SM_GangFenceB1;
    class UStaticMeshComponent* SM_GangTent03;
    class UStaticMeshComponent* SM_GangTent02;
    class UStaticMeshComponent* SM_GangTent01;
    class UStaticMeshComponent* SM_GangFenceC;
    class UStaticMeshComponent* SM_GangFenceA1;
    class UStaticMeshComponent* SM_GangFenceD;
    class UStaticMeshComponent* SM_GangFenceB;
    class UStaticMeshComponent* SM_GangFenceA;
    class UChildActorComponent* BP_SquadNPCSpawner_ForCamp_Hunter_Grass;
    class UStaticMeshComponent* SM_Wooden_barricade1;
    class UStaticMeshComponent* SM_Wooden_barricade;
    class UChildActorComponent* BP_Fireplace;
    class UStaticMeshComponent* SM_Bed_rug1;
    class UStaticMeshComponent* SM_Bed_rug;
    class UChildActorComponent* BP_PalCapturedCage;

};

#endif
