// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/Classes/Camera/CameraComponent.h"
#include "FPSCharacter.generated.h"

UCLASS()
class FPSPROJECTSAMPLE_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
    void MoveForward(float AxisValue);

	UFUNCTION()
	void MoveRight(float AxisValue);

	UFUNCTION()
	void StartJump();

	UFUNCTION()
	void StopJump();


	UFUNCTION()
	void Fire();

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FPSCameraComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	USkeletalMeshComponent* FPSMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GamePlay)
	FVector MuzzleOffset;

	UPROPERTY(EditDefaultsOnly, Category = projectile)
	TSubclassOf<class AFPSProjectile> ProjectileClass;
};
