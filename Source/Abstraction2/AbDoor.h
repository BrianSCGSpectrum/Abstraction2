#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbDoor.generated.h"

UCLASS(BlueprintType, Blueprintable)
class AAbDoor : public AActor
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	FString MyString;
};