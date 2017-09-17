// Copyright Mike_Tengu  2017

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Rotate_Table.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API URotate_Table : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URotate_Table();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};