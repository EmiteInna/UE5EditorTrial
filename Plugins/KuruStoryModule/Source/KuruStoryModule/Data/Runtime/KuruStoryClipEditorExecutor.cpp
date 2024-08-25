// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryClipEditorExecutor.h"

#include "KuruStoryClipDataInstance.h"


// Sets default values
AKuruStoryClipEditorExecutor::AKuruStoryClipEditorExecutor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = Mesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(CubeMeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void AKuruStoryClipEditorExecutor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKuruStoryClipEditorExecutor::Tick(float DeltaTime)
{
//	Super::Tick(DeltaTime);
	if (PlayingInstance && PlayingInstance->bIsPlaying)
	{
		PlayingInstance->TickPlaying(DeltaTime);
	}
}

