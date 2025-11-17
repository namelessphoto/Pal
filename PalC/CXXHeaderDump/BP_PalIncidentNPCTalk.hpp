#ifndef UE4SS_SDK_BP_PalIncidentNPCTalk_HPP
#define UE4SS_SDK_BP_PalIncidentNPCTalk_HPP

class UBP_PalIncidentNPCTalk_C : public UBP_PalIncidentBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UDataTable* TalkData;                                                       // 0x0168 (size: 0x8)
    FGuid ShopID;                                                                     // 0x0170 (size: 0x10)
    class UPalNPCMultiTalkHandle* MultiTalkHandle;                                    // 0x0180 (size: 0x8)
    bool IsTalking;                                                                   // 0x0188 (size: 0x1)
    bool IsShopping;                                                                  // 0x0189 (size: 0x1)
    bool IsRecruiting;                                                                // 0x018A (size: 0x1)
    class ABP_PalIncidentCamera_C* Camera;                                            // 0x0190 (size: 0x8)
    class AActor* PlayerViewTarget;                                                   // 0x0198 (size: 0x8)
    FString TalkSequence;                                                             // 0x01A0 (size: 0x10)
    bool IsDelayFinish;                                                               // 0x01B0 (size: 0x1)
    double DelayFinishElapsedTime;                                                    // 0x01B8 (size: 0x8)
    class UPalHUDDispatchParameter_ItemShop* ItemShopHUDParameter;                    // 0x01C0 (size: 0x8)
    class UPalHUDDispatchParameterBase* PalShopHUDParameter;                          // 0x01C8 (size: 0x8)
    TEnumAsByte<E_PalItemShopTabType> OpenItemShopTabType;                            // 0x01D0 (size: 0x1)
    TEnumAsByte<E_PalItemShopTabType> OpenPalShopTabType;                             // 0x01D1 (size: 0x1)
    FGuid TalkUIID;                                                                   // 0x01D4 (size: 0x10)
    FGuid ItemShopUIID;                                                               // 0x01E4 (size: 0x10)
    FGuid PalShopUIID;                                                                // 0x01F4 (size: 0x10)
    TArray<FName> CustomFunctionNames;                                                // 0x0208 (size: 0x10)

    void CancelTalk();
    void UnregisterEndTalkEvent();
    void OnEndTalkFlow(class UPalNPCTalkFlowComponent* SelfComponent);
    void StartTalkFlow();
    void GetValidItemRequestIndex(TMap<class FName, class bool> RecordMap, TArray<FPalCircumRequestData>& RequestData, EPalItemRequireCategory RequestCategory, TMap<FString, int32> CircumCountMap, int32& Index, bool& EnalbeExpBonus);
    void GetValidPalDisplayIndex(TMap<class FName, class bool> RecordMap, TArray<FPalDisplayRequestData>& RewardData, EPalPalDisplayCategory RequestCategory, int32& Index);
    void GetValidRewardCountIndex(TMap<class FName, class bool> RecordMap, TArray<FPalRecordCountRewardData>& RewardData, int32& Index);
    void Duel(FPalNPCTalkSystemCustomFunctionParameters Param);
    void CheckEmote(FPalNPCTalkSystemCustomFunctionParameters Param);
    void Doctor CheckDayLimit(FPalNPCTalkSystemCustomFunctionParameters Param);
    void Doctor Check Otomo(FPalNPCTalkSystemCustomFunctionParameters Param);
    void Doctor Surgi Fail(FPalNPCTalkSystemCustomFunctionParameters Param);
    void Doctor Surgi Success(FPalNPCTalkSystemCustomFunctionParameters Param);
    void Doctor Surgi Random(FPalNPCTalkSystemCustomFunctionParameters Param);
    void VisitorPresentAndReturn(FPalNPCTalkSystemCustomFunctionParameters Param);
    bool IsExistCustomEvent(const FName& CustomEventName);
    void OnCustomEvent(const FName& CustomEventName, const FPalNPCTalkSystemCustomFunctionParameters& Parameter);
    void CustomFunctionToServer(FPalNPCTalkSystemCustomFunctionParameters Param);
    void OpenPalShop_Internal(class UPalVenderDataComponent* VenderDataComponent);
    void OnRegisteredPalShopEvent();
    void OpenItemShop_Internal(class UPalVenderDataComponent* VenderDataComponent);
    void OnRegisteredItemShopEvent();
    void OnDamageReaction(FPalDamageRactionInfo DamageReactionInfo);
    void OnTalkCharacterBattleModeChanged(bool IsBattle);
    void On Talk Character Captured();
    void OnTalkCharacterDead(FPalDeadInfo Info);
    void Cunsume Request Item(FPalNPCTalkSystemCustomFunctionParameters Param);
    void Lottery Index by Weights(TArray<double>& Weights, int32& Index);
    void LotteryItemAndNum(FPalNPCTalkSystemCustomFunctionParameters Param, FName& AddItemName1, int32& AddItemNum1);
    void HasRequestItem(FPalNPCTalkSystemCustomFunctionParameters Param);
    void RequestItem(FPalNPCTalkSystemCustomFunctionParameters Param);
    void SpawnItem(FPalNPCTalkSystemCustomFunctionParameters Param);
    void ReturnToSpawnedPointSquad(FPalNPCTalkSystemCustomFunctionParameters Param);
    void ReturnToSpawnedPoint(FPalNPCTalkSystemCustomFunctionParameters Param);
    void Terminate();
    void Set Disable Movement For Target(bool isDisable);
    void FindTalkCameraLocation_NoHitPlayer(FVector PlayerLocation, FVector TargetLocation, FVector TalkCameraLocation, bool& Result, FVector& NewTalkCameraLocation);
    void DetachCamera(double BlendTime);
    void AttachCamera();
    void CreateCamera();
    void GetTalkCharacter(class APalCharacter*& TalkCharacter);
    void Tick_DelayFinish(double DeltaTime);
    void Tick_Talking(double DeltaTime);
    void Setup(bool& Talkable);
    void OnLoaded_C353222C4BEC5555051A4EADFED69384(UClass* Loaded);
    void OnLoaded_F24E709545997EF6D7A638BDDC970200(UClass* Loaded);
    void OnNotifyEnd_99E5ECE145F90D3EFBE22AB6640FDAB4(FName NotifyName);
    void OnNotifyBegin_99E5ECE145F90D3EFBE22AB6640FDAB4(FName NotifyName);
    void OnInterrupted_99E5ECE145F90D3EFBE22AB6640FDAB4(FName NotifyName);
    void OnBlendOut_99E5ECE145F90D3EFBE22AB6640FDAB4(FName NotifyName);
    void OnCompleted_99E5ECE145F90D3EFBE22AB6640FDAB4(FName NotifyName);
    void OnBegin();
    void Tick(float DeltaTime);
    void OnEnd();
    void OnTalkUIClosed(class UPalHUDDispatchParameterBase* Param);
    void OnGenerated();
    void OpenItemShop_AsyncLoadAsset(class UPalHUDDispatchParameter_ItemShop* HUDParam);
    void OnInitialized();
    void OnForceStop();
    void OnCanceled();
    void OpenPalShop_AsyncLoadAsset(class UPalHUDDispatchParameterBase* HUDParam);
    void OnShopUIClosed(class UPalHUDDispatchParameterBase* Param);
    void OnItemShopClosed(class UPalHUDDispatchParameterBase* Param);
    void OpenRecruitUI(FPalNPCTalkSystemCustomFunctionParameters Param);
    void OnCloseRecruitUI(class UPalHUDDispatchParameterBase* Param);
    void OnRecruit();
    void PlayGiveMontage(class UPalHUDDispatchParameterBase* Param);
    void PlayTalkStartMotion(class UPalHUDDispatchParameterBase* Param);
    void EndTalkMotion(class UPalHUDDispatchParameterBase* Param);
    void StopMouth();
    void StartTalk();
    void ExecuteUbergraph_BP_PalIncidentNPCTalk(int32 EntryPoint);
}; // Size: 0x218

#endif
