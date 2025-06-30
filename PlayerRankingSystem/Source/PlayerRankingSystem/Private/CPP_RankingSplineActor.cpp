// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_RankingSplineActor.h"

// Sets default values
ACPP_RankingSplineActor::ACPP_RankingSplineActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	RootComponent = SplineComponent;
}

// Called when the game starts or when spawned
void ACPP_RankingSplineActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_RankingSplineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

