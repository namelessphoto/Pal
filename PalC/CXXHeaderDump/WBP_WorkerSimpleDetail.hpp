#ifndef UE4SS_SDK_WBP_WorkerSimpleDetail_HPP
#define UE4SS_SDK_WBP_WorkerSimpleDetail_HPP

class UWBP_WorkerSimpleDetail_C : public UPalUIWorkerSimpleDetailCanvas
{
    class UWBP_PalWorkerInfo_C* WBP_PalWorkerInfo;

    void CloseSetup();
    void OpenSetup(class UPalIndividualCharacterHandle* targetHandle);
};

#endif
