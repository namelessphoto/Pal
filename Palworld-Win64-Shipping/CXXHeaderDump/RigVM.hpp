#ifndef UE4SS_SDK_RigVM_HPP
#define UE4SS_SDK_RigVM_HPP

#include "RigVM_enums.hpp"

struct FRigVMBaseOp
{
};

struct FRigVMBinaryOp : public FRigVMBaseOp
{
};

struct FRigVMBreakpoint
{
};

struct FRigVMByteCode
{
    TArray<uint8> ByteCode;
    int32 NumInstructions;
    TArray<FRigVMByteCodeEntry> Entries;

};

struct FRigVMByteCodeEntry
{
    FName Name;
    int32 InstructionIndex;

};

struct FRigVMByteCodeStatistics
{
    int32 InstructionCount;
    int32 DataBytes;

};

struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{
};

struct FRigVMComparisonOp : public FRigVMBaseOp
{
};

struct FRigVMCopyOp : public FRigVMBaseOp
{
};

struct FRigVMDebugInfo
{
};

struct FRigVMDispatchFactory
{
};

struct FRigVMExecuteContext
{
};

struct FRigVMExecuteOp : public FRigVMBaseOp
{
};

struct FRigVMExtendedExecuteContext
{
};

struct FRigVMInstruction
{
    uint64 ByteCodeIndex;
    ERigVMOpCode OpCode;
    uint8 OperandAlignment;

};

struct FRigVMInstructionArray
{
    TArray<FRigVMInstruction> Instructions;

};

struct FRigVMInvokeEntryOp : public FRigVMBaseOp
{
};

struct FRigVMJumpIfOp : public FRigVMUnaryOp
{
};

struct FRigVMJumpOp : public FRigVMBaseOp
{
};

struct FRigVMMemoryContainer
{
    bool bUseNameMap;
    ERigVMMemoryType MemoryType;
    TArray<FRigVMRegister> Registers;
    TArray<FRigVMRegisterOffset> RegisterOffsets;
    TArray<uint8> Data;
    TArray<class UScriptStruct*> ScriptStructs;
    TMap<FName, int32> NameMap;
    bool bEncounteredErrorDuringLoad;

};

struct FRigVMMemoryStatistics
{
    int32 RegisterCount;
    int32 DataBytes;
    int32 TotalBytes;

};

struct FRigVMOperand
{
    ERigVMMemoryType MemoryType;
    uint16 RegisterIndex;
    uint16 RegisterOffset;

};

struct FRigVMParameter
{
    ERigVMParameterType Type;
    FName Name;
    int32 RegisterIndex;
    FString CPPType;
    class UScriptStruct* ScriptStruct;
    FName ScriptStructPath;

};

struct FRigVMQuaternaryOp : public FRigVMBaseOp
{
};

struct FRigVMQuinaryOp : public FRigVMBaseOp
{
};

struct FRigVMRegister
{
    ERigVMRegisterType Type;
    uint32 ByteIndex;
    uint16 ElementSize;
    uint16 ElementCount;
    uint16 SliceCount;
    uint8 AlignmentBytes;
    uint16 TrailingBytes;
    FName Name;
    int32 ScriptStructIndex;
    bool bIsArray;
    bool bIsDynamic;

};

struct FRigVMRegisterOffset
{
    TArray<int32> Segments;
    ERigVMRegisterType Type;
    FName CPPType;
    class UScriptStruct* ScriptStruct;
    class UScriptStruct* ParentScriptStruct;
    int32 ArrayIndex;
    uint16 ElementSize;
    FString CachedSegmentPath;

};

struct FRigVMRuntimeSettings
{
    int32 MaximumArraySize;

};

struct FRigVMSenaryOp : public FRigVMBaseOp
{
};

struct FRigVMSlice
{
};

struct FRigVMStatistics
{
    int32 BytesForCDO;
    int32 BytesPerInstance;
    FRigVMMemoryStatistics LiteralMemory;
    FRigVMMemoryStatistics WorkMemory;
    FRigVMMemoryStatistics DebugMemory;
    int32 BytesForCaching;
    FRigVMByteCodeStatistics ByteCode;

};

