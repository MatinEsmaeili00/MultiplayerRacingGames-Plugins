// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_UW_RankingWidget.h"




void UCPP_UW_RankingWidget::SetPlacementText(int32 NewPlacement)
{
	if (PlacementText)
	{
		FString PlacementString = FString::Printf(TEXT("%d"), NewPlacement);
		PlacementText->SetText(FText::FromString(PlacementString));
	}
}