struct FRigVMStruct
{
};

struct FRigVMTemplateArgumentType
{
    FName CPPType;
    class UObject* CPPTypeObject;

};

struct FRigVMTernaryOp : public FRigVMBaseOp
{
};

struct FRigVMUnaryOp : public FRigVMBaseOp
{
};

struct FRigVMUnknownType
{
    uint32 Hash;

};

struct FRigVMUserWorkflow
{
    FString Title;
    FString Tooltip;
    ERigVMUserWorkflowType Type;
    FRigVMUserWorkflowPerformDynamicDelegate PerformDynamicDelegate;
    bool RigVMPeformUserWorkflowDynamicDelegate(const class URigVMUserWorkflowOptions* InOptions, class UObject* InController);
    UClass* OptionsClass;

};

class UDefault__RigVMMemoryStorageGeneratorClass
{
};

class URigVM : public UObject
{
    class URigVMMemoryStorage* WorkMemoryStorageObject;
    class URigVMMemoryStorage* LiteralMemoryStorageObject;
    class URigVMMemoryStorage* DebugMemoryStorageObject;
    FRigVMByteCode ByteCodeStorage;
    FRigVMInstructionArray Instructions;
    FRigVMExtendedExecuteContext Context;
    uint32 NumExecutions;
    TArray<FName> FunctionNamesStorage;
    TArray<FRigVMParameter> Parameters;
    TMap<FName, int32> ParametersNameMap;
    class URigVM* DeferredVMToCopy;

    void SetParameterValueVector2D(const FName& InParameterName, const FVector2D& InValue, int32 InArrayIndex);
    void SetParameterValueVector(const FName& InParameterName, const FVector& InValue, int32 InArrayIndex);
    void SetParameterValueTransform(const FName& InParameterName, const FTransform& InValue, int32 InArrayIndex);
    void SetParameterValueString(const FName& InParameterName, FString InValue, int32 InArrayIndex);
    void SetParameterValueQuat(const FName& InParameterName, const FQuat& InValue, int32 InArrayIndex);
    void SetParameterValueName(const FName& InParameterName, const FName& InValue, int32 InArrayIndex);
    void SetParameterValueInt(const FName& InParameterName, int32 InValue, int32 InArrayIndex);
    void SetParameterValueFloat(const FName& InParameterName, float InValue, int32 InArrayIndex);
    void SetParameterValueDouble(const FName& InParameterName, double InValue, int32 InArrayIndex);
    void SetParameterValueBool(const FName& InParameterName, bool InValue, int32 InArrayIndex);
    FRigVMStatistics GetStatistics();
    FString GetRigVMFunctionName(int32 InFunctionIndex);
    FVector2D GetParameterValueVector2D(const FName& InParameterName, int32 InArrayIndex);
    FVector GetParameterValueVector(const FName& InParameterName, int32 InArrayIndex);
    FTransform GetParameterValueTransform(const FName& InParameterName, int32 InArrayIndex);
    FString GetParameterValueString(const FName& InParameterName, int32 InArrayIndex);
    FQuat GetParameterValueQuat(const FName& InParameterName, int32 InArrayIndex);
    FName GetParameterValueName(const FName& InParameterName, int32 InArrayIndex);
    int32 GetParameterValueInt(const FName& InParameterName, int32 InArrayIndex);
    float GetParameterValueFloat(const FName& InParameterName, int32 InArrayIndex);
    double GetParameterValueDouble(const FName& InParameterName, int32 InArrayIndex);
    bool GetParameterValueBool(const FName& InParameterName, int32 InArrayIndex);
    bool Execute(const FName& InEntryName);
    int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, const FName& InMethodName);
};

class URigVMMemoryStorage : public UObject
{
};

class URigVMMemoryStorageGeneratorClass : public UClass
{
};

class URigVMNativized : public URigVM
{
};

class URigVMUserWorkflowOptions : public UObject
{
    class UObject* Subject;
    FRigVMUserWorkflow Workflow;

    bool RequiresDialog();
    void ReportWarning(FString InMessage);
    void ReportInfo(FString InMessage);
    void ReportError(FString InMessage);
    bool IsValid();
};

#endif
